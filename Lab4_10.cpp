#include <stdio.h>

int main (void){
	int score;
	int a=0,b=0,c=0,d=0,f=0;
	
	while(1) {
		if (scanf("%d", &score) != 1 || score == -1){
			break;
		}
		if (score < 0 || score > 100) {
			printf("error score\n");
			continue;
		}
		printf("%d", score);
		
		if (score >= 68) {
			if (score >= 80){
				printf("(A)\n");
				a++;
			}
			else if (score >= 75){
				printf("(B)\n");
				b++;
			}
			else{
				printf("(C)\n");
				c++;
			}
		}
		else {
			if (score >= 50){
				printf("(D)\n");
				d++;
			}
			else {
				printf("(F)\n");
				f++;
			}
		}
	}
	printf("A(%d)\n",a);
	printf("B(%d)\n",b);
	printf("C(%d)\n",c);
	printf("D(%d)\n",d);
	printf("F(%d)\n",f);
	
	return 0;
}
