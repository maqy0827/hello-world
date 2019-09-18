#include<stdio.h>
#include<math.h>

int main(){
	int dividend;
	scanf("%d",&dividend);
	int a = 2,b = sqrt(dividend);
	while(!(dividend%a)){
		printf("%d\n",a);
		dividend /= a;
	}
	for(a = 3;a<b;a+=2){
		while(!(dividend%a)){
			printf("%d\n",a);
			dividend /= a;
		}
	}
	return 0;
} 
