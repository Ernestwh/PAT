#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	long long A,DA,B,DB;
	cin>>A>>DA>>B>>DB;
	long long a=0,b=0;
	while(A!=0){
		if(A%10==DA) a=a*10+A%10;
		A=A/10;
	}
	while(B!=0){
		if(B%10==DB) b=b*10+B%10;
		B=B/10;
	}
	cout<<a+b;
}
