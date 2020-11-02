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
struct node{
	string id;
	int Gp;
	int Gm;
	int Gf;
	int G;
};
bool cmp(node a,node b){
	if(a.G!=b.G){
		return a.G>b.G;
	}else{
		return a.id<b.id;
	}
}
map<string,int> idx;
int main(){
	int p,m,n;
	cin>>p>>m>>n;
	int cnt = 1;
	vector<node> res;
	string id;
	int score;
	for(int i=0;i<p;i++){
		cin>>id>>score;
		if(score>=200){
			res.push_back({id,score,-1,-1,0});
			idx[id] = cnt++;
		}
		
	}
	for(int i=0;i<m;i++){
		cin>>id>>score;
		if(idx[id]!=0){
			res[idx[id]-1].Gm = score;
		}
	}
	for(int i=0;i<n;i++){
		cin>>id>>score;
		if(idx[id]!=0){	
			int tmp = idx[id]-1;
			res[tmp].Gf = res[tmp].G = score; 	
			if(res[tmp].Gm>res[tmp].Gf){
				res[tmp].G  = int(res[tmp].Gm*0.4+res[tmp].Gf*0.6+0.5);
			}
		}
	}
	vector<node> ans;
	for(int i=0;i<res.size();i++){
		if(res[i].G>=60){
			ans.push_back(res[i]);
		}
	}
	sort(ans.begin(),ans.end(),cmp);
	for(int i=0;i<ans.size();i++){
		printf("%s %d %d %d %d\n",ans[i].id.c_str(),ans[i].Gp,ans[i].Gm,ans[i].Gf,ans[i].G);
	}
	return 0;
}
