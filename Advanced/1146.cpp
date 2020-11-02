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

int main(){
	int n,m,a,b,k,flag=0;
	int in[1010] = {0};
	cin>>n>>m;
	vector<int> v[1010];
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		in[b]++;		
	}
	cin>>k;
	for(int i=0;i<k;i++){
		int judge  = 1;
		vector<int> tmp(in,in+n+1);
		for(int j=0;j<n;j++){
			cin>>a;
			if(tmp[a]!=0){
				//不是拓扑结构 
				judge = 0;
			}
			for(int val:v[a]) tmp[val]--;
		}
		//是拓扑结构则继续循环，不是则不用 
		if(judge==1)  continue;
		printf("%s%d",flag==1?" ":"",i);
		flag = 1;
	}
	return 0;
}
