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
	string name;
	string id;
	int grade;
};
bool cmp(node a,node b){
	return a.grade>b.grade;
}
int main(){
	int n;
	cin>>n;
	vector<node> vec(n);
	string name,id;
	int grade;
	for(int i=0;i<n;i++){
		cin>>name>>id>>grade;
		vec[i] = {name,id,grade};
	}
	int g1,g2;
	cin>>g1>>g2;
	vector<node> res;
	for(int i=0;i<n;i++){
		if(vec[i].grade>= g1 && vec[i].grade<=g2){
			res.push_back(vec[i]);
		}
	}
	if(res.size()==0){
		cout<<"NONE";
	}else{
		sort(res.begin(),res.end(),cmp);
		for(int i=0;i<res.size();i++){
			printf("%s %s\n",res[i].name.c_str(),res[i].id.c_str());
		}
	}
	return 0;
}
