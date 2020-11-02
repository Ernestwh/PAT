#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
using namespace std;

struct node{
	int t1;
	int t2;
};

int main(){
	int n,m,k;
	cin>>n>>m;
	vector<node> v(m);
	for(int i=0;i<m;i++){
		cin>>v[i].t1>>v[i].t2;
	}
	cin>>k;
	while(k--){
		int a[10005] = {0};
		bool flag = true;
		set<int> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			if(a[v[i].t1] == a[v[i].t2]){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<se.size()<<"-coloring"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
