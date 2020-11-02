#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
using namespace std;

int main(){
	string str;
	cin>>str;
	int len = str.size();
	int n1 = (len+2)/3;
	int n3 = n1;
	int n2 = len - n1 - n3 + 2;
	char ans[40][40];
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=n2;j++){
			ans[i][j] = ' ';
		}
	}
	int pos = 0;
	for(int i=1;i<=n1;i++){
		ans[i][1] = str[pos++];
	}
	for(int j=2;j<=n2;j++){
		ans[n1][j] = str[pos++];
	}
	for(int i=n3-1;i>=1;i--){
		ans[i][n2] = str[pos++];
	}
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=n2;j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
