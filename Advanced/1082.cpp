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

string table[] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba","jiu" };
string grade[] = { "Ge","Shi", "Bai", "Qian", "Wan" };

int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<"ling";
		return 0;
	}
	if(n<0){
		cout<<"Fu ";
		n = -n;
	}
	int part[3];
	part[0] = n/100000000;
	part[1] = (n % 100000000)/10000;
	part[2] = n%10000;
	string res;
	if(part[0]!=0) res +=table[part[0]]+" Yi ";
	for(int i=1;i<3;i++){
		if(part[i]==0) continue;
		string str = to_string(part[i]);
		int size = str.size();
		int index = size;
		bool flag = false;
		if((size<4 && part[i-1])||(i==2 && part[i-1]==0 && res.size()>0)) res+="ling ";
		for(int j=0;j<size;j++){
			if(str[j]!='0'){
				if(flag){
					res += "ling ";
					index--;
					flag = false;
				}
				res += table[str[j]-'0']+" ";
				if(grade[--index]!="Ge") res+=grade[index]+" ";
			}else{
				if(flag) index--;
				flag = true;
			}
		}
		if(i==1) res+="Wan ";
	}
	cout<<res.substr(0,res.size()-1);
	return 0;
}
