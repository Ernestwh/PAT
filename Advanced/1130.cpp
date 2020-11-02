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
using namespace std;

struct node{
	string data;
	int l,r;
}a[100];

string dfs(int root) {
	if(a[root].l == -1 && a[root].r == -1) return a[root].data;
	if(a[root].l != -1 && a[root].r == -1) return "(" + dfs(a[root].l) + a[root].data+")";
	if(a[root].l == -1 && a[root].r != -1) return "(" + a[root].data + dfs(a[root].r)+")";
	if(a[root].l != -1 && a[root].r != -1) return "(" + dfs(a[root].l) + a[root].data+dfs(a[root].r)+")";
}

int main(){
	int ischild[100]={0},n,root = 1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].data>>a[i].l>>a[i].r;
		if(a[i].l !=-1 ) ischild[a[i].l]= 1;
		if(a[i].r !=-1 ) ischild[a[i].r] = 1;
	}
	while(ischild[root]==1) root++;
	string ans = dfs(root);
	if(ans[0]=='(') ans = ans.substr(1,ans.size()-2);
	cout<<ans;
	return 0;
}
