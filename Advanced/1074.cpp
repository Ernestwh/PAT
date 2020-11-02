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
using namespace std;

int main(){
	int start,n,k;
	int sum=0;
	cin>>start>>n>>k;
	int temp,data[100005],next[100005],list[100005];
	for(int i=0;i<n;i++){
		cin>>temp;
		cin>>data[temp]>>next[temp];
	}
	while(start !=-1){
		list[sum++] = start;
		start = next[start];
	}
	for(int i=0;i<(sum-sum%k);i+=k){
		reverse(list+i,list+i+k);	
	}
	for(int i=0;i<(sum-1);i++){
		printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	}
	printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
	return 0;
}
