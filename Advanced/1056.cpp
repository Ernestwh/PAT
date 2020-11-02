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
const int maxn = 1010;
struct mouse{
	int weight;
	int rank;
}mouse[maxn];

int main(){
	int np,ng,order;
	cin>>np>>ng;
	for(int i=0;i<np;i++){
		cin>>mouse[i].weight;
	}
	queue<int> que;
	for(int i=0;i<np;i++){
		cin>>order;
		que.push(order);
	}
	int temp = np;
	int group;
	while(que.size()!=1){
		if(temp%ng==0){
			group = temp/ng;
		}else{
			group = temp/ng+1;
		}
		for(int i=0;i<group;i++){
			int k = que.front();
			for(int j=0;j<ng;j++){
				if(i*ng+j>=temp){
					break;
				}
				int front = que.front();
				if(mouse[front].weight>=mouse[k].weight){
					k = front;
				}
				mouse[front].rank = group+1;
				que.pop();
			}
			que.push(k);
		}
		temp = group;
	}
	mouse[que.front()].rank = 1;
	for(int i=0;i<np;i++){
		printf("%d",mouse[i].rank);
		if(i<np-1){
			printf(" ");
		}
	}
	return 0;
}
