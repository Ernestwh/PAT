#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
using namespace std;

struct node{
	int id;
	int de;
	int cai;
	int rank;
};
bool cmp(node a,node b){
	if(a.rank!=b.rank){
		return a.rank<b.rank;
	}
	else if((a.de+a.cai)!=(b.de+b.cai)){
		return (a.de+a.cai)>(b.cai+b.de);
	}else if(a.de!=b.de) return a.de>b.de;
	else return a.id<b.id;
}

int main(){
	int n,l,h;
	cin>>n>>l>>h;
	vector<node> vec(n);
	int count=0;
	for(int i=0;i<n;i++){
		cin>>vec[i].id>>vec[i].de>>vec[i].cai;
		if(vec[i].de<l || vec[i].cai<l){
			vec[i].rank=5;
		}
		else if(vec[i].de>=h && vec[i].cai>=h){
			vec[i].rank=1;
			count++;
		}
		else if(vec[i].de>=h && vec[i].cai<=h){
			vec[i].rank=2;
			count++;
		}
		else if(vec[i].de>=vec[i].cai){
			vec[i].rank=3;
			count++;
		}
		else {
			vec[i].rank=4;
			count++;
		}
	}
	sort(vec.begin(),vec.end(),cmp);
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		printf("%d %d %d\n",vec[i].id,vec[i].de,vec[i].cai);
	}
	return 0;
}
