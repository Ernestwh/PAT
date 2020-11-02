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
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int hash[130]={0};
	int hash1[130]={0};
	for(int i=0;i<s2.length();i++){
		hash[s2[i]]++;
	}
	for(int i=0;i<s1.length();i++){
		if(!hash[s1[i]]){
			if(s1[i]>='a'&&s1[i]<='z'){
				s1[i] = s1[i]-32;
				
			}
			if(!hash1[s1[i]]){
				cout<<s1[i];
				hash1[s1[i]]++;
			}
		
		}
	}
	return 0;
}
