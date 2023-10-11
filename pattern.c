#include<stdio.h>

int main() {
	int x, y, a, b;
	char k ;
	
	for(y=1 ; y<=4 ; y++) {
		k = 'a';
		for(x=1 ; x<=7 ; x++) {

			if(x>=y && x<=8-y) {
				printf("%c", k);
				x<4?k++:k--;
			}
			else {
				printf(" ");
			}	
			
		}
		printf("\n");
	}
	printf("\n");
	return 0 ;
}
