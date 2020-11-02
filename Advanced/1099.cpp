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

int n,cnt=0,b[100];
struct node{
	int data,l,r,index,label;
}a[110];
bool cmp(node x,node y){
	if (x.label != y.label) return x.label < y.label;
	return x.index < y.index;
}

void inorder(int root,int index,int label){
	if(a[root].l==-1 && a[root].r==-1){
		a[root] = {b[cnt++],a[root].l,a[root].r,index,label};
	}else{
		if(a[root].l!=-1) inorder(a[root].l,index*2+1,label+1);
		a[root] = {b[cnt++],a[root].l,a[root].r,index,label};
		if(a[root].r!=-1) inorder(a[root].r,index*2+2,label+1);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].l>>a[i].r;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b,b+n);
	inorder(0,0,0);
	sort(a,a+n,cmp);
	cout<<a[0].data;
	for(int i=1;i<n;i++){
		cout<<" "<<a[i].data;
	}
	return 0;
}
