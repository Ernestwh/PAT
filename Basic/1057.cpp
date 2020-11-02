#include<iostream>
#include <cstdio>
#include<cctype>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	int sum=0;
	for(int i=0;i<str.size();i++){
		if(tolower(str[i])>='a'&&tolower(str[i])<='z'){
			sum+=tolower(str[i])-96;
		}
	}
	int count0=0,count1=0;
	int d01;
	while(sum){
		d01 = sum%2;
		d01 == 1 ? count1++:count0++;
		sum=sum/2; 
	}
	cout<<count0<<" "<<count1;
	return 0;
} 
