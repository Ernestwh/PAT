#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	int countT=0;
	int countP=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='T') countT++; 
	} 
	int sum=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='T') countT--;
		if(str[i]=='P') countP++; 
		if(str[i]=='A') sum=(sum + (countT*countP)%1000000007)%1000000007; 
	}
	cout<<sum;
	return 0;
}
