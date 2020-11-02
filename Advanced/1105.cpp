#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<set>
#include<math.h>

using namespace std;

int getm(int n){
	int sq = sqrt(n);
	int m;
	for(int i=1;i<=sq;i++){
		if(n%i==0) m =i;
	}
	return m;
}
int main(){
	int N;
	cin>>N;
	vector<int> temp(N,0);
	for(int i=0;i<N;i++){
		cin>>temp[i];
	}
	sort(temp.begin(),temp.end(),greater<int>());
	int m = getm(N);
	int n = N/m;
	m = max(m,n);
	n = N/m;	
	int cnt=m/2+m%2;
	int t=0;
	vector<vector<int>> res(m,vector<int>(n));
	for(int i=0;i<cnt;i++){
		for(int j=i;j<=n-1-i&&t<=N-1;j++){
			res[i][j] = temp[t++];
		}
		for(int j=i+1;j<=m-2-i&&t<=N-1;j++){
			res[j][n-1-i] = temp[t++];
		}
		for(int j=n-i-1;j>=i && t<=N-1;j--){
			res[m-1-i][j] = temp[t++];
		}
		for(int j=m-2-i;j>=i+1 && t<=N-1;j--){
			res[j][i] = temp[t++];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",res[i][j]);
			if(j!=n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
