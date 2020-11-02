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

int main(){
	int n,k;
	cin>>n>>k;
	map<string,vector<int>> cmap;
	int c,num;
	string temp;
	for(int i=0;i<k;i++){
		cin>>c>>num;
		for(int j=0;j<num;j++){
			cin>>temp;
			cmap[temp].push_back(c);
		}
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		printf("%s ",temp.c_str());
		printf("%d",cmap[temp].size());
		sort(cmap[temp].begin(),cmap[temp].end());
		for(int j=0;j<cmap[temp].size();j++){
			printf(" %d",cmap[temp][j]);
		}
		printf("\n");
	}
	return 0;
}
