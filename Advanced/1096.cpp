#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;

int main(){
	long int num,temp;
	cin>>num;
	long int maxn = sqrt(num);
	int i,j,first=0;
	int len = 0;
	for(i=2;i<=maxn;i++){
		temp=1;
		for(j=i;j<=maxn;j++){
			temp*=j;
			if(num%temp!=0) break;
		}
		if((j-i)>len){
			len = j-i;
			first = i;
		}
	}
	if(first ==0) cout<<1<<endl<<num;
	else{
		cout<<len<<endl;
		for(i=0;i<len;i++){
			cout << first + i;
			if (i != len - 1) cout << '*';
		}
	}
	return 0;
}
