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
#include<queue>
using namespace std;

struct node{
	int val;
	struct node *left,*right;
};

node* build(node *root,int val){
	if(root == NULL){
		root = new node();
		root->val = val;
		root->left = root->right = NULL;
	}else if(abs(val)<=abs(root->val)){
		root->left = build(root->left,val);
	}else{
		root->right = build(root->right,val);
	}
	return root;
}
int getnum(node *root){
	if(root==NULL) return 0;
	int l = getnum(root->left);
	int r = getnum(root->right);
	if(root->val >0){
		return max(l,r)+1;
	}
	return max(l,r);
}
bool judge1(node* root){
	if(root == NULL) return true;
	if(root->val<0){
		if(root->left!=NULL && root->left->val<0) return false;
		if(root->right!=NULL && root->right->val<0) return false;
	}
	return judge1(root->left) && judge1(root->right);
}

bool judge2(node* root){
	if(root==NULL) return true;
	int l = getnum(root->left);
	int r = getnum(root->right);
	if(l!=r) return false;
	return judge2(root->left) && judge2(root->right);
}
vector<int> arr;
int main(){
	int k;
	int n;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>n;
		arr.resize(n);
		node *root = NULL;
		for(int j=0;j<n;j++){
			cin>>arr[j];
			root=build(root,arr[j]);
		}
		if(arr[0]<0 || judge1(root)==false || judge2(root)==false){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
}
