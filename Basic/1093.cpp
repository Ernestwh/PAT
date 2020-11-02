#include<iostream>
using namespace std;

int main(){
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin,str2);
	int hash[128] = {0};
	int flag=0;
	for(int i=0;i<str1.size();i++){
		if(hash[str1[i]]==0){
			cout<<str1[i];
		}
		hash[str1[i]]=1;
	}
	for(int i=0;i<str2.size();i++){
		if(hash[str2[i]]==0){
			cout<<str2[i];
		}
		hash[str2[i]]=1;
	}
	return 0;
}
