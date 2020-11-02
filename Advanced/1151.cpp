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
vector<int> in,pre;
map<int,int> mp;
void lca(int inl,int inr,int preroot,int a,int b){
	if(inl>inr) return;
	int inroot = mp[pre[preroot]],ain = mp[a],bin=mp[b];
	if(ain<inroot && bin<inroot){
		lca(inl,inroot-1,preroot+1,a,b);
	}else if((ain<inroot && bin>inroot) || (ain>inroot && bin<inroot)){
		printf("LCA of %d and %d is %d.\n",a,b,in[inroot]);
	}else if(ain>inroot && bin>inroot){
		lca(inroot+1,inr,preroot+1+(inroot-inl),a,b);
	}else if(ain==inroot){
		printf("%d is an ancestor of %d.\n", a, b);
	}else if(bin==inroot){
		printf("%d is an ancestor of %d.\n", b, a);
	}
}
int main(){
	int m,n,a,b;
	cin>>m>>n;
	in.resize(n+1);
	pre.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>in[i];
		mp[in[i]] = i;
	}
	for(int i=1;i<=n;i++){
		cin>>pre[i];
	}
	for(int i=0;i<m;i++){
		cin>>a>>b;
		if(!mp[a] && !mp[b]){
			printf("ERROR: %d and %d are not found.\n", a, b);
		}else if(!mp[a] || !mp[b]){
			printf("ERROR: %d is not found.\n", mp[a] == 0 ? a : b);
		}else{
			lca(1,n,1,a,b);
		}
	}
	return 0;
}
