#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n,i;
	cin>>n>>i;
	i=i%n;
	vector<int> number(n);
	int j;
	for(j=0;j<n;j++){
		cin>>number[j];
	}
	if(i!=0){
		reverse(number.begin(),number.begin()+n);
		reverse(number.begin(),number.begin()+i);
		reverse(number.begin()+i,number.begin()+n);
		
	}
	for(int i=0;i<n-1;i++){
		cout<<number[i]<<" ";
	}
	cout<<number[n-1];
	return 0;
	
}
