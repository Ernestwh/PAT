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
vector<int> pos;
vector<int> in,pre;
void post(int root,int start,int end){
	if(start>end) return;
	int i = start;
	while(i<end && in[i]!=pre[root]) i++;
	post(root+1,start,i-1);
	post(root+i+1-start,i+1,end);
	pos.push_back(pre[root]);
}

int main(){
	int n;
	cin>>n;
	stack<int> stk;
	string str;
	int temp;
	for(int i=0;i<2*n;i++){
		cin>>str;
		if(str=="Push"){
			cin>>temp;
			pre.push_back(temp);
			stk.push(temp);
		}else{
			in.push_back(stk.top());
			stk.pop();
		}
	}
	post(0,0,n-1);
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<pos[i];
	}
	return 0;
	
}
