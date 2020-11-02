#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
#include<map> 
using namespace std;


int main(){
	long long int g1,s1,k1,g2,s2,k2;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&g1,&s1,&k1,&g2,&s2,&k2);
	long long int sum=g1*29*17+s1*29+k1+g2*29*17+s2*29+k2;
	cout<<sum/(29*17)<<"."<<(sum/29)%17<<"."<<sum%29;
}

