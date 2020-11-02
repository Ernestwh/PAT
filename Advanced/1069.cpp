#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
#include<map> 
using namespace std;

int getmin(int n){
	int A[4]={0};
	for(int i=0;i<4;i++){
		A[i]=n%10;
		n=n/10;
	}
	sort(A,A+4);
	int max=0;
	for(int i=0;i<4;i++){
		max=max*10+A[i];
	}
	return max;
}
int getmax(int n){
	int A[4]={0};
	for(int i=0;i<4;i++){
		A[i]=n%10;
		n=n/10;
	}
	sort(A,A+4);
	int min=0;
	for(int i=3;i>=0;i--){
		min=min*10+A[i];
	}
	return min;
}



int main(){
	int N;
	
	cin>>N;


	int max,min;
	max = getmax(N);
	
	min = getmin(N);
	
	int ka;
	
	ka = max - min;
	
	if(ka==0){
		printf("%04d - %04d = %04d",max,min,ka);
	}
	else{
		printf("%04d - %04d = %04d\n",max,min,ka);
		while(ka!=6174){
			max = getmax(ka);
			min = getmin(ka);
			ka = max-min;
			printf("%04d - %04d = %04d\n",max,min,ka);
		}
	}
	return 0;
	
}
