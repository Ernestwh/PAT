#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int book[50001];

struct node{
	int value,cnt;
	bool operator < (const node &a) const{
		return (cnt!=a.cnt)?cnt>a.cnt :value<a.value;
	}
};

int main(){
	int n,k,num;
	cin>>n>>k;
	set<node> s;
	for(int i=0;i<n;i++){
		cin>>num;
		if(i!=0){
			printf("%d:",num);
			int tempcnt = 0;
			for(auto it = s.begin();tempcnt<k && it!=s.end();it++){
				printf(" %d",it->value);
				tempcnt++;
			}
			printf("\n");
		}
		auto it = s.find(node{num,book[num]});
		if(it!=s.end()) s.erase(it);
		book[num]++;
		s.insert(node{num,book[num]});	
	}
	return 0;
}


