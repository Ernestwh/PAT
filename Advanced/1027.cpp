#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"#";
	char mar[14] = {"0123456789ABC"};
	cout<<mar[a/13]<<mar[a%13];
	cout<<mar[b/13]<<mar[b%13];
	cout<<mar[c/13]<<mar[c%13];
	return 0;
}
