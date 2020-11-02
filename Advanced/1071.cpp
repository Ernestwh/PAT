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

int main(){
	string s,t;
	getline(cin,s);
	map<string,int> m;
	for(int i=0;i<s.size();i++){
		if(isalnum(s[i])){
			s[i] = tolower(s[i]);
			t+=s[i];
		}
		if(!isalnum(s[i]) || i==s.size()-1){
			if(t.size()!=0) m[t]++;
			t = "";
		}
	}
	string res;
	int maxn=0;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second > maxn){
			maxn = it->second;
			res = it->first;
		}
	}
	cout<<res<<" "<<maxn;
	return 0; 
}
