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

int target;
struct node{
	int w;
	vector<int> child;
};
vector<node> v;
vector<int> path;
void dfs(int index,int nodenum,int sum){
	if(sum>target) return;
	if(sum==target){
		if(v[index].child.size()!=0) return;
		for(int i=0;i<nodenum;i++){
			printf("%d%c",v[path[i]].w,i!=nodenum-1?' ':'\n');
		}
		return;
	}
	for(int i=0;i<v[index].child.size();i++){
		int node = v[index].child[i];
		path[nodenum] = node;
		dfs(node,nodenum+1,sum+v[node].w);
	}
} 

bool cmp(int a,int b){
	return v[a].w > v[b].w;
}

int main(){
	int n,m,ode,k;
	cin>>n>>m>>target;
	v.resize(n),path.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i].w;
	} 
	for(int i=0;i<m;i++){
		cin>>ode>>k;
		v[ode].child.resize(k);
		for(int j=0;j<k;j++){
			cin>>v[ode].child[j];
		}
		sort(v[ode].child.begin(),v[ode].child.end(),cmp);
	}
	dfs(0,1,v[0].w);
	return 0;
}


