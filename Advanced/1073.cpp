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
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='E') i++;
	string t = s.substr(1,i-1);
	int n = stoi(s.substr(i+1));
	if(s[0]=='-') cout<<"-";
	if(n<0){
		cout<<"0.";
		for(int j=0;j<abs(n)-1;j++) cout<<"0";
		for(int j=0;j<t.size();j++){
			if(t[j]!='.') cout<<t[j];
		}
	}else{
		cout<<t[0];
		int cnt,j;
		for(j=2,cnt=0;j<t.size()&&cnt<n;j++,cnt++) cout<<t[j];
		if(j==t.size()){
			for(int k=0;k<n-cnt;k++) cout<<"0";
		}else{
			cout<<".";
			for(int k=j;k<t.size();k++) cout<<t[k];  
		}
	}
	return 0;
}
