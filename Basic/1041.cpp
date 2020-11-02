#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin>>N;
	string s1,s2;
	int row;
	string A[1003][2];
	for(int i=0;i<N;i++){
		cin>>s1>>row>>s2;
		A[row][0]=s1,A[row][1]=s2;
	}
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>row;
		cout<<A[row][0]<<" "<<A[row][1]<<endl;
	}
	return 0;
	
} 
