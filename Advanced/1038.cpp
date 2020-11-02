#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;

bool cmp(string a,string b){
	return a+b<b+a;
}

int main(){
	int n;
	cin>>n;
	vector<string> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end(),cmp);
	string s;
	for(int i=0;i<vec.size();i++){
		s += vec[i];
	}
	while(s[0]=='0' && s.length()!=0) s.erase(s.begin());
	if(s.length()==0) {
		cout<<0; 
		return 0;
	}
	cout<<s;
	return 0;
}
