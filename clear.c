#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int cl(int i){
		system("clear");
	return 0;
}
int main(void){
	int i = 0;
	char Input[60];
 	char clear[60] = "clear";
	scanf("%s", Input);
	i = strcmp (Input, clear);
	if (i == 0)
		cl(1); 
	return 0;
}
