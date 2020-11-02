#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N+1];
	for(int i=1;i<=N;i++){
		cin>>A[i];
	}
	int B[10000] = {0};
	for(int i=1;i<=N;i++){
		B[abs(A[i]-i)]++;
	}
	for(int i=9999;i>=0;i--){
		if(B[i]>1){
			cout<<i<<" "<<B[i]<<endl;
		}
	}
	return 0;
}
