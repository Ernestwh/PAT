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
	int  m,n;
	cin>>m>>n;
	map<string,int> mp;
	int half = m*n/2;
	string str;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>str;
			mp[str]++;
			if(mp[str]>half){
				cout<<str;
				return 0;
			}
		}
	} 
	return 0;
}

