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
using namespace std;

vector<vector<int>> v;
vector<bool> vis; 
int cnt=0;

void dfs(int index){
	vis[index] = true;
	cnt++;
	for(int i=0;i<v[index].size();i++){
		if(vis[v[index][i]]==false){
			dfs(v[index][i]);
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	v.resize(n+1);
	vis.resize(n+1);
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int odd = 0;
	int flag = 0;
	for(int i=1;i<=n;i++){
		if(i==1){
			cout<<v[i].size();
		}else{
			cout<<" "<<v[i].size();
		}
		if(v[i].size()<0){
			flag = -1;
		}
		else if(v[i].size()%2!=0){
			odd++;
		}
	}
	cout<<endl;
	dfs(1);
	if(odd==0 && flag==0 && cnt==n){
		cout<<"Eulerian";
	}
	else if(odd==2 && flag==0 && cnt==n){
		cout<<"Semi-Eulerian";
	}else{
		cout<<"Non-Eulerian";
	}
	return 0;
	
}
