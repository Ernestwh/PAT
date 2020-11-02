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
	int address,data,next;
};
int main(){
	int start,n,k;
	cin>>start>>n>>k;
	node temp[100010];
	vector<node> v,ans;
	int a,b,c;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		temp[a] = {a,b,c};
	}
	for(int i=start;i!=-1;i=temp[i].next){
		v.push_back(temp[i]);
	}
	for(int i=0;i<v.size();i++){
		if(v[i].data<0) ans.push_back(v[i]);
	}
	for(int i=0;i<v.size();i++){
		if(0<=v[i].data && v[i].data<=k) ans.push_back(v[i]);
	}
	for(int i=0;i<v.size();i++){
		if(v[i].data>k) ans.push_back(v[i]);
	}
	for(int i=0;i<ans.size()-1;i++){
		printf("%05d %d %05d\n",ans[i].address,ans[i].data,ans[i+1].address);
	}
	printf("%05d %d -1",ans[ans.size()-1].address,ans[ans.size()-1].data);
	return 0;
}
