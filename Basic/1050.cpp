#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int cmp(int a,int b){
	return a>b;
}
int getm(int N){
	int m=0;
	for(int i=sqrt((double)N);i>=1;i--){
		if(N%i==0){
			m=N/i;
			break;
		}
	}
	return m;
}

int main(){
	int N;
	cin>>N;
	int A[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	sort(A,A+N,cmp);
	int m = getm(N);
	int n = N/m;
	int B[m][n]={0};
	int left = 0,right = n-1,top=0,bottom = m-1;
	int t = 0;
	int level = m/2+m%2;
	for (int i = 0; i < level; i++) {
	        for (int j = i; j <= n - 1 - i && t <= N - 1; j++)
	                B[i][j] = A[t++];
	        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)
	                B[j][n - 1 - i] = A[t++];
	        for (int j = n - i - 1; j >= i && t <= N - 1; j--)
	                B[m - 1 - i][j] = A[t++];
	        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)
	                B[j][i] = A[t++];
	}	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==n-1){
				cout<<B[i][j];
			}else{
				cout<<B[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
