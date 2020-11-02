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

vector<int> levelsum;
vector<int> f[105]; 

void dfs(int index,int depth){
	levelsum[depth]++;
	if(f[index].size()==0) return;
	for(int i=0;i<f[index].size();i++){
		dfs(f[index][i],depth+1);
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	levelsum.resize(n+1);
	int id,k;
	for(int i=0;i<m;i++){
		cin>>id>>k;
		int tmp;
		for(int j=0;j<k;j++){
			cin>>tmp;
			f[id].push_back(tmp);
		}
	}
	dfs(1,1);
	int maxsum=0,maxlevel=0;
	for(int i=1;i<=n;i++){
		if(levelsum[i]>maxsum){
			maxsum=levelsum[i];
			maxlevel=i;
		}
	}
	cout<<maxsum<<" "<<maxlevel;
	return 0;
}
