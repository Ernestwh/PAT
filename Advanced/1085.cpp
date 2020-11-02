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
	long long p;
	cin>>n>>p;
	int A[n]={0};
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	int result=0,temp=0;
	for(int i=0;i<n;i++){
		for(int j=i+result;j<n;j++){
			if(A[j]<=A[i]*p){
				temp = j-i+1;
				if(temp>result){
					result = temp;
				}
			}else{
				break;
			}
		}
	}
	cout<<result;
	return 0;
}
