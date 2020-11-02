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

int dp[10010],w[10010];
bool choice[10010][110];
int cmp(int a,int b){
	return a>b;
} 
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	sort(w+1,w+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=m;j>=w[i];j--){
			if(dp[j] <= dp[j-w[i]]+w[i]){
				choice[i][j] = true;
				dp[j] = dp[j-w[i]]+w[i];
			} 
		}
	}
	if(dp[m]!=m) cout<<"No Solution";
	else{
		vector<int> arr;
		int v = m,index=n;
		while(v>0){
			if(choice[index][v]==true){
				arr.push_back(w[index]);
				v -= w[index];
			}
			index--;
		}
		for(int i=0;i<arr.size();i++){
			if(i!=0) cout<<" ";
			cout<<arr[i];
		}
	}
	return 0;
}
/*一个测试点运行超时 
vector<int> v,tempPath,path;
void dfs(int index,int sum,int total,bool &isfind){
	if(v[index]+sum>total || isfind) return;
	else if(v[index]+sum == total){
		isfind = true;
		tempPath.push_back(v[index]);
		path = tempPath;
	}else{
		tempPath.push_back(v[index]);
		dfs(index+1,sum+v[index],total,isfind);
		tempPath.pop_back();
		dfs(index+1,sum,total,isfind);
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	bool isfind = false;
	dfs(0,0,m,isfind);
	if(!isfind) cout<<"No Solution";
	else{
		cout<<path[0];
		for(int i=1;i<path.size();i++){
			cout<<" "<<path[i];
		}
	}
	return 0;
}*/

