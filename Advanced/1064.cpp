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
vector<int> in;
vector<int> level;
void levelorder(int start,int end,int index){
	if(start>end) return;
	int n = end-start+1;
	int l  = log(n+1)/log(2);
	int leave = n - (pow(2,l)-1);
	int root = start + (pow(2,l-1)-1)+min((int)pow(2,l-1),leave);
	level[index] = in[root];
	levelorder(start,root-1,index*2+1);
	levelorder(root+1,end,index*2+2);
	
}


int main(){
	int n;
	cin>>n;
	in.resize(n);
	level.resize(n);
	for(int i=0;i<n;i++){
		cin>>in[i];
	}
	sort(in.begin(),in.end());
	levelorder(0, n - 1, 0);
	printf("%d", level[0]);
	for(int i=1;i<n;i++){
		cout<<" "<<level[i];
	}
	return 0;
}
