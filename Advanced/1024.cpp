#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string s;
void add(string t){
	int len = s.length(),carry=0;
	for(int i=0;i<len;i++){
		s[i] = s[i]+t[i]+carry-'0';
		carry=0;
		if(s[i]>'9'){
			carry = 1;
			s[i] = s[i]-10;
		}
	}
	if(carry) s+='1';
	reverse(s.begin(),s.end());
}
int main(){
	int cnt;
	cin>>s>>cnt;
	int i;
	for(i=0;i<=cnt;i++){
		string t=s;
		reverse(t.begin(),t.end());
		if(s==t || i==cnt) break;
		add(t);
	}
	cout<<s<<endl;
	cout<<i;
	return 0;
}
