#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *x,const void *y){
  int ret;

  if(*(int*)x<*(int*)y){
    ret=1;
  }
  else if(*(int*)x>*(int*)y){
    ret=-1;
  }else{
    ret=0;
  }

  return ret;
}
int main(void){
int N;
int a[100];
scanf("%d",&N);
for(int i=1;i<=N;i++){
scanf("%d",&a[i]);
}
qsort(&a[1],N,sizeof(int),compare);
int cnt=1;
int max=a[1];
//ソートした後のアルゴリズムが分からなかった。
for(int i=1;i<N;i++){
  if(max!=a[i+1]){
    max=a[i+1];
    cnt++;
  }
}

printf("%d",cnt);

  return 0;
}
