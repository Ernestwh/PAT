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
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i;
	for(i=0;i<s1.length()&&i<s2.length();i++){
		if((s1[i]==s2[i])&&(s1[i]>='A'&&s1[i]<='G')){
			cout<<week[s1[i]-'A']<<" ";
			break;
		}
	}
	for(i++;i<s1.length()&&i<s2.length();i++){
		if(s1[i]==s2[i]){
			if(s1[i]>='0'&&s1[i]<='9'){
				printf("%02d",s1[i]-'0');
				break;
			}else if(s1[i]>='A'&&s1[i]<='N'){
				printf("%02d",s1[i]-'A'+10);
				break;
			}
		}
	}
	cout<<":";
	for(i=0;i<s3.length()&&i<s4.length();i++){
		if(s3[i]==s4[i]){
			if((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z')){
				printf("%02d",i);
				break;
			}
			
		}
	}
	return 0;
}
