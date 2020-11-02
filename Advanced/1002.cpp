#include<iostream>


using namespace std;

int main(){
	float c[1001] = {0};
	int m,n,t;
	float num;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t>>num;
		c[t]+=num;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>num;
		c[t]+=num;
	}
	int cnt=0;
	for(int i=0;i<1001;i++){
		if(c[i]!=0) cnt++; 
	}
	cout<<cnt;
	for(int i=1000;i>=0;i--){
		if(c[i] !=0.0){
			cout<<" "<<i<<" "<<c[i];
		}
	}
	return 0;
}
