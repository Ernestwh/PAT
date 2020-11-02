#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;

bool isPrime(int n){
	if(n==0 || n==1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int l,k;;
	string s;
	cin>>l>>k>>s;
	for(int i=0;i<=l-k;i++){
		long int num = stoi(s.substr(i,k));
		if(isPrime(num)){
			cout<<s.substr(i,k);
			return 0;
		}
	}
	cout<<"404";
	return 0;
}

