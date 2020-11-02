#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;

int main(){
	int m;
	cin>>m;
	vector<int> v1(m);
	for(int i=0;i<m;i++){
		cin>>v1[i];
	}
	int n;
	cin>>n;
	vector<int> v2(n);
	for(int i=0;i<n;i++){
		cin>>v2[i];
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int ans=0,p=0,q=0;
	while(p<m && q<n && v1[p]<0 && v2[q]<0){
		ans += v1[p]*v2[q];
		p++;q++;
	}
	p = m-1,q=n-1;
	while(p>=0 && q>=0 && v1[p]>0 && v2[q]>0){
		ans +=v1[p]*v2[q];
		p--;q--;
	}
	cout<<ans;
	return 0;
}
