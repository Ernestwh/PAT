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
vector<int> G[1001];
int level;
struct node {
	int id, layer;
};

int bfs(node tnode) {
	bool inq[1001] = {false};
	queue<node> que;
	que.push(tnode);
	inq[tnode.id] = true;
	int cnt = 0;
	while(!que.empty()){
		node top = que.front();
		que.pop();
		int topid = top.id;
		for(int i=0;i<G[topid].size();i++){
			int nextid = G[topid][i];
			if(inq[nextid]==false && top.layer<level){
				node next = {nextid,top.layer+1};
				que.push(next);
				inq[next.id] = true;
				cnt++;
			}
		}
	}
	return cnt;
}


int main(){
	int n;
	cin>>n>>level;
	int k;
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		int temp;
		for(int j=0;j<k;j++){
			scanf("%d",&temp);
			G[temp].push_back(i);
		}
	}
	cin>>k;
	int query;
	for(int i=0;i<k;i++){
		scanf("%d",&query);
		node tnode = {query,0};
		printf("%d\n",bfs(tnode));
	}
	
	return 0;
}
