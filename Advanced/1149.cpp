#include <iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string.h>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <stack>
#include <set>
using namespace std;
int main(){
	map<int,vector<int>> mp;
	int N,M;
	cin>>N>>M;
	int a,b;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	int K;
	for(int i=0;i<M;i++){
		cin>>K;
		int flag = 0;
		int c[100001]={0};
		vector<int> v(K);
		for(int j=0;j<K;j++){
			cin>>v[j];
			c[v[j]]=1;
		}
		for(int j=0;j<K;j++){
			for(int l=0;l<mp[v[j]].size();l++){
				if(c[mp[v[j]][l]]==1) flag = 1;
			}
		}
		printf("%s\n",flag ? "No" :"Yes");
	}
	return 0;
}
