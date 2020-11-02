#include <iostream>
#include <vector>
#include <map>
#include<cmath>
using namespace std;

bool isprime(int a) {
	if(a <= 1) return false;
 	int Sqrt = sqrt((double)a);
 	for(int i = 2; i <= Sqrt; i++) {
 		if(a % i == 0)
 			return false; 
	}
	return true;
}
int main(){
	int l,k;
	cin>>l>>k;
	string str;
	cin>>str;
	string s;
	int flag = 1;
	int num;
	for(int i=0;i<=l-k;i++){
		s = str.substr(i, k);
		num = stoi(s);
		if(isprime(num)){
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		cout<<404;
		return 0;
	}
	cout<<s;
	return 0;
	  
}
