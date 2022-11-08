#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
int N;
int x[100000],y[100000],t[100000];

scanf("%d",&N);
for(int i=0;i<N;i++){
  scanf("%d%d%d",&t[i],&x[i],&y[i]);
}

int dx=0,dy=0,dt=0;
for(int i=0;i<N;i++){
dx=abs(x[i+1]-x[i]);
dy=abs(y[i+1]-y[i]);
dt=abs(t[i+1]-t[i]);
if(dx+dy>dt || (dt-dx+dy)%2!=0){
  puts("No");
  break;
}
if(i==N-1){
  puts("Yes");
 }
}

return 0;
}