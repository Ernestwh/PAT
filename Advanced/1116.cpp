#include<iostream>
#include<algorithm>
#include<cctype>
#include<string.h>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<set>
#include<map>
using namespace std;

bool isprime(int n){
	int a = sqrt(n);
	for(int i=2;i<=a;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int N;
	cin>>N;
	map<int,int> maprank;
	int id;
	for(int i=1;i<=N;i++){
		cin>>id;
		maprank.insert(pair<int,int>(id,i));
	}
	int K;
	cin>>K;
	int hash[10000] = {0};
	for(int i=1;i<=K;i++){
		cin>>id;
		if(maprank[id]&&hash[id]==0){
			if(maprank[id]==1){
				printf("%04d: Mystery Award\n",id);
				hash[id]=1;
			}else if(isprime(maprank[id])){
				printf("%04d: Minion\n",id);
				hash[id]=1;
			}else{
				printf("%04d: Chocolate\n",id);
				hash[id]=1;
			}
		}else if(hash[id]){
			printf("%04d: Checked\n",id);
		}else{
			printf("%04d: Are you kidding?\n",id);
		}
	}
	return 0;
}
