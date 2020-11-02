#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N;
	cin>>N;
	long long A[N] = {0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	long long left[N]={0};
	for(int i=0;i<N;i++){
		if(i>0) left[i] = left[i-1];
		left[i] = max(left[i],A[i]);
	}
	long long right = A[N-1];
	long long B[N]={0};
	int count=0;
	for(int i=N-1;i>=0;i--){
		right=min(right,A[i]);
		if(right ==left[i]){
			count++;
			B[i]=A[i];
		}
	}
	cout<<count<<endl;
	sort(B,B+N);
	for(int i=0;i<N;i++){
		if(B[i]!=0){
			if(i==N-1){
				cout<<B[i];
			}
			else{
				cout<<B[i]<<" ";
			}
		}
		 
	}
    cout<<endl;
    return 0;
}
