#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cctype>
#include<map>
#include<set>
#include<map>
#include<cmath>
#include<string.h>
#include<unordered_map>
using namespace std;
/*
������ٲŻ�ó������������ʳ���� 
˫��ѭ������ĳһ�쿪ʼ����ʳ
���������ʹ����ٴ�������ٴ���ʹ����ϣ�����һ�������ʼѭ�� ��ȡ���ֵ 
����˫��ѭ��ʱ�䱬 
*/
 
int main(){
	int k,p;
	cin>>k>>p;
	int n;
	cin>>n;
	// ����ai�� <2000  �ոճ���Ӧ�������� 
	vector<int> vec(2005,0);
	int meet;
	for(int i=1;i<=n;i++){
		scanf("%d",&meet);
		vec[meet]=1;
	}
	int res=0;
	int count;
	int sum;
	for(int i=1;i<k;i++){
		count=p;
		sum=0;
		for(int j=i;j<k;j++){
			if(vec[j]==0) sum++;
			if(vec[j]==1){
				if(count>0){
					sum++;
					count--;
				}else{
					break;
				} 
			} 
		}
		res = max(res,sum);
	}
	cout<<res;
	return 0;
	
	
	
	
	while(p->next){
		flag = 0;
		p = pstart;
		while(p){
			if(p->val==q->val) {
				flag = 1;
				break;
			}
		}
		if(flag==0){
			//���� 
		}
		
	} 
	
	
	
	
		unordered_set<int> s;
       s.insert(head->val);
       ListNode *pre =head;
       ListNode *q = head->next;
       while(q){
           if(a[q->val]==0){
        		a[q->val]==1;
               pre->next = q->next;
               q = pre->next;
           }else{
               s.insert(q->val);
               pre = q;
               q = q->next;
           }
       }
       return head;
       
       
       
       ListNode *prehead = new ListNode(-1);
       prehead->next = head;
       ListNode *pre = prehead;
       while(pre->next){
           ListNode *cur = pre->next;
           while(cur->next){
               if(pre->next->val == cur->next->val){
                   cur->next = cur->next->next;
               }else{
                   cur =cur->next;
               }
           }
           pre = pre->next;
       }
       return prehead->next;
       
       
       
       
       fun(n){
       		if(n==1 || n==2) return 1;
       		return fun(n-1)+fun(n-2);
	   } 
       
       fun(n){
       		if(n==1 || n==2) return 1;
       		int a=1,b=1;
       		int c;
       		for(int i=3;i<=n;i++){
       			c=b+a;
       			a=b;
       			b=c;
			}
	   }
	   
	   
	   
	   fun(int a[]){
	   		for(int i=0;i<a.length/2;i++){
	   			 int temp = a[i];
	   			 a[i]=a[n-i-1];
	   			 a[n-i+1]=temp; 
	   			 
			   }
	   }
	   
	   void del_x(int &A,int x,int n){
	   		int k=0;
			for(int i=0;i<n;i++){
				if(A[i]!=x){
					A[k]=A[i];
					k++;
				}
			} 
	   }
       
       
       bool merge(int A[],int m,int B[],int n,int &C){
       	
	   }
       
}
