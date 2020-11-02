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
	int k;
	cin>>k;
	string s;
	cin>>s;
	map<char,bool> m;
	vector<int> book(256,0);
	vector<int> sure(256,0);
	char pre = s[0];
	int cnt=1;
	for(int i=1;i<s.length();i++){
		if(s[i]==pre){
			cnt++;
		}else{
			if(cnt%k!=0){
				sure[pre] = 1;
			}
			cnt = 1;
		}
		if(cnt%k==0) m[s[i]] = true;
		pre = s[i];
	}
	for(int i=0;i<s.length();i++){
		if(sure[s[i]]){
			m[s[i]]=false;
		}
	}
	for(int i=0;i<s.length();i++){
		if(m[s[i]] && book[s[i]]==0){
			printf("%c",s[i]);
			book[s[i]]=1;
		} 
	}
	cout<<endl;
	for(int i=0;i<s.length();i++){
		printf("%c",s[i]);
		if(m[s[i]]){
			i=i+k-1;
	 	}
	}
	return 0;
}
