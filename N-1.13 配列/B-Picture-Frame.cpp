#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

char a[100][101];
char b[102][102];

int main(){
 int H,W; cin>>H>>W;
 for(int i=0;i<H;i++){
  for(int j=0;j<W;j++){
    cin>>a[i][j];
  }
 }
for(int i=0;i<H+2;i++){
 for(int j=0;j<W+2;j++){
    b[i][j]='#';
  }
}
for(int i=0;i<H;i++){
  for(int j=0;j<W;j++){
    b[i+1][j+1]=a[i][j];
  }
}
for(int i=0;i<H+2;i++){
  for(int j=0;j<W+2;j++){
    cout<<b[i][j];
  }
  cout<<endl;
}


}