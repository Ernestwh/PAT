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
int n;
vector<int> v;
vector<int> visited;
void dfs(int index){
	if((index*2)>n &&(index*2+1)>n){
		if(index<=n){
			for(int i=0;i<visited.size();i++){
				printf("%d%s",visited[i],i!=visited.size()-1?" ":"\n");
			}
		}
	}else{
		visited.push_back(v[index*2+1]);
		dfs(index*2+1);
		visited.pop_back();
		visited.push_back(v[index*2]);
		dfs(index*2);
		visited.pop_back();
	}
	
}
int main(){
	cin>>n;
	v.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	visited.push_back(v[1]);
	dfs(1);
	int flag = v[1]>v[2]?1:-1;
	for(int i=1;i<=n/2;i++){
		int left = 2*i;
		int right = 2*i+1;
		if(flag==1 && (v[i]<v[left] || (right<=n && v[i]<v[right]))) flag = 0;
		if(flag==-1 && (v[i]>v[left] || (right<=n && v[i]>v[right]))) flag = 0;
	} 
	if(flag==0) cout<<"Not Heap";
	else printf("%s",flag==1?"Max Heap":"Min Heap");
	return 0;
}
