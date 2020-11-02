#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;

struct node{
	string school;
	int tws,ns;
};
bool cmp(node a,node b){
	if(a.tws!=b.tws){
		return a.tws>b.tws;
	}else if(a.ns!=b.ns){
		return a.ns<b.ns;
	}else{
		return a.school<b.school;
	}
}

int main(){
	int n;
	cin>>n;
	unordered_map<string,int> cnt;
	unordered_map<string,double> sum;
	for(int i=0;i<n;i++){
		string id,school;
		cin>>id;
		double score;
		cin>>score;
		cin>>school;
		for(int i=0;i<school.size();i++){
			school[i] = tolower(school[i]);
		}
		if(id[0]=='B'){
			score = score/1.5;
		}
		else if(id[0]=='T'){
			score = score*1.5;
		}
		sum[school]+=score;
		cnt[school]++;
	}
	vector<node> ans;
	for(auto it = cnt.begin();it!=cnt.end();it++){
		ans.push_back(node{it->first,(int)sum[it->first],cnt[it->first]});
	}
	sort(ans.begin(),ans.end(),cmp);
	cout<<ans.size()<<endl;
	int rank = 0,pres=-1;
	for(int i=0;i<ans.size();i++){
		if(pres!=ans[i].tws) rank=i+1;
		pres=ans[i].tws;
		cout<<rank<<" "<<ans[i].school<<" "<<ans[i].tws<<" "<<ans[i].ns<<endl;
	}
	return 0;
}
