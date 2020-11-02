#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
	string A;
	int B;
	int Q=0,R=0;
	cin>>A>>B;
	int len = A.size();
	Q=(A[0]-'0')/B;
	if((Q!=0 && len>1)|| len==1){
		cout<<Q;
	}
	R=(A[0]-'0')%B;
	for(int i=1;i<len;i++){
		Q=(R*10+(A[i]-'0'))/B;
		cout<<Q;
		R=(R*10+(A[i]-'0'))%B;
	}
	cout<<" "<<R;
	
}
