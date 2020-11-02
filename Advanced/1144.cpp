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
	int n;
	cin>>n;
	int hash[n+2]={0};
	int temp;
	for(int i=1;i<n+1;i++){
		cin>>temp;
		if(temp>=1&&temp<=n){
			hash[temp]=1;
		}
	}
	for(int i=1;i<n+2;i++){
		if(hash[i]==0){
			cout<<i;
			break;
		}
	}
	return 0;
}
