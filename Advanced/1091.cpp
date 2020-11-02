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
#include<queue>
#include<math.h>
using namespace std;

struct node{
	int x,y,z;
};
int m,n,l,t;

int X[6] = {1,0,0,-1,0,0};
int Y[6] = {0,1,0,0,-1,0};
int Z[6] = {0,0,1,0,0,-1};

int arr[1300][130][80];
bool visit[1300][130][80];
bool judge(int x,int y,int z){
	if(x<0 || x>=m  || y<0 || y>=n|| z<0 || z>=l) return false;
	if(arr[x][y][z]==0 || visit[x][y][z]==true) return false;
	return true;
}
int bfs(int x,int y,int z){
	int cnt = 0;
	node temp;
	temp.x = x, temp.y=y,temp.z=z;
	queue<node> que;
	que.push(temp);
	visit[x][y][z] = true;
	while(!que.empty()){
		node top = que.front();
		que.pop();
		cnt++;
		for(int i=0;i<6;i++){
			int tx = top.x + X[i];
			int ty = top.y + Y[i];
			int tz = top.z + Z[i];
			if(judge(tx,ty,tz)){
				visit[tx][ty][tz] = true;
				temp.x = tx,temp.y = ty,temp.z = tz;
				que.push(temp);
			}
		}
	}
	if(cnt>=t){
		return cnt;
	}else{
		return 0;
	}
}
int main(){
	cin>>m>>n>>l>>t;
	for(int i=0;i<l;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
				scanf("%d", &arr[j][k][i]);
			}
		}
	}
	int ans = 0;
	for(int i=0;i<l;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
				if(arr[j][k][i] && visit[j][k][i]==false){
					ans += bfs(j,k,i);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
