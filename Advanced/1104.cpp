#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;


int main(){
	int n;
	cin>>n;
	double temp;
	double sum=0;
	for(int i=1;i<=n;i++){
		cin>>temp;
		sum+=temp*i*(n-i+1);
	}
	printf("%.2f",sum);
	return 0;
}
