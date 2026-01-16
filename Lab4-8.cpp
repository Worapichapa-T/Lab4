#include <stdio.h>

int main() {
	int z,i,score;
	scanf("%d",&z);
	for (i=0;i<z;i++){
		scanf("%d",&score);
		if(score>100){printf("error score");}
		else if(score >= 68) {	
				if(score >= 85){printf("A");}
				else if	(score>=75){printf("B");}
				else{printf("C");}}
			else {
				if(score>=55){printf("D");}
				else if(score>=0){printf("F");}
				else{printf("error score");}}
		printf("\n");
	}
}
