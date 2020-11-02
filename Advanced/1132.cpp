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
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		int num = stoi(s);
		int a = stoi(s.substr(0,s.length()/2));
		int b = stoi(s.substr(s.length()/2,s.length()));
		if(a*b!=0 && num%(a*b)==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		} 
	}
	return 0;
}
