#include<iostream>
#include<vector>
#include<set>
#include<cmath>
using namespace std;
bool isprime(int a) {
	if(a <= 1) return false;
 	int Sqrt = sqrt((double)a);
 	for(int i = 2; i <= Sqrt; i++) {
 		if(a % i == 0)
 			return false; 
	}
	return true;
}

int main(){
	int N;
	cin>>N;
	int A[10001]={0};
	int B[10001]={0};
	int temp;
	for(int i=0;i<N;i++){
		cin>>temp;
		A[temp] =i+1;
		B[temp] =1;
	}
	int K;
	int id;
	int C[10001]={0};
	cin>>K;
	for(int i=0;i<K;i++){
		cin>>id;
		printf("%04d: ",id);
		if(B[id]==1){
			if(C[id]==0){
				C[id] =1;
				if(A[id]==1){
					printf("Mystery Award\n");
				}
				else if(isprime(A[id])){
					printf("Minion\n");
				}
				else{
					printf("Chocolate\n");
				}
			}else{
				printf("Checked\n");
			}
		}else{
			printf("Are you kidding?\n");
		}
	}
	return 0;
}
