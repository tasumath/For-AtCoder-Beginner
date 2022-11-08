#include<stdio.h>

int main(void){
int S=0;
int cnt0,cnt1;
int x,y,n;

scanf("%d%d%d",&n,&x,&y);

for(int i=1;i<=n;i++){
  int s=0;
  cnt1=i/10;
  cnt0=i%10;
  s=cnt1+cnt0;
  if(x<=s&&s<=y)
  S=S+i;
}

printf("%d",S);

return 0;
}

//foo=foo+3;はfoo+=3;