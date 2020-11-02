#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int A[n+1]={0};
	int sum=0;
	int temp;
	for(int i=1;i<=n;i++){
		cin>>temp;
		sum+=temp;
		A[i]=sum;
	}
	int m;
	cin>>m;
	int start,end;
	for(int i=0;i<m;i++){
		cin>>start>>end;
		int dis=0;
		if(start>end){
			swap(start,end);
		}
		dis = A[end-1] - A[start-1];
		cout<<min(dis,sum-dis)<<endl;
	}
	
	return 0;
}
