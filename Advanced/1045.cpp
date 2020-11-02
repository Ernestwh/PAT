#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;

int main(){
	int n,m,l;
	cin>>n;
	cin>>m;
	vector<int> fvec(201,0);
	int x;
	for(int i=1;i<=m;i++){
		cin>>x;
		fvec[x] = i;
	}
	cin>>l;
	int num=0;
	vector<int> svec(10001);
	for(int i=0;i<l;i++){
		cin>>x;
		if(fvec[x]>=1){
			svec[num++] = fvec[x];
		}
	}
	vector<int> dp(10001,1);
	int res=0;
	for(int i=0;i<num;i++){
		for(int j=0;j<i;j++){
			if(svec[i]>=svec[j]){
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
		res = max(res,dp[i]);
	}
	cout<<res;
	return 0;
}
