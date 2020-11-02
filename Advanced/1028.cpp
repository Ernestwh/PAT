#include<iostream>
#include<vector>
#include<algorithm>
#include <string.h>
using namespace std;
int c;
struct stu{
	int id;
	char name[10];
	int grade;
};

bool cmp(stu a,stu b){
	if(c==1){
		return a.id<b.id;
	}else if(c==2){
		if(strcmp(a.name, b.name) == 0) return a.id < b.id;
		return strcmp(a.name, b.name) <= 0;
	}else{
		if(a.grade==b.grade){
			return a.id<b.id;
		}
		return a.grade<=b.grade;
	}
}

int main(){
	int n;
	cin>>n>>c;
	stu s[100001];	
	for(int i=0;i<n;i++){
		cin>>s[i].id>>s[i].name>>s[i].grade;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		printf("%06d %s %d\n", s[i].id, s[i].name, s[i].grade);
	}
	return 0;
}  
