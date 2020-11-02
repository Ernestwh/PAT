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

map<string, set<int> > title, author, key, pub, year;

void query(map<string, set<int> > &m, string &str){
	if(m.find(str)!=m.end()){
		for(auto it = m[str].begin();it!=m[str].end();it++){
			printf("%07d\n",*it);
		}
	}else{
		cout<<"Not Found"<<endl;
	}
}

int main(){
	int N;
	cin>>N;
	int id;
	string ttitle, tauthor, tkey, tpub, tyear;
	for(int i=0;i<N;i++){
		scanf("%d\n", &id);
		getline(cin, ttitle);
		title[ttitle].insert(id);
		getline(cin, tauthor);
		author[tauthor].insert(id);
		while(cin>>tkey){
			key[tkey].insert(id);
			char c = getchar();
			if(c=='\n') break;
		}
		getline(cin, tpub);
		pub[tpub].insert(id);
		getline(cin, tyear);
		year[tyear].insert(id);
	}
	int M;
	cin>>M;
	int num;
	for(int i=0;i<M;i++){
		scanf("%d: ", &num);
		string temp;
		getline(cin, temp);
		cout << num << ": " << temp << "\n";
		if(num==1) query(title,temp);
		else if(num==2) query(author,temp);
		else if(num==3) query(key,temp);
		else if(num==4) query(pub,temp);
		else if(num==5) query(year,temp);
	}
	return 0;
}


