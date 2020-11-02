#include<iostream>
#include<string.h>
using namespace std;

int main(){
	 
	int N;
	cin>>N;
	
	char str[80];
	
	int len;
	
	
	int flag1,flag2;
	int count;
	for(int i=0;i<N;i++){
		cin>>str;
		len = strlen(str);
		if(len<6) {
			cout<<"Your password is tai duan le."<<endl;
			continue;	
		}
		flag1=flag2=0;
		count=0;
		for(int i=0;i<len;i++){
			if(str[i]>='0'&&str[i]<='9'){
				flag1=1;
				count++;
			}
			if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z'))){
				flag2=1;
				count++;	
			} 
			if(str[i]=='.'){
				count++;
			} 
		}
	
		if(count==len){
			if(flag1==0){
				cout<<"Your password needs shu zi."<<endl;
				continue;
			}
			else if(flag2==0){
				cout<<"Your password needs zi mu."<<endl;
			}
			else{
				cout<<"Your password is wan mei."<<endl;
			}
		} 
		else{
			cout<<"Your password is tai luan le."<<endl;
		}
	
			
	}
	return 0;
	
}
