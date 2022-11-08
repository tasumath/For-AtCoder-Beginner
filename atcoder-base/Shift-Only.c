#include<stdio.h>

int main(void){

int n;
int cnt=0;
int b=2;
char a[200];
//b,cntの初期値をしっかりと設定すること。

scanf("%d",&n);
for(int i=1;i<=n;i++){
  scanf("%d",&a[i]);  //&を付けること
}

while(b%2==1){
for(int i=1;i<=n;i++){
  b=a[i];
  if(b%2==0){
    a[i]=a[i]/2;
  }
  else if(b%2 !=0){
  break;  
  }
}
cnt++;
}
printf("%d",cnt);

return 0;
}
