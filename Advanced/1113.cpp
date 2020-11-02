#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
#include<set>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>vec[i];
		sum+=vec[i];
	}
	sort(vec.begin(),vec.end());
	cout<<n%2<<" ";
	int half=0;
	for(int i=0;i<n/2;i++){
		half+=vec[i];
	}
	cout<<sum-2*half;
	return 0;
}
