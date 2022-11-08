#include<stdio.h>

int main(void){

int x,y,z,X;
int cnt=0;

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
scanf("%d",&X);

for(int i=0;i<=x;i++){
  for(int j=0;j<=y;j++){
    for(int k=0;k<=z;k++){
      if(X==500*i+100*j+50*k)
      cnt++;
    }
  }
}

printf("%d",cnt);

return 0;
}
