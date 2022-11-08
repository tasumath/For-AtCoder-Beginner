#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
  if(*(int*)a<*(int*)b) return -1;
  if(*(int*)a>*(int*)b) return +1;
  return 0;
}
//int*でポインタ型の指定をする。*aは、恐らくa[1]番目のアドレスを*aと表現できることが由来。
int main(void){
int N;
int a[20009];
scanf("%d",&N);
for(int i=1;i<=N;i++){
scanf("%d",&a[i]);
}
//ソートについて。
//A[1]から始まるN個の要素をソートするので、引数にA;1,Nを指定している。
//compareの関数は鉄板になる。
qsort(a+1,N,sizeof(int),compare);

printf("%d",a[N]-a[1]);
 return 0;
}

//qsortはとりあえず使えればよい。原理は後で調べること。