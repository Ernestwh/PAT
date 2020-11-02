#include<iostream>
#include<cctype>

using namespace std;

int main(){
	string str1,str2;
	getline(cin,str1);
    getline(cin,str2);
	/*int sum=0;
	bool hash[128]={false};
	for(int i=0;i<str1.size();i++){
		hash[str1[i]]=true;
		if(str1[i]>='A' && str1[i]<='Z')  hash[str1[i]-'A'+'a']=true;
		if(hash['+']==true){
			for(int l='A';l<='Z';l++){
				hash[l]=true;
			}
		}
	}
	for(int i=0;i<str2.size();i++){
		if(hash[str2[i]]==true) continue;
		else{
			cout<<str2[i];
			sum=1;
		}
	}
	if(sum==0){
		cout<<endl;
	}
	return 0;*/
	for(int i=0;i<str2.size();i++){
		if(str1.find(toupper(str2[i]))!=string::npos) continue;
		if(isupper(str2[i]) && str1.find('+')!=string::npos) continue;
		cout<<str2[i];
	}
	return 0;
}
