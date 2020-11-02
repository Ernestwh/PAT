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
	int rank;
	int id;
	int sum=0;
	int psum=0;
	vector<int> score;
	bool show = false;
};
bool cmp(node a,node b){
	if(a.sum!=b.sum){
		return a.sum>b.sum;
	}
	else if(a.psum!=b.psum){
		return a.psum>b.psum;
	}else{
		return a.id<b.id;
	}
}
int main(){
	int n,k,m;
	cin>>n>>k>>m;
	vector<node> v(n+1);
	for(int i=1;i<=n;i++){
		v[i].score.resize(k+1,-1);
	}
	vector<int> full(k+1);
	for(int i=1;i<=k;i++){
		cin>>full[i];
	}
	int id,pid,score;
	for(int i=1;i<=m;i++){
		cin>>id>>pid>>score;
		v[id].id = id;
		v[id].score[pid] = max(score,v[id].score[pid]);
		if(score!=-1){
			v[id].show = true;
		}
		if(v[id].score[pid]==-1){
			v[id].score[pid] = -2;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(v[i].score[j]!=-1 && v[i].score[j]!=-2){
				v[i].sum += v[i].score[j];
				if(v[i].score[j] == full[j]){
					v[i].psum++;
				}
			}
		}
	}
	sort(v.begin()+1,v.end(),cmp);
	for(int i=1;i<=n;i++){
		v[i].rank=i;
		if(i!=1 && v[i].sum == v[i-1].sum){
			v[i].rank = v[i-1].rank;
		}
	}
	for(int i=1;i<=n;i++){
		if(v[i].show){
			printf("%d %05d %d",v[i].rank,v[i].id,v[i].sum);
			for(int j=1;j<=k;j++){
				if(v[i].score[j]!=-1 && v[i].score[j]!=-2){
					cout<<" "<<v[i].score[j];
				}
				else if(v[i].score[j]==-1){
					cout<<" -";
				}else {
					cout<<" 0";
				}
			}
			cout<<endl;
		}
		
	}
	return 0;
}
