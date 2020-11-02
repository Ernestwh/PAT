#include<iostream>
#include <cstdio>
using namespace std;

int main(){
	int N,D;
	double e;
	cin >> N >> e >>D;
	int A=0,B=0;
	for(int i=0;i<N;i++){
		int day;
		cin >> day;
		int count=0;
		for(int j=0;j<day;j++){
			double temp;
			cin >> temp;
			if(temp<e) 
				count++; 
		}
		if(count>day/2)
			day>D ? B++ : A++; 
	}
	double maybe = (double)A/N *100;
	double must = (double)B/N *100;
	printf("%.1f%% %.1f%%",maybe,must);
	return 0;
}
