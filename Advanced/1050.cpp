#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
using namespace std;


int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int hash[130]={0};
	for(int i=0;i<s2.length();i++){
		hash[s2[i]]=1;
	}
	for(int i=0;i<s1.length();i++){
		if(hash[s1[i]]==0){
			cout<<s1[i];
		}
	}
	return 0;
} 
