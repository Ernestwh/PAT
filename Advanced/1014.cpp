#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;

struct node{
	queue<int> que;
	int poptime,endtime;
};

int main(){
	int n,m,k,q;
	int idx = 1;
	cin>>n>>m>>k>>q;
	vector<int> time(k+1),result(k+1);
	for(int i=1 ; i<=k;i++){
		cin>>time[i];
	}
	vector<node> window(n+1);
	vector<bool> sorry(k+1,false);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(idx<=k){
				window[j].que.push(time[idx]);
				if(window[j].endtime>=540){
					sorry[idx] = true;
				}
				window[j].endtime+= time[idx];
				if(i==1){
					window[j].poptime = window[j].endtime;
				}
				result[idx] = window[j].endtime;
				idx++;
			}
		}
	}
	while(idx <= k){
		int tempmin = window[1].poptime,tempwindow=1;
		for(int i=2;i<=n;i++){
			if(window[i].poptime<tempmin){
				tempmin = window[i].poptime;
				tempwindow = i;
			}
		}
		window[tempwindow].que.pop();
		window[tempwindow].que.push(time[idx]);
		window[tempwindow].poptime += window[tempwindow].que.front();
		if(window[tempwindow].endtime>=540){
			sorry[idx]=true;
		}
		window[tempwindow].endtime += time[idx];
		result[idx] = window[tempwindow].endtime;
		idx++;
	}
	for(int i=1;i<=q;i++){
		int query,minute;
		cin>>query;
		minute = result[query];
		if(sorry[query]){
			printf("Sorry\n");
		}else{
			printf("%02d:%02d\n",(minute+480)/60,minute%60);
		}
	}
	return 0;
}
