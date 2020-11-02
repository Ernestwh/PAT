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

vector<int> pre,post;
bool mirror;
void getpost(int root,int tail){
	if(root>tail) return;
	int i = root+1,j=tail;
	if(!mirror){
		while(i<=tail && pre[root]>pre[i]) i++;
		while(j>root && pre[root]<=pre[j]) j--;
	}else{
		while(i<=tail && pre[root]<=pre[i]) i++;
		while(j>root && pre[root]>pre[j]) j--;
	}
	if(i-j!=1) return;
	getpost(root+1,j);
	getpost(i,tail);
	post.push_back(pre[root]);
}
int main(){
	int n;
	cin>>n;
	pre.resize(n);
	for(int i=0;i<n;i++){
		cin>>pre[i];
	}
	getpost(0,n-1);
	if(post.size()!=n){
		mirror = true;
		post.clear();
		getpost(0,n-1);
	}
	if(post.size()==n){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			if(i!=n-1){
				cout<<post[i]<<" ";
			}else{
				cout<<post[i];
			}		
		}
	}else{
		cout<<"NO";
	}
}
