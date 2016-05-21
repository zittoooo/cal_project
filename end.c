#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int e_xit(int i){
	return 0;}
int main(void){
	int i = 0;
	char Input[60];
	char end[60] = "end";
	scanf("%s", Input);
	i = strcmp (Input, end);
	if (i == 0)
		e_xit(1);
	return 0;
}
