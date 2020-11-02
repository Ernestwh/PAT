#include<iostream>
#include<string>
using namespace std;

int main(){
	string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	int N;
	cin>>N;
	getchar();
	string str;
	int num;
	int num1,num2;
	for(int i=0;i<N;i++){
		getline(cin, str);
		if(str[0]>='0' && str[0]<='9'){
			num = stoi(str);
			if(num/13) cout<<b[num/13];
			if((num/13) && (num%13)) cout<<" ";
			if(num%13 || num==0) cout<<a[num%13];
		}else{
			num1=0,num2=0;
			string s1 = str.substr(0,3),s2;
			if(str.size()>4) s2 = str.substr(4,3);
			for(int j=0;j<13;j++){
				if(s1 == a[j] || s2 == a[j]) num2=j;
				if(s1 == b[j]) num1=j;
			}
			cout<<num1*13+num2;
		} 
		cout<<endl;
	}
	return 0;
}
