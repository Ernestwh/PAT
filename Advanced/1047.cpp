#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<set>
#include<map>
using namespace std;

bool cmp(string a,string b){
	return a<b;
}

int main(){
	int N,K;
	cin>>N>>K;
	vector<string> stu[K+1];
	string s;
	int C;
	for(int i=0;i<N;i++){
		cin>>s>>C;
		int temp;
		for(int j=0;j<C;j++){
			cin>>temp;
			stu[temp].push_back(s);
		}
	}
	for(int i=1;i<=K;i++){
		sort(stu[i].begin(),stu[i].end(),cmp);
		printf("%d %d\n",i,stu[i].size());
		for(int j=0;j<stu[i].size();j++){
			printf("%s\n",stu[i][j].c_str());
		}
	}
	return 0;
}
