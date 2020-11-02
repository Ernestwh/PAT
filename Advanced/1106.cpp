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
int mindepth = 99999999,minnum=0;

void dfs(int index,int depth){
	if(mindepth < depth){
		return ;
	}
	if(v[index].size()==0){
		if(mindepth == depth){
			minnum++;
		}else if(mindepth > depth){
			mindepth = depth;
			minnum = 1;
		}
	}
	for(int i=0;i<v[index].size();i++){
		dfs(v[index][i],depth+1);
	}
}


int main(){
	int n,k,c;
	double p,r;
	cin>>n;
	cin>>p>>r;
	
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>c;
			v[i].push_back(c);
		}
	}
	dfs(0,0);
	printf("%.4f %d",p*pow(1+r/100,mindepth),minnum);
}
