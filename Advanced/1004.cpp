#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
using namespace std;

vector<int> v[100];

int book[100],maxdepth = -1;

void dfs(int index,int depth){
	if(v[index].size()==0){
		book[depth]++;
		maxdepth = max(maxdepth,depth);
		return ;
	}
	for(int i=0;i<v[index].size();i++){
		dfs(v[index][i],depth+1);
	}
}
int main(){
	int n,m,k,node,c;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>node>>k;
		for(int j=0;j<k;j++){
			cin>>c;
			v[node].push_back(c);
		}
	}
	dfs(1,0);
	printf("%d",book[0]);
	for(int i=1;i<=maxdepth;i++){
		cout<<" "<<book[i];
	}
	return 0; 
}
