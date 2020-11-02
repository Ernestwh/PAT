#include<iostream>
#include<map>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s;
	int n;
	cin>>s>>n;
	int j;
	for(int cnt=1;cnt<n;cnt++){
		string t;
		for(int i=0;i<s.length();i = j){
			for(j=i;j<s.length() && s[j]==s[i];j++);
			t +=to_string((s[i]-'0')*10 + j-i);
		}
		s=t;
	}
	cout<<s;
	return 0;
}
