#include<iostream>
#include<vector>
#include<set>
#include<cmath>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	string str = to_string(a+b);
	int len = str.size();
	for(int i=0;i<len;i++){
		cout<<str[i];
		if(str[i]=='-') continue;
		if((i+1)%3==len%3 && i!=len-1){
			cout<<",";
		}
	}
	return 0;
}
