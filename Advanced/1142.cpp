#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
using namespace std;


int main(){
	int v,e;
	cin>>v>>e;
	int g[v+1][v+1] = {0};
	int a,b;
	for(int i=1;i<v+1;i++){
		g[i][i] = 1;
	}
	for(int i=0;i<e;i++){
		cin>>a>>b;
		g[a][b]=1;
		g[b][a]=1;
	}
	int m,k;
	cin>>m;
	for(int i=0;i<m;i++){
		int flag=2;
		cin>>k;
		set<int> s;
		vector<int> tmp(k);
		for(int j=0;j<k;j++){
			cin>>tmp[j];
			s.insert(tmp[j]);
		}
		for(a=0;a<k;a++){
			for(b=a+1;b<k;b++){
				if(g[tmp[a]][tmp[b]]==0){
					flag =0;
					break;	
				}
			}
		}
		if(flag==0){
			cout<<"Not a Clique"<<endl;
		}else{
			for(a=1;a<v+1;a++){
				if(s.find(a)==s.end()){
					for(b=0;b<k;b++){
						if(g[a][tmp[b]]==1){
							flag=1;
						}else{
							flag=2;
							break;
						} 
					}
				}
				if(flag==1){
					cout<<"Not Maximal"<<endl;
					break;
				}
			}
			if(flag==2){
				cout<<"Yes"<<endl;
			}
		}
	}
	return 0;
}
