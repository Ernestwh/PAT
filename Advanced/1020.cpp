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
struct node{
	int index,value; 
}; 
bool cmp(node a,node b){
	return a.index<b.index;
}
vector<int> pos,in;
vector<node> ans;

void pre(int root,int start,int end,int index){
	if(start>end) return;
	int i = start;
	while(in[i]!=pos[root]) i++;
	ans.push_back({index,pos[root]});
	pre(root-(end-i+1),start,i-1,index*2+1);
	pre(root-1,i+1,end,index*2+2);
}


int main(){
	int N;
	cin>>N;
	pos.resize(N);
	in.resize(N);
	for(int i=0;i<N;i++){
		cin>>pos[i];
	}
	for(int i=0;i<N;i++){
		cin>>in[i];
	}
	pre(N-1,0,N-1,0);
	sort(ans.begin(),ans.end(),cmp);
	for(int i=0;i<ans.size();i++){
		if(i==0){
			cout<<ans[i].value;
		}else{
			cout<<" "<<ans[i].value;
		}
	}
	return 0;
}
