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

int e[300][300],n,m,k,ans=99999999,ansid;
vector<int> v;

void check(int index){
	int sum=0,cnt,flag = 1;
	cin>>cnt;
	set<int> s;
	vector<int> v(cnt);
	for(int i=0;i<cnt;i++){
		cin>>v[i];
		s.insert(v[i]);
	}
	for(int i=0;i<cnt-1;i++){
		if(e[v[i]][v[i+1]]==0) flag=0;
		sum+=e[v[i]][v[i+1]];
	}
	if(flag==0){
		printf("Path %d: NA (Not a TS cycle)\n",index);
	}else if(s.size()!=n || v[0]!=v[cnt-1]){
		printf("Path %d: %d (Not a TS cycle)\n",index,sum);
	}else if(s.size()==n){
		if(v.size()==n+1){
			printf("Path %d: %d (TS simple cycle)\n",index,sum);
			if(ans>sum){
				ans = sum;
				ansid = index;
			}
		}else{
			printf("Path %d: %d (TS cycle)\n",index,sum);
			if(ans>sum){
				ans = sum;
				ansid = index;
			}
		}
	}
}

int main(){
	cin>>n>>m;
	int a,b,c;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		e[a][b]=e[b][a]=c;
	}
	cin>>k;
	for(int i=1;i<=k;i++) check(i);
	printf("Shortest Dist(%d) = %d\n", ansid, ans);
	return 0;
}
