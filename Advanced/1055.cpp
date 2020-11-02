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
	string name;
	int age;
	int worth;
	
};

bool cmp(node a,node b){
	if(a.worth==b.worth){
		if(a.age==b.age){
			return a.name<b.name;
		}
		return a.age<b.age;
	}
	return a.worth>b.worth;
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<node> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i].name;
		cin>>vec[i].age;
		cin>>vec[i].worth;
	}
	sort(vec.begin(),vec.end(),cmp);
	int minage,maxage;
	int temp;
	int count;
	for(int i=0;i<k;i++){
		count=0;
		cin>>temp>>minage>>maxage;
		printf("Case #%d:\n",i+1);
		for(int j=0;j<n;j++){
			if(vec[j].age>=minage&&vec[j].age<=maxage){
				printf("%s %d %d\n",vec[j].name.c_str(),vec[j].age,vec[j].worth);
				count++;
			}
			if(count==temp) break;
		}
		if(count==0) printf("None\n");
	}
	return 0;
}
