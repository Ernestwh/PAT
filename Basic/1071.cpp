#include<iostream>

using namespace std;

int main(){
	int T,K;
    scanf("%d %d", &T, &K);
	int n1,b,t,n2;
	for(int i=0;i<K;i++){
        scanf("%d %d %d %d", &n1, &b, &t, &n2);
		int ans = n1 > n2 ? 0 : 1;
		if(T>=t){
			if(b==ans){
				T+=t;
				printf("Win %d!  Total = %d.\n", t, T);
			}else{
				T-=t;
				printf("Lose %d.  Total = %d.\n", t, T);
			}
		}else if(T==0){
			printf("Game Over.\n");
			return 0;
		}
		else{
			printf("Not enough tokens.  Total = %d.\n", T);
		}
	}
	return 0;
}
