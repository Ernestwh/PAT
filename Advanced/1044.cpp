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
	int n,m;
	cin>>n>>m;
	int A[n+1];
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	int left=1,right=1;
	int sum =A[left];
	int flag = 0;
	int mincount = 99999999;
	while(left<=right && right<=n){
		if(sum<m){
			right++;
			sum+=A[right];
		}else if(sum==m){
			printf("%d-%d\n",left,right);
			right++;
			sum+=A[right];
			flag = 1;
		}else{
			mincount = min(mincount,sum);
			if(left==right){
				left++;
				right++;
				sum==0;
				sum=A[right];
			}else{
				sum-=A[left];
				left++;
			}
		}
	}
	if(flag){
		return 0;
	}else{
		left=1,right=1;
		sum =A[left];
		while(left<=right && right<=n){
			if(sum<m){
				right++;
				sum+=A[right];
			}else{
				if(sum==mincount){
					printf("%d-%d\n",left,right);
				}
				if(left==right){
					left++;
					right++;
					sum==0;
					sum=A[right];
				}else{
					sum-=A[left];
					left++;
				}
				
			}
		}
	}
	return 0;
}
