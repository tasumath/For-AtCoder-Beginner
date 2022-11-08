#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

int N,i;
char S[5];

scanf("%s",S);

int cnt=0;
for(i=0;i<strlen(S);i++){
if(S[i] == '1') 
cnt=cnt+1;
}

printf("%d",cnt);

return 0;
}
