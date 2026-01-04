#include <stdio.h>
int main() {
	char ch;
	int num;
	int row = 1;
	
	printf("Enter number : ");
	scanf("%c %d", &ch, &num);
	
	while(row <= num){
		 int col = 1;
		 
		while(col <= num){
		printf("%c", ch);
		col++;
		}
		printf("\n");
		row++;
	}

	
	printf("\n");
	return 0;
}
