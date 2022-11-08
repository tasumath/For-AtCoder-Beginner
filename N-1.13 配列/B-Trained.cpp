#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int a[110000];

int main(){
  int N; cin>>N;
  for(int i=1;i<=N;i++) cin>>a[i];

bool hantei=true;
int trans=1;
int cnt=0; //ボタンを押した回数

while(hantei){
if(cnt>N){
  cout<<-1<<endl;
  hantei=false;
  continue;
}

if(a[trans]==2){
  cnt++;
  cout<<cnt<<endl;
  hantei=false;
  continue;
}
else{
  trans=a[trans];
}

cnt++;
}

}