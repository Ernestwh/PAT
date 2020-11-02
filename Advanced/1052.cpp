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

struct NODE{
	int address,key,next;
	bool flag;
}node[100000];

bool cmp(NODE a,NODE b){
	if(!a.flag || !b.flag){
		return a.flag>b.flag;
	}else{
		return a.key<b.key;
	}
}

int main(){
	int n,cnt=0,s,a,b,c;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		node[a] = {a,b,c,false};
	}
	for(int i=s;i!=-1;i=node[i].next){
		node[i].flag = true;
		cnt++;
	}

	if(cnt==0){
		cout<<"0 -1";
	}else{
		sort(node,node+100000,cmp);
		printf("%d %05d\n",cnt,node[0].address);
		for(int i=0;i<cnt;i++){
			printf("%05d %d ",node[i].address,node[i].key);
			if(i!=cnt-1){
				printf("%05d\n",node[i+1].address);
			}else{
				printf("-1");
			}
		}
	}
	return 0;	
}
