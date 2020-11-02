#include<iostream>
#include<cmath>

using namespace std;
int sqr(int n) {
    return n * n;
}

int main(){
	int N;
	cin>>N;
	int maxdis=0,mindis=100000;
	int maxid,minid;
	int id,x,y;
	for(int i=0;i<N;i++){
		cin>>id>>x>>y;
		int dis = sqr(abs(x))+sqr(abs(y));
		if(dis>maxdis){
			maxid = id;
		}
		if(dis<mindis){
			minid = id;
		}
		maxdis = max(maxdis,dis);
		mindis = min(mindis,dis);
	}
	printf("%04d %04d",minid,maxid);
	return 0;
}
