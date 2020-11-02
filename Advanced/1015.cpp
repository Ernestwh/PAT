#include<iostream>
#include <climits>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool isprime(int n){
	if(n<=1) return false;
	int sqr = int(sqrt(n * 1.0));
	for(int i=2;i<=sqr;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n,d;
	while(scanf("%d",&n)!=EOF){
		if(n<0) break;
		scanf("%d", &d);
		if(!isprime(n)){
			cout<<"No"<<endl;
			continue;
		}
		int len = 0, arr[100];
		while(n){
			arr[len++]=n%d;
			n=n/d;
		}
		for(int i=0;i<len;i++){
			n = n*d+arr[i];
		}
		if(!isprime(n)){
			cout<<"No"<<endl;
			continue;
		}
		cout<<"Yes";
	}
	return 0;
}
