#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int N,M;
	cin>>N>>M;
	int hash[10000]={0};
	int a;
	for(int i=0;i<M;i++){
		cin>>a;
		hash[a]=1;
	}

	int K;
	int pnum=0,tnum=0;
	while(N--){
		char name[10];
		scanf("%s %d", name, &K);
		int b;
		bool flag = true;
		for(int i=0;i<K;i++){
			cin>>b;
			if(hash[b]==1){
				tnum++;
				if(flag){
					printf("%s:", name);
					flag = false;
				}
				printf(" %04d",b);
			}
		}
		if(!flag){
			cout<<endl;	
			pnum++;
		}
				
	}
	cout<<pnum<<" "<<tnum;
	return 0;
}
