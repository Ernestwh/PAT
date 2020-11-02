#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a,int b){
	return a>b;
}

int main(){
	int A[100001];
	int N;
	cin>>N;
	int count =0,p=1;
	int E; 
	for(int i=1;i<=N;i++){
		cin>>A[i];
	}
	sort(A+1,A+N+1,cmp);
	while(count<=N&&A[p]>p){
		count++;
		p++;
	}
	cout<<count;
	return 0; 
}
