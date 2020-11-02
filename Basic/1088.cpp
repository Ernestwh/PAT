#include<iostream>
#include<cmath>
using namespace std;

void cmp(int a,double  b){
	if(a<b) cout<<" Cong";
	else if(a==b) cout<<" Ping";
	else cout<<" Gai";
}

int main(){
	int M,X,Y;
	cin>>M>>X>>Y;
	double fjia = 0,fyi = 0,fbing = 0;
	for(int i=10;i<100;i++){
		double yi = i%10*10 + i/10;
		double bing = abs(i-yi)/X;
		if(yi == bing*Y){
			fjia = i;
			fyi = yi;
			fbing = bing;
		}
	}
	if(fjia){
		cout<<fjia;
		cmp(M,fjia);
		cmp(M,fyi);
		cmp(M,fbing);
	}else{
		cout<<"No Solution"; 
	}
	return 0;
}
