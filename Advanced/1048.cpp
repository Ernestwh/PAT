#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<set>
#include<map>
using namespace std;
int hash[501];
int main(){
	int N,M;
	cin>>N>>M;
	
	int coin;
	for(int i=0;i<N;i++){
		cin>>coin;
		hash[coin]++;
	}
	for(int i=1;i<=500;i++){
		if(hash[i]){
			hash[i]--;
			if(M>i && hash[M-i]){
				cout<<i<<" "<<M-i;
				return 0;
			}
			hash[i]++;
		}
	
	}
	cout<<"No Solution";
	return 0;
}
