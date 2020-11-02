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
#include<math.h>

using namespace std;

vector<int> pre,in;
bool flag = false;
void postOrder(int leftpre,int leftin,int rightin){
	if(leftin>rightin || flag==true) return;
	int i = leftin;
	while(in[i]!=pre[leftpre]) i++;
	postOrder(leftpre+1,leftin,i-1);
	postOrder(leftpre+i-leftin+1,i+1,rightin);
	if(flag==false){
		cout<<in[i];
		flag = true;
	}
}
int main(){
	int N;
	cin>>N;
	pre.resize(N);
	in.resize(N);
	for(int i=0;i<N;i++){
		cin>>pre[i];
	}
	for(int i=0;i<N;i++){
		cin>>in[i];
	}
	postOrder(0,0,N-1);
	return 0;
}
