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
	int val;
	struct node *left,*right;
};

node* build(node *root,int val){
	if(root==NULL){
		root = new node();
		root->val = val;
		root->left = NULL;
		root->right = NULL;
	}
	else if(val<=root->val){
		root->left = build(root->left,val);
	}else{
		root->right = build(root->right,val);
	}
	return root;
}
vector<int> nodenum(1001);
int maxdepth = -1;

void dfs(node *root,int depth){
	if(root==NULL){
		maxdepth = max(maxdepth,depth);
		return;
	}
	nodenum[depth]++;
	dfs(root->left,depth+1);
	dfs(root->right,depth+1);
}

int main(){
	int n,t;
	cin>>n;
	node *root = NULL;
	for(int i=0;i<n;i++){
		cin>>t;
		root = build(root,t);
	}
	dfs(root,0);
	printf("%d + %d = %d", nodenum[maxdepth-1], nodenum[maxdepth-2], nodenum[maxdepth-1] +nodenum[maxdepth-2]);
	return 0;
	
}

