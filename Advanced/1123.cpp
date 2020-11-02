#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<map>
#include<queue>
#include<stack>
using namespace std;

struct node{
	int val;
	struct node *left,*right;
};

node *rotateleft(node *root){
	node *t = root->right;
	root->right = t->left;
	t->left = root;
	return t;
}

node *rotateright(node *root){
	node *t = root->left;
	root->left = t->right;
	t->right = root;
	return t;
}
node *rotateleftright(node *root){
	root->left = rotateleft(root->left);
	return rotateright(root);
}
node *rotaterightleft(node *root){
	root->right = rotateright(root->right);
	return rotateleft(root);
}
int getheight(node *root){
	if(root==NULL) return 0;
	return max(getheight(root->left),getheight(root->right))+1;
}
node *insert(node *root,int val){
	if(root==NULL){
		root= new node();
		root->val = val;
		root->left = root->right =NULL;
	}else if(val<root->val){
		root->left = insert(root->left,val);
		if(getheight(root->left) - getheight(root->right)==2){
			root = val< root->left->val ? rotateright(root):rotateleftright(root);
		}
	}else{
		root->right = insert(root->right,val);
		if(getheight(root->left) - getheight(root->right)==-2){
			root = val> root->right->val ? rotateleft(root):rotaterightleft(root);
		}
	}
	return root;
}
int isComplete = 1,after=0;
vector<int> levelorder(node *root){
	vector<int> v;
	queue<node*> que;
	que.push(root);
	while(!que.empty()){
		node *temp = que.front();
		que.pop();
		v.push_back(temp->val);
		if(temp->left!=NULL){
			if(after) isComplete=0;
			que.push(temp->left);
		}else{
			after = 1;
		}
		if(temp->right!=NULL){
			if(after) isComplete=0;
			que.push(temp->right);
		}else{
			after=1;
		}
	}
	return v;
}


int main(){
	int n;
	cin>>n;
	int tmp;
	node *root = NULL;
	for(int i=0;i<n;i++){
		cin>>tmp;
		root = insert(root,tmp);
	}
	vector<int> v = levelorder(root);
	cout<<v[0];
	for(int i=1;i<v.size();i++){
		cout<<" "<<v[i];
	}
	printf("\n%s", isComplete ? "YES" : "NO");
	return 0;
}
