#include<iostream>
using namespace std;
int main(){
	int N;
	char ch;
	cin>>N>>ch;
	int i;
	for(i=0;i<N;i++){
		if((2*i*(i+2)+1)>N) break;
	}
	int row = i-1;
	int c = N-(2*row*(row+2)+1);
	for(int j=row;j>0;j--){
		for(int k=row-j;k>0;k--){
			cout<<" ";
		}
		for(int k=0;k<(2*j+1);k++){
			cout<<ch;
		}
		cout<<endl;
	}
	for(int j=0;j<row;j++){
		cout<<" ";
	}
	cout<<ch<<endl;
	for(int j=1;j<=row;j++){
		for(int k=row-j;k>0;k--){
			cout<<" ";
		}
		for(int k=0;k<(2*j+1);k++){
			cout<<ch;
		}
		cout<<endl;
	}
	cout<<c;
	return 0; 
}
