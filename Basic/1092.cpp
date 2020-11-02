#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	vector<int> v(N);
	int num;
	int max=0;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>num;
			v[j]+=num;
			if(v[j]>max){
				max = v[j];
			}
		}
	}
	cout<<max<<endl;
	bool flag = true;
	for(int i=0;i<N;i++){
		if(v[i]==max){
			if(flag){
				cout<<i+1;
				flag = false;
			}else{
				cout<<" "<<i+1;
			}
		}
	}
	return 0;
}
