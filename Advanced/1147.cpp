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
int m,n;
vector<int> vec;

void postOrder(int index){
	if(index>=n) return;
	postOrder(index*2+1);
	postOrder(index*2+2);
	printf("%d%s",vec[index],index==0?"\n":" ");
}
int main(){
	cin>>m>>n;
	vec.resize(n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>vec[j];
		}
		int flag = vec[0] > vec[1] ? 1 : -1;
		for(int j=0;j<=(n-1)/2;j++){
			int left = 2*j+1;
			int right = 2*j+2;
			if(flag==1 &&(vec[j]<vec[left]||(right<n&&vec[j]<vec[right]))) flag=0;
			if(flag==-1&&(vec[j]>vec[left]||(right<n&&vec[j]>vec[right]))) flag=0;
		}
		if(flag==0){
			printf("Not Heap\n");
		}else if(flag==-1){
			printf("Min Heap\n"); 
		}else{
			printf("Max Heap\n");
		}
		postOrder(0);
	} 
	return 0;
}
