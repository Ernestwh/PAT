#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int N,M;
	scanf("%d%d", &N, &M);
	map<int,vector<int>> map1;
	int n1,n2;
	for(int i=0;i<N;i++){
		scanf("%d%d", &n1, &n2);
		map1[n1].push_back(n2);
		map1[n2].push_back(n1);
	}
	while(M--){
		int K,flag=0,A[100000]={0};
        scanf("%d", &K);
		vector<int> v(K);
		for(int i=0;i<K;i++){
			scanf("%d", &v[i]);
			A[v[i]]=1;
		}
		for(int i=0;i<v.size();i++){
			for(int j=0;j<map1[v[i]].size();j++){
				if(A[map1[v[i]][j]]==1) flag=1;
			}
		}
		printf("%s\n",flag ? "No" :"Yes");
	} 
	return 0;
}
