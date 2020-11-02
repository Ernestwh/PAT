#include<iostream>


using namespace std;
int main(){
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	
	string str1,str2,str3,str4;
	
	cin>>str1>>str2>>str3>>str4;
	int i;
	
	for(i=0;i<str1.length()&&i<str2.length();i++){
		if(str1[i]==str2[i]&&str1[i]>='A'&&str2[i]<='G'){
			cout<<week[str1[i]-'A']<<" ";
			break;
		}
	}
	for(i++;i<str1.length()&&i<str2.length();i++){
		if(str1[i]==str2[i]){
			if(str1[i]>='0'&&str1[i]<='9'){
				printf("%02d:",str1[i]-'0');
				break;
			}else if(str1[i]>='A'&&str1[i]<='N'){
				printf("%02d:",str1[i]-'A'+10);
				break;
			}
		}
	}
	for(i=0;i<str3.length()&&i<str4.length();i++){
		if(str3[i]==str4[i]){
			if((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z')){
				printf("%02d",i); 
                break;
			}
		}
	}
	return 0;
}
