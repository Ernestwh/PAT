#include<iostream>
#include<string>
using namespace std;


int main(){
	string str1,str2;
	cin>>str1>>str2;
	int hash[128]={0};
	int flag=1;
    int c=0;
    for(int i=0;i<str1.size();i++){
    	hash[str1[i]]++;
	}
	for(int i=0;i<str2.size();i++){
		hash[str2[i]]--;
		if(hash[str2[i]]<0){
			flag=0;
			c++; 
		}
	}
	if(flag==1){
		cout<<"Yes "<<str1.size()-str2.size();
	}else{
		cout<<"No "<<c;
	}
	return 0;
}
