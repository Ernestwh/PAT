#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	int A,B,D;
	cin>>A>>B>>D;
	int sum = A+B;
	int arr[31],count=0;
	if(sum==0) cout<<0;
	while(sum!=0){
		arr[count++]=sum%D;
		sum=sum/D;
	}
	for(int i=count-1;i>=0;i--){
		cout<<arr[i];
	}
	return 0;
}
