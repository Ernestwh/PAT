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
	int n,m;
	cin>>n>>m;
	vector<node> ans(m);
	for(int i=0;i<m;i++){
		cin>>ans[i].t1>>ans[i].t2;		
	}
	int k;
	cin>>k;
	int num;
	while(k--){
		cin>>num;
		int temp;
		int hash[100010]={0};
		bool flag = true;
		for(int i=0;i<num;i++){
			cin>>temp;
			hash[temp]=1;
		}
		for(int i=0;i<m;i++){
			if(!hash[ans[i].t1] && !hash[ans[i].t2]){
				flag = false;
				break;
			}
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
