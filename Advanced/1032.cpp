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

struct NODE{
	char key;
	int next;
	bool flag;
}node[100000];

int main(){
	int s1,s2,n,a,b;
	cin>>s1>>s2>>n;
	char data;
	for(int i=0;i<n;i++){
		cin>>a>>data>>b;
		node[a] = {data,b,false};
	}
	for(int i=s1;i!=-1;i = node[i].next){
		node[i].flag = true;
	}
	for(int i=s2;i!=-1;i = node[i].next){
		if(node[i].flag == true){
			printf("%05d",i);
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
