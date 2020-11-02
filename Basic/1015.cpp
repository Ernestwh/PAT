#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


struct student{
	char id[10];
	int de,cai,num;
	int flag;
	
}stu[100010];

bool cmp(student a, student b){
	if(a.flag != b.flag) return a.flag<b.flag;
	else if(a.num !=b.num) return a.num>b.num;
	else if(a.de!=b.de) return a.de>b.de;
	else return strcmp(a.id,b.id)<0; 
}
int main(){
	int n,L,H;
	cin>>n>>L>>H;
	
	int m =n;
	for(int i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].de>>stu[i].cai;
		stu[i].num = stu[i].de+stu[i].cai;
		if(stu[i].cai<L||stu[i].de<L){
			stu[i].flag = 5;
			m--;
		}
		else if(stu[i].de >= H&&stu[i].cai >=H) stu[i].flag=1; 
		else if(stu[i].de >= H&&stu[i].cai <H) stu[i].flag=2;
		else if(stu[i].de >= stu[i].cai) stu[i].flag =3;
		else stu[i].flag = 4;
		
	}
	sort(stu,stu+n,cmp);
	cout<<m<<endl;
	for(int i =0;i<m;i++){
		printf("%s %d %d\n",stu[i].id,stu[i].de,stu[i].cai);
	}
	
	return 0;
	
}
