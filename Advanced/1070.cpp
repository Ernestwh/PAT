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
#include<set>
using namespace std;

struct node{
	float sum;
	float tol;
	float pro;
}moon[1001];

bool cmp(node a,node b){
	return a.pro>b.pro;
}
int main(){
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>moon[i].sum;
	}
	for(int i=0;i<n;i++){
		cin>>moon[i].tol;
		moon[i].pro=moon[i].tol/moon[i].sum;
	}
	sort(moon,moon+n,cmp);
	float count=0;
	for(int i=0;i<n;i++){
		if(d>moon[i].sum){
			count+=moon[i].tol;
		}else{
			count+=moon[i].pro*d;
			break;
		}
		d = d-moon[i].sum;
	}
	printf("%.2f",count);
	return 0;
}
