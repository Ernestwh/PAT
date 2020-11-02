#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1,str2;
	cin>>str1>>str2;
	bool hash[128]={false};
	for(int i=0;i<str2.size();i++){
		if(str2[i]>='a' & str2[i]<='z') str2[i]-=32;
		hash[str2[i]-'0']=true;
		
	}
	for(int i=0;i<str1.size();i++){
		if(str1[i]>='a' & str1[i]<='z') str1[i]-=32;
		if(hash[str1[i]-'0']==false){
			cout<<str1[i];
			hash[str1[i]-'0']=true;
		}
	}
	return 0;
}
