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
	return a==0?b:gcd(b%a,a);
}
void func(long long m,long long n){
	if(m*n==0){
		printf("%s",n==0?"Inf":"0");
		return;
	}
	bool flag = ((m<0 &&n>0) || (m>0 && n<0));
	m = abs(m),n = abs(n);
	long long x = m/n;
	printf("%s",flag?"(-":"");
	if(x!=0) printf("%lld",x);
	if(m%n==0){
		if(flag) printf(")");
		return;
	}
	if(x != 0) printf(" ");
	m = m-x*n;
	long long t = gcd(m,n);
	m = m/t,n=n/t;
	printf("%lld/%lld%s",m,n,flag?")":"");
}

int main(){
	long long a1,b1,a2,b2;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	func(a1,b1);printf(" + ");func(a2,b2);printf(" = ");func(a1*b2+a2*b1,b1*b2);printf("\n");
	func(a1,b1);printf(" - ");func(a2,b2);printf(" = ");func(a1*b2-a2*b1,b1*b2);printf("\n");
	func(a1,b1);printf(" * ");func(a2,b2);printf(" = ");func(a1*a2,b1*b2);printf("\n");
	func(a1,b1);printf(" / ");func(a2,b2);printf(" = ");func(a1*b2,b1*a2);printf("\n");
}
