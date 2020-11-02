#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N;
	long long p;
	cin>>N>>p;
	long long a[100010];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N);
	int j=0,count=0;
	for(int i=0;i<N&&j<N;i++){
		for(int j=i+count;j<N&&a[j]<=a[i]*p;j++){
			count=max(count,j-i+1);
		} 
	} 
	cout<<count;
	return 0;
}
