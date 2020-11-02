#include<iostream>
#include<algorithm>
using namespace std;

string add(string a) {
    string b = a, ans;
    reverse(b.begin(), b.end());
    int len = a.length(), carry = 0;
    for(int i=0;i<len;i++){
    	int num = (a[i]-'0'+b[i]-'0') +carry;
    	carry=0;
    	if(num>=10){
    		carry=1;
    		num = num-10;
		}
		ans +=char(num+'0');
	}
	if(carry==1) ans+='1';
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
	string A;
	cin>>A;
	int N = 10;
	while(N--){
		string B = A;	
		reverse(B.begin(),B.end());
		if(A==B){
			cout<<A<<" is a palindromic number.";
			break;
		}else{
			cout<<A<<" + "<<B<<" = "<<add(A)<<endl;
		}
		A = add(A);
	}
	if(N<0){
		cout<<"Not found in 10 iterations.";
	}
	return 0;
}
