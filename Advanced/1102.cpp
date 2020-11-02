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
	int id,l,r,index,level;
}a[100];
vector<node> v1;
bool cmp(node a,node b){
	if(a.level!=b.level) return a.level<b.level;
	return a.index>b.index;
}
void dfs(int root,int index,int level){
	if(a[root].r!=-1) dfs(a[root].r,index*2+2,level+1);
	v1.push_back({root,a[root].l,a[root].r,index,level});
	if(a[root].l!=-1) dfs(a[root].l,index*2+1,level+1);
}
int main(){
	int n;
	int ischild[100]={0},root=0;
	cin>>n;
	string l,r;
	for(int i=0;i<n;i++){
		a[i].id =  i;
		cin>>l>>r;
		if(l!="-"){
			a[i].l = stoi(l);
			ischild[stoi(l)] = 1;
		}else{
			a[i].l = -1;
		}
		if(r!="-"){
			a[i].r = stoi(r);
			ischild[stoi(r)] = 1;
		}else{
			a[i].r = -1;
		}
	}
	while(ischild[root]!=0) root++;
	dfs(root,0,0);
	vector<node> v2(v1);
	sort(v2.begin(),v2.end(),cmp);
	for(int i=0;i<v2.size();i++){
		if(i==0) cout<<v2[i].id;
		else cout<<" "<<v2[i].id;
	}
	cout<<endl;
	for(int i=0;i<v1.size();i++){
		if(i==0) cout<<v1[i].id;
		else cout<<" "<<v1[i].id;
	}
	return 0;
}



