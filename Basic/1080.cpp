#include <iostream>
#include <vector>
#include <map>
#include<cmath>
#include <algorithm>
using namespace std;

struct node{
	string id;
	int gp,gm,gf,g;
};
bool cmp(node a,node b){
	if(a.g!=b.g){
		return a.g>b.g;
	}else{
		return a.id<b.id;
	}
}
map<string, int> idx;
int main(){
	int p,m,n;
	cin>>p>>m>>n;
	int score,cnt = 1;
	vector<node> v,ans;
	string s;
	for(int i=0;i<p;i++){
		cin>>s>>score;
		if(score>=200){
			v.push_back(node{s,score,-1,-1,0});
			idx[s] = cnt++;
		}
	}
	for(int i=0;i<m;i++){
		cin>>s>>score;
		if(idx[s]!=0){
			v[idx[s]-1].gm = score;
		}
	}
	for(int i=0;i<n;i++){
		cin>>s>>score;
		if(idx[s]!=0){
			v[idx[s]-1].gf = v[idx[s]-1].g = score;
			
			if(v[idx[s]-1].gm>score){
				v[idx[s]-1].g = int(v[idx[s]-1].gm*0.4 + score*0.6+0.5);
			}
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i].g>=60){
			ans.push_back(v[i]);
		}
	
	}
	sort(ans.begin(),ans.end(),cmp);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i].id<<" "<<ans[i].gp<<" "<<ans[i].gm<<" "<<ans[i].gf<<" "<<ans[i].g<<endl;
	}
	return 0;
}
