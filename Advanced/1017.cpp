#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;

struct node{
	int come,time;
	
}tmpcus;

bool cmp(node a,node b){
	return a.come<b.come;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<node> custom;
	for(int i=0;i<n;i++){
		int hh,mm,ss,time;
		scanf("%d:%d:%d %d",&hh,&mm,&ss,&time);
		int come = hh*3600+mm*60+ss;
		if(come>17*3600) continue;
		tmpcus = {come,time*60};
		custom.push_back(tmpcus);
	}
	sort(custom.begin(),custom.end(),cmp);
	double res = 0.0;
	vector<int> window(k,8*3600);
	for(int i=0;i<custom.size();i++){
		int tmpidx = 0, minfinish = window[0];
		for(int j=0;j<k;j++){
			if(minfinish>window[j]){
				tmpidx = j;
				minfinish = window[j];
			}
		}
		if(window[tmpidx]<=custom[i].come){
			window[tmpidx] = custom[i].come + custom[i].time;
		}else{
			res += window[tmpidx]-custom[i].come;
			window[tmpidx] += custom[i].time;
		}
	}
	if(custom.size()==0){
		cout<<"0.0";
	}else{
		printf("%0.1f",res/60/custom.size());
	}
	return 0;
}
