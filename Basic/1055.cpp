#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;
struct node{
	string name;
	int h;
};
bool cmp(node a,node b){
	if(a.h!=b.h){
		return a.h>b.h;
	}else{
		return a.name<b.name;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	string name;
	int h;
	vector<node> v;
	for(int i=0;i<n;i++){
		cin>>name>>h;
		v.push_back(node{name,h});
	}
	sort(v.begin(),v.end(),cmp);
	int num = n/k;
	int num1 = n/k+n%k;
	vector<vector<node>> ans(k);
	int count=0;
	ans[0].push_back(v[count++]); 
	for(int i=1;i<num1;i++){
		if(i%2==0){
			ans[0].push_back(v[count++]);
		}else{
			ans[0].insert(ans[0].begin(),v[count++]);
		}
	} 
	for(int i=1;i<k;i++){
		ans[i].push_back(v[count++]);
		for(int j=1;j<num;j++){
			if(j%2==0){
				ans[i].push_back(v[count++]);
			}else{
				ans[i].insert(ans[i].begin(),v[count++]);
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<ans[i][0].name;
		for(int j=1;j<ans[i].size();j++){
			cout<<" "<<ans[i][j].name;
		}
		cout<<endl;
	}
	return 0;
	
}
