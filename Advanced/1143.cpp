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
	map<int,bool> map1;
	int m,n;
	cin>>m>>n;
	vector<int> pre(n);
	for(int i=0;i<n;i++){
		cin>>pre[i];
		map1[pre[i]] = true;
	} 
	int a,b;
	int tmp;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		for(int j=0;j<n;j++){
			tmp = pre[j];
			if((tmp>=a && tmp<=b)||(tmp>=b&&tmp<=a)){
				break;
			}
		}
		if(!map1[a] && !map1[b]){
			printf("ERROR: %d and %d are not found.\n", a, b);
		}else if(!map1[a] || !map1[b]){
			printf("ERROR: %d is not found.\n", map1[a] == false ? a : b);
		}else if(tmp == a || tmp == b){
			printf("%d is an ancestor of %d.\n", tmp, tmp == a ? b : a);
		}else{
			printf("LCA of %d and %d is %d.\n",a,b,tmp);
		}
	}
	return 0;
}
