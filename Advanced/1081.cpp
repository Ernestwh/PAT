#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
using namespace std;

long long gcd(long long a,long long b){
	return b==0? abs(a):gcd(b,a%b);
}

int main(){
	
	long long n,a,b,suma=0,sumb=1,gcdvalue;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%lld/%lld",&a,&b);
		gcdvalue = gcd(a,b);
		a = a/gcdvalue;
		b = b/gcdvalue;
		suma = a*sumb + suma*b;
		sumb = b*sumb;
		gcdvalue = gcd(suma,sumb);
		suma = suma/gcdvalue;
		sumb = sumb/gcdvalue;
	}
	long long integer = suma/sumb;
	suma = suma-(integer*sumb);
	if(integer !=0){
		cout<<integer;
		if(suma != 0) cout<<" ";
	}
	if(suma!=0){
		cout<<suma<<"/"<<sumb;
	}
	if(!integer && !suma){
		cout<<"0";
	}
	return 0;
}
