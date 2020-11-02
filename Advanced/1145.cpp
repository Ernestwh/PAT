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

int isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int msize,n,m;
	cin>>msize>>n>>m;
	while(!isprime(msize)) msize++;
	vector<int> vec(msize);
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		int flag = 0;
		for(int j=0;j<msize;j++){
			int pos = (a+j*j)%msize;
			if(vec[pos]==0){
				vec[pos]=a;
				flag = 1;
				break;
			}
		}
		if(!flag) cout<<a<<" cannot be inserted."<<endl;
	}
	int ans = 0;
	for(int i=0;i<m;i++){
		cin>>a;
		for(int j=0;j<=msize;j++){
			ans++;
			int pos = (a+j*j)%msize;
			if(vec[pos]==a || vec[pos]==0) break;
		}
	}
	printf("%.1lf\n",1.0*ans/m);
	return 0;
}
