#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a[100001],m[100001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(m[a[i]]=1){
			cout<<a[i];
			return 0;
		}
	}
	cout<<"None";
	return 0;		
}
