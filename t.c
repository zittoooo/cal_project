#include<stdio.h>
int main(void)
{


char a[10], a_up[10];
int k,i;

scanf("%s",a);

for(i=0;;i++)
if(a[i] == 46)               // . 출력 될때 i 값 찾기
	break;

for(k=0; k<=i-1 ;k++){       //    . 전까지 반복
       a_up[k] = a[k];       // 새로운 배열에 저장
	printf("%d",a_up[k]);}

	return 0;
}




