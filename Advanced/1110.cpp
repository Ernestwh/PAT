#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<set>
using namespace std;

struct node{
	int l,r;
}a[100];
int maxn=-1,ans;
void dfs(int root,int index){
	if(index>maxn){
		maxn = index;
		ans = root;
	}
	if(a[root].l!=-1) dfs(a[root].l,index*2+1);
	if(a[root].r!=-1) dfs(a[root].r,index*2+2);
}


int main(){
	int n,root,ischild[100] = {0};
	cin>>n;
	for(int i=0;i<n;i++){
		string l,r;
		cin>>l>>r;
		if(l=="-"){
			a[i].l=-1;		
		}else{
			a[i].l=stoi(l);
			ischild[stoi(l)] = 1;
		}
		if(r=="-"){
			a[i].r=-1;
		}else{
			a[i].r=stoi(r);
			ischild[stoi(r)] = 1;
		}
	}
	while(ischild[root]==1) root++;
	dfs(root,0);
	if(maxn == n-1){
		cout<<"YES "<<ans;
	}else{
		cout<<"NO "<<root;
	}
	return 0;
}
