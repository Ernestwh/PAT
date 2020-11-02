#include<iostream>
#include <iostream>
#include <algorithm>
#include <cctype>
#include<string.h>
#include <vector>
#include<cmath>
#include <unordered_map>
using namespace std;

struct node{
	string name;
	char gender;
	string ID;
	int grade;
};

int main(){
	struct node mlow;
	struct node fhigh;
	mlow.grade = 101;
	fhigh.grade = -1;
	struct node temp;
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>temp.name;
		cin>>temp.gender;
		cin>>temp.ID;
		cin>>temp.grade;
		if(temp.gender=='M'){
			if(temp.grade<mlow.grade){
				mlow = temp;
			}
		}else{
			if(temp.grade>fhigh.grade){
				fhigh = temp;
			}
		}
	}
	int flag = true;
	if(fhigh.grade==-1){
		cout<<"Absent"<<endl;
		flag = false;
	}else{
		cout<<fhigh.name<<" "<<fhigh.ID<<endl;
	}
	if(mlow.grade==101){
		cout<<"Absent"<<endl;
		flag = false;
	}else{
		cout<<mlow.name<<" "<<mlow.ID<<endl;
	}
	if(flag){
		cout<<fhigh.grade-mlow.grade;
	}else{
		cout<<"NA";
	}
	return 0;
}
