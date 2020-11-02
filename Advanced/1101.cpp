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
	int N;
	cin>>N;
	int A[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	vector<int> res;
	int leftmax = A[0];
	int rightmin[N] = {0};
	int minvalue = A[N-1];
	for(int i=N-1;i>=0;i--){
		minvalue = min(minvalue,A[i]);
		rightmin[i]=minvalue;
	}
	int cnt=0;
	for(int i=0;i<N;i++){
		leftmax = max(leftmax,A[i]);
		if(A[i]>=leftmax && A[i]<=rightmin[i]){
			cnt++;
			res.push_back(A[i]);
		}
	}
	cout<<cnt<<endl;
	int flag=0;
	for(int i=0;i<cnt;i++){
		if(flag){
			cout<<" "<<res[i];
		}else{
			cout<<res[i];
			flag=1;
		}
	}
	cout<<endl;
	return 0;
}
