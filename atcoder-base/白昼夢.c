#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[110000];
int i,n;
void reverse(char s[],int n){
  int t;
  for(i=0;i<n/2;i++){
    t=s[i];
    s[i]=s[n-1-i];
    s[n-1-i]=t;
  }
}

int main(){

scanf("%s",s);

n=strlen(s);
reverse(s,n);

int cnt=0;
int judge=0;
int bom=0;

while(cnt<n){
if(s[cnt]=='m' && s[cnt+1]=='a' && s[cnt+2]=='e' && s[cnt+3]=='r' && s[cnt+4]=='d'){
  cnt=cnt+5;
}
if(s[cnt]=='r' && s[cnt+1]=='e' && s[cnt+2]=='m' && s[cnt+3]=='a' && s[cnt+4]=='e' && s[cnt+5]=='r' && s[cnt+6]=='d'){
  cnt=cnt+7;
}
if(s[cnt]=='e' && s[cnt+1]=='s' && s[cnt+2]=='a' && s[cnt+3]=='r' && s[cnt+4]=='e'){
  cnt=cnt+5;
}
if(s[cnt]=='r' && s[cnt+1]=='e' && s[cnt+2]=='s' && s[cnt+3]=='a' && s[cnt+4]=='r' && s[cnt+5]=='e'){
  cnt=cnt+6;
}
if(cnt==n-1){
  break;
}
bom=bom+1;
if(bom==n-1){
  judge=judge+1;
  break;
}
}

if(judge==1)
printf("NO");

else
printf("YES");


return 0;
}