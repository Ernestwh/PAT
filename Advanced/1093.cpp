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
	string str;
	cin>>str;
	int countT=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='T'){
			countT++;
		}
	}
	int res = 0;
	int countP=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='P') countP++;
		if(str[i]=='T') countT--;
		if(str[i]=='A') res = (res+(countP*countT)%1000000007)%1000000007;
	}
	cout<<res;
	return 0;
}
