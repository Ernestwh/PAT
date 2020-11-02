#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
	string low[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string high[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	
	int n;
	cin>>n;
	getchar();
	string str;
	for(int i=0;i<n;i++){
		getline(cin,str);
		if(str[0]>='0'&&str[0]<='9'){
			int num = stoi(str);
			if(num/13) cout<<high[num/13];
			if((num/13)&&(num%13)) cout<<" ";
			if(num%13 || num==0) cout<<low[num%13];
		}else{
			int num1=0,num2=0;
			string s1 = str.substr(0,3),s2;
			if(str.size()>4) s2 = str.substr(4);
			for(int j=0;j<13;j++){
				if(s1==low[j] || s2==low[j]) num2 = j;
				if(s1==high[j]) num1=j;
			}
			cout<<num1*13+num2;
			
		}
		cout<<endl;
	}
	return 0;
}
