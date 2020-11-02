#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;
vector<int> prime(500000, 1);
int main(){
	for(int i = 2; i * i < 500000; i++)
		for(int j = 2; j * i < 500000; j++)
			prime[j * i] = 0;
	long int a;
	cin>>a;
	cout<<a<<"=";
	if(a == 1) printf("1");
	bool state = false;
	for(int i=2;a>=2;i++){
		int cnt=0,flag = 0;
		while(prime[i]==1 && a%i==0){
			cnt++;
			a=a/i;
			flag = 1;
		}
		if(flag){
			if(state) cout<<"*";
			cout<<i;
			state = true;
		}
		if(cnt>=2){
			cout<<"^"<<cnt;
		}
	}
	return 0;
}
