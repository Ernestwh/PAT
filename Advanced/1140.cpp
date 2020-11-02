#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<set>
#include<map>
using namespace std;


int main(){
	string s;
	int N,j;
	cin>>s>>N;
	for(int cnt=1;cnt<N;cnt++){
		string t;
		for(int i=0;i<s.length();i=j){
			for(j=i;j<s.length()&&s[j]==s[i];j++);
			t +=to_string((s[i]-'0')*10+j-i);
		}
		s=t;
	}
	cout<<s;
	return 0;
}
