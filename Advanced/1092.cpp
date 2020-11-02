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
	for(int i=0;i<s1.length();i++){
		hash[s1[i]-'0']++;
	}
	int miss = 0;
	for(int i=0;i<s2.length();i++){
		if(hash[s2[i]-'0']){
			hash[s2[i]-'0']--;
		}else{
			miss++;
		}
	}
	if(miss) cout<<"No "<<miss;
	else cout<<"Yes "<<s1.length()-s2.length();
	return 0;
}
