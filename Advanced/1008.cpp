#include<iostream>


using namespace std;
int main(){
	int N;
	cin>>N;
	int now=0; 
	int sum=0;
	int l;
	for(int i=0;i<N;i++){
		cin>>l;
		if(l>now){
			sum+=6*(l-now);
		}else{
			sum+=4*(now-l);
		}
		sum+=5;
		now = l;
	}
	cout<<sum;
	return 0;
}
