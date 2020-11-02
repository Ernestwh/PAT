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

string add(string s1,string s2){
	string res="";
	int cnt=0;
	for(int i=0;i<s1.length();i++){
		int tmp = s1[i]-'0'+s2[i]-'0'+cnt;
		cnt = 0;
		if(tmp>=10){
			tmp = tmp-10;
			cnt=1;
		}
		res += tmp+'0';
	}
	if(cnt) res+='1';
	reverse(res.begin(),res.end());
	return res;
}



int main(){
	string s;
	cin>>s;
	for(int i=0;i<10;i++){
		string s1 = s;
		reverse(s.begin(),s.end());
		if(s1==s){
			cout<<s1<<" is a palindromic number.";
			return 0;
		}
		cout<<s1<<" + "<<s<<" = ";
		s = add(s1,s);
		cout<<s<<endl;
	}
	cout<<"Not found in 10 iterations.";
	return 0; 
}
