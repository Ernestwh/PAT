#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<stack>
using namespace std;

struct node{
	int id;
	int Ge;
	int Gi;
	int Gf;
	vector<int> presch;
};
bool cmp(node a,node b){
	if(a.Gf!=b.Gf){
		return a.Gf>b.Gf;
	}else{
		return a.Ge>b.Ge;
	}
}
bool cmp2(node a,node b){
	return a.id<b.id; 
} 
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int schoolnum[m];
	for(int i=0;i<m;i++){
		cin>>schoolnum[i];
	}
	vector<node> ans(n);
	int a;
	for(int i=0;i<n;i++){
		ans[i].id = i;
		cin>>ans[i].Ge>>ans[i].Gi;
		ans[i].Gf = ans[i].Ge+ans[i].Gi;
		for(int j=0;j<k;j++){
			cin>>a;
			ans[i].presch.push_back(a);
		}
	}
	sort(ans.begin(),ans.end(),cmp);
	int cnt[110]={0};
	vector<node> sch[110];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			int schid = ans[i].presch[j];
			int lastindex = cnt[schid] - 1;
			if(schoolnum[schid]>cnt[schid] || (ans[i].Gf == sch[schid][lastindex].Gf && 
			ans[i].Ge == sch[schid][lastindex].Ge )){
				sch[schid].push_back(ans[i]);
				cnt[schid]++;
				break;
			}
		}
	}
	for(int i=0;i<m;i++){
		sort(sch[i].begin(),sch[i].end(),cmp2);
		for(int j=0;j<sch[i].size();j++){
			cout<<sch[i][j].id;
			if(j!=sch[i].size()-1) cout<<" "; 
		}
		cout<<endl;
	}
	return 0;
}
