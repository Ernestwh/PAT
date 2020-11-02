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
#include<set>
using namespace std;


int main(){
	int n;
	vector<int> couple(100001,0);
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		couple[a]=b;
		couple[b]=a;
	}
	int m;
	cin>>m;
	vector<int> help(100001,0);
	int temp;
	for(int i=0;i<m;i++){
		cin>>temp;
		help[temp]=1;
	}
	int cnt = 0;
	for(int i=0;i<100001;i++){
		if(help[i] && help[couple[i]]){
			help[i]=0;
			help[couple[i]]=0;
			cnt+=2;
		}	
	}
	cout<<m-cnt<<endl;
	bool flag = true;
	for(int i=0;i<100001;i++){
		if(help[i]){
			if(flag){
				printf("%05d",i);
				flag = false;
			}else{
				printf(" %05d",i);
			}
		}
	}
	return 0;
	
	
}
