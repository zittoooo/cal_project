#include <stdlib.h>
#include <stdio.h>
int cl(int i){
		system("clear");
	return 0;
}
int main(void){
	char Input[60];
 	char clear[60] = "clear";
	scanf("%s", Input);
	if ( Input[60] == clear[60])
		cl(1); 
	return 0;
}
