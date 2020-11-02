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

vector<int> v[100005];
int maxdepth = 0,maxnum=0;

void dfs(int index,int depth){
	if(v[index].size()==0){
		if(depth == maxdepth){
			maxnum++;
		}else if(maxdepth<depth){
			maxdepth = depth;
			maxnum=1;
		}else{
			return ;
		}
	}
	for(int i=0;i<v[index].size();i++){
		dfs(v[index][i],depth+1);
	}
}

int main(){
	int n;
	double p,r;
	cin>>n;
	cin>>p>>r;
	int c;
	int root;
	for(int i=0;i<n;i++){
		cin>>c;
		if(c!=-1){
			v[c].push_back(i);
		}else{
			root = i;
		}
	}
	dfs(root,0);
	printf("%.2f %d",p*pow(1+r/100,maxdepth),maxnum);
}
