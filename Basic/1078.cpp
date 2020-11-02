#include<iostream>
#include<algorithm>
#include<ctype.h>
using namespace std;

void cstr(string str){
	if(str.length()!=0){
		char pre = str[0];
		int cnt=1;
		for(int i=1;i<str.length();i++){
			if(pre==str[i]){
				cnt++;
			}else{
				if(cnt>=2){
					cout<<cnt;
				}
				cout<<pre;
				cnt = 1;
				pre = str[i];
			}
		}
		if (cnt >= 2) cout << cnt;
        cout << pre;
	}
}
void dstr(string str){
	string res = "";
	string num;
	int cnt;
	for(int i=0;i<str.length();i++){
		if(str[i]>='0' && str[i]<='9'){
			num+=str[i];
		}else{
			if(num.length()>0) cnt = stoi(num);
			while(cnt--) cout<<str[i];
			cnt = 1;
			num = ""; 
		}
	}
}

int main(){
	char c;
	string str;
	cin>>c;
	getchar();
	getline(cin,str);
	if(c=='C'){
		cstr(str);
	}else if(c=='D'){
		dstr(str);
	}
	return 0;
}
