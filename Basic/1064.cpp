#include<iostream>
#include<algorithm>
using namespace std;

int sum(int N){
	int count=0;
	while(N){
		count+=N%10;
		N=N/10; 
	}
	return count;
}

int main(){
	int N;
	cin>>N;
	int hash[40]={0};
	int num;
	for(int i=0;i<N;i++){
		cin>>num;
		hash[sum(num)]++;
	}
	int count=0;
	for(int i=0;i<40;i++){
		if(hash[i]!=0) count++;
	}
	cout<<count<<endl;
	for(int i=0;i<40;i++){
		if(hash[i]!=0){
			cout<<i;
			if(count!=1) cout<<" ";
			count--; 
		}
	}
	return 0;
}
