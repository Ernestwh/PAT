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
const int maxn = 1005;

int fa[maxn] = {0},cnt[maxn]={0};
int findfather(int x){
	int a= x;
	while(x!=fa[x]){
		x=fa[x];
	}
	while(a!=fa[a]){
		int z=a;
		a = fa[a];
		fa[z] = x;
	}
	return x;
}
void Union(int a,int b){
	int faA = findfather(a);
	int faB = findfather(b);
	if(faA!=faB){
		fa[faA] = faB;
	}
}
bool exist[maxn];

int main(){
	int n;
	cin>>n;
	int k;
	vector<int> v[maxn];
	for(int i=1;i<=n;i++){
		fa[i] = i;
	}
	for(int i=1;i<=n;i++){
		scanf("%d: ",&k);
		int temp;
		for(int j=0;j<k;j++){
			cin>>temp;
			v[temp].push_back(i);
		}
	}
	for(int i=1;i<maxn;i++){
		if(v[i].size()!=0){
			exist[v[i][0]] = true;
			for(int j=1;j<v[i].size();j++){
				Union(v[i][0],v[i][j]);
				exist[v[i][j]] = true;
			}
		}
	}
	for(int i=1;i<maxn;i++){
		if(exist[i]==true){
			int root = findfather(i);
			cnt[root]++;
		}
	}
	vector<int> res;
	for(int i=1;i<maxn;i++){
		if(cnt[i]){
			res.push_back(cnt[i]);
		}
	}
	sort(res.begin(),res.end());
	cout<<res.size()<<endl;
	for(int i=res.size()-1;i>=0;i--){
		cout<<res[i];
		if(i!=0) cout<<" ";
	}
	return 0;
}
