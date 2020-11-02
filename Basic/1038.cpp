#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N;
	cin>>N;
	int temp;
	vector<int> vec(101,0);
	for(int i=0;i<N;i++){
		cin>>temp;
		vec[temp]++;
	}	
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>temp;
		if(i!=0) cout<<" ";
		cout<<vec[temp];
	}
	return 0;
}
