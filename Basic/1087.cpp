#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int A[N+1] = {0};
	for(int i=1;i<=N;i++){
		A[i] = i/2 + i/3 + i/5;
	}
	int count=0;
	for(int i=1;i<=N;i++){
		if(A[i]==A[i+1]){
			continue;
		}else{
			count++;
		}
	}
	cout<<count;
	return 0;
}


