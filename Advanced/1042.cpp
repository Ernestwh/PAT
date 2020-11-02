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
	int repeat;
	cin>>repeat;
	int start[55]={0};
	int end[55]={0};
	int scan[55]={0};
	for(int i=1;i<55;i++){
		cin>>scan[i];
		end[i]=i;
	}
	for(int i=0;i<repeat;i++){
		for(int j=1;j<55;j++){
			start[j] = end[j];
		}
		for(int j=1;j<55;j++){
			end[scan[j]] = start[j];
		}
	}
	char c[6] = {"SHCDJ"};
	for(int i=1;i<55;i++){
		cout<<c[(end[i]-1)/13]<<(end[i]-1)%13+1;
		if(i!=54) cout<<" ";
	}
	
	return 0;
	
	
}
