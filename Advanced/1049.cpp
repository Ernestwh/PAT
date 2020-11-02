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
假设 n = xyzdabc，此时我们求千位是 1 的个数，也就是 d 所在的位置。

那么此时有三种情况，

d == 0，那么千位上 1 的个数就是 xyz * 1000
d == 1，那么千位上 1 的个数就是 xyz * 1000 + abc + 1
d > 1，那么千位上 1 的个数就是 xyz * 1000 + 1000

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
