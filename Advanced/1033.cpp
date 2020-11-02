#include<iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
#include<set>
#include<map>
#include<queue>
using namespace std;
const int inf = 99999999;
struct station{
	double price;
	double dis;
};
bool cmp(station a,station b){
	return a.dis<b.dis;
}

int main(){
	double c,dmax,davg;
	int stanum;
	cin>>c>>dmax>>davg>>stanum;
	vector<station> sta(stanum+1);
	sta[0] = {0.0,dmax};
	for(int i=1;i<=stanum;i++){
		cin>>sta[i].price>>sta[i].dis;
	}
	sort(sta.begin(),sta.end(),cmp);
	double nowdis = 0.0,maxdis=0.0,nowprice=0.0,totalprice=0.0,leftdis=0.0;
	if(sta[0].dis !=0){
		cout<<"The maximum travel distance = 0.00";
		return 0;
	}else{
		nowprice = sta[0].price;
	}
	while(nowdis<dmax){
		maxdis = nowdis+c*davg;
		double minpricedis = 0,minprice=inf;
		int flag = 0;
		for(int i=1;i<=stanum && sta[i].dis<=maxdis;i++){
			if(sta[i].dis <= nowdis) continue;
			if(sta[i].price < nowprice){
				totalprice += (sta[i].dis -nowdis-leftdis)*nowprice/davg;
				leftdis = 0.0;
				nowprice = sta[i].price;
				nowdis = sta[i].dis;
				flag = 1;
				break;
			}
			if(sta[i].price<minprice){
				minprice = sta[i].price;
				minpricedis = sta[i].dis;
			}
		
		}
		if(flag == 0 && minprice !=inf){
			totalprice += (nowprice*(c-leftdis/davg));
			leftdis = c*davg -(minpricedis-nowdis);
			nowprice = minprice;
			nowdis = minpricedis;			
		}
		if(flag==0 && minprice == inf){
			nowdis += c*davg;
			printf("The maximum travel distance = %.2f",nowdis);
			return 0;
		}
	}
	printf("%.2f",totalprice);
	return 0;
}
