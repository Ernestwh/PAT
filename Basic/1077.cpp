#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int A[N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>A[j];
		}
		sort(A+1,A+N);
		int max,min;
		for(int k=1;k<N;k++){
			if(A[k]>=0 && A[k]<=M){
				min = k;
				break;
			}
		}
		for(int k=N-1;k>=1;k--){
			if(A[k]>=0 && A[k]<=M){
				max = k;
				break;
			}
		}
		int sum = 0;
		for(int l=min+1;l<max;l++){
			sum+=A[l];
		}
		int G1 = sum/(max-min-1);
		int G2 = A[0];
		cout<<(G1+G2+1)/2<<endl;
	}
	return 0;
}
