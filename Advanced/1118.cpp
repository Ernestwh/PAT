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
int n,m,k;
const int maxn = 10010;
int fa[maxn] = {0},cnt[maxn]={0};
int findFather(int x){
	int a = x;
	while(x != fa[x]){
		x = fa[x];
	}
	while(a != fa[a]){
		int z = a;
		a = fa[a];
		fa[z] = x;
	}
	return x;
}
void Union(int a,int b){
	int faA = findFather(a);
	int faB = findFather(b);
	if(faA != faB) fa[faA] = faB;
}
bool exist[maxn];
int main(){
	cin>>n;
	for(int i=1;i<=maxn;i++){
		fa[i] = i;
	}
	int id,temp;
	for(int i=0;i<n;i++){
		cin>>k>>id;
		exist[id] = true;
		for(int j=0;j<k-1;j++){
			cin>>temp;
			Union(id,temp);
			exist[temp] = true;
		}
	}
	for(int i=1;i<=maxn;i++){
		if(exist[i]==true){
			int root = findFather(i);
			cnt[root]++;
		}
	}
	int numTrees=0, numBirds=0;
	for(int i=1;i<=maxn;i++){
		if(exist[i]== true && cnt[i]!=0 ){
			numTrees++;
			numBirds +=cnt[i];
		}
	}
	printf("%d %d\n",numTrees,numBirds);
	cin>>m;
	int ida,idb;
	for(int i=0;i<m;i++){
		cin>>ida>>idb;
		printf("%s\n",(findFather(ida)==findFather(idb))? "Yes":"No");
	}
	return 0;
	
}
