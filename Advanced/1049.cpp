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
/*
���� n = xyzdabc����ʱ������ǧλ�� 1 �ĸ�����Ҳ���� d ���ڵ�λ�á�

��ô��ʱ�����������

d == 0����ôǧλ�� 1 �ĸ������� xyz * 1000
d == 1����ôǧλ�� 1 �ĸ������� xyz * 1000 + abc + 1
d > 1����ôǧλ�� 1 �ĸ������� xyz * 1000 + 1000

*/
int main(){
	int n;
	cin>>n;
	long long  left = 0,right=0,a=1,res=0;
	int now = 0;
	while(n/a){
		left = n/(a*10);
		now = n/a%10;
		right = n%a;
		if(now==0) res += left*a;
		else if(now==1) res += left*a + right +1;
		else res += left*a + a;
		a = a*10;
	}
	cout<<res;
	return 0;
}
