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


int sum(int n){
	int s=0;
	while(n){
		s+=n%10;
		n=n/10;
	}
	return s;
}

int main(){
	int hash[40]={0};
	int n;
	cin>>n;
	int temp;
	int cnt = 0;
	for(int i=0;i<n;i++){
		cin>>temp;
		int t= sum(temp);
		if(!hash[t]){
			hash[t]=1;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	bool flag = true;
	for(int j=0;j<40;j++){
		if(hash[j]){
			if(flag){
				cout<<j;
				flag = false;
			}else{
				cout<<" "<<j;
			}
			
		}
	}
	return 0;
}
