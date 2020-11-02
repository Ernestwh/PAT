#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[100001]={0};
	int w,m; 
	for(int i=0;i<N;i++){
		cin>>w>>m;
		A[w]=m;
		A[m]=w;
	}
	int M;
	cin>>M;
	int num;
	int B[100001]={0};
	for(int i=0;i<M;i++){
		cin>>num; 
		B[num]=1;
	}
	int count=0;
	for(int i=0;i<100001;i++){
		if(B[i]>0 && B[A[i]]>0){
			B[i]=0;
			B[A[i]]=0;
			count+=2;
		}
	}
	cout<<M-count<<endl;
	int flag=1; 
	for(int i=0;i<100001;i++){
		if(B[i]>0){
			if(flag){
				printf("%05d",i);//≤‚ ‘µ„3 
				flag=0;
			}else{
				cout<<" ";
				printf("%05d",i);
			}
		}
	}
	return 0;
}



