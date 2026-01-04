#include <stdio.h>
int main() {
	char ch;
	int num;
	int count = 1;
	
	printf("Enter number : ");
	scanf("%c %d", &ch, &num);
	
	
	while(count <= num){
		printf("%c",ch);
		count++;
	}
	
	printf("\n");
	return 0;
}
