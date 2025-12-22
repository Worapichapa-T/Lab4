#include <stdio.h>

int main (void){
	int score;
	
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
			}
			else if (score >= 75){
				printf("(B)\n");
			}
			else{
				printf("(C)\n");
			}
		}
		else {
			if (score >= 50){
				printf("(D)\n");
			}
			else {
				printf("(F)\n");
			}
		}
	}
	return 0;
}
