#include<stdio.h>

int main() {
	int a,b,sum,d;
	printf("enter the nmber:");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		sum+=b;
		a=a/10;
	}
	printf("sum of its digit is %d",sum);
}
