#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;

struct node{
	string str;
	int score;
};

bool cmp(node a,node b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else{
		return a.str<b.str;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	string str;
	int score;
	vector<node> v;
	for(int i=0;i<n;i++){
		cin>>str>>score;
		v.push_back(node{str,score});
	}
	int k;
	string ins;
	for(int j=0;j<m;j++){
		cin>>k>>ins;
		printf("Case %d: %d %s\n", j+1, k, ins.c_str());
		if(k==1){
			vector<node> ans;
			for(int i=0;i<v.size();i++){
				if(v[i].str[0]==ins[0]){
					ans.push_back(v[i]);
				}
			}
			if(ans.size()==0){
				printf("NA\n");
				continue;
			}
			sort(ans.begin(),ans.end(),cmp);
			for(int i=0;i<ans.size();i++){
				printf("%s %d\n",ans[i].str.c_str(),ans[i].score);
			}
		}
		else if(k==2){
			int cnt=0,sum=0;
			for(int i=0;i<v.size();i++){
				if(v[i].str.substr(1,3)==ins){
					cnt++;
					sum+=v[i].score;
				}
			}
			if(cnt==0){
				printf("NA\n");
				continue;
			}
			printf("%d %d\n",cnt,sum);
		}
		else if(k==3){
			unordered_map<string,int> dmap;
			for(int i=0;i<v.size();i++){
				if(v[i].str.substr(4,6)==ins){
					dmap[v[i].str.substr(1,3)]++; 
				}
			}
			if(dmap.size()==0){
				printf("NA\n");
				continue;
			} 
			vector<node> ans;
			for(auto it = dmap.begin();it!=dmap.end();it++){
				ans.push_back(node{it->first,it->second});
			}
			sort(ans.begin(),ans.end(),cmp);
			for(int i=0;i<ans.size();i++){
				printf("%s %d\n",ans[i].str.c_str(),ans[i].score);
			}
		}
	}
	return 0;
}
