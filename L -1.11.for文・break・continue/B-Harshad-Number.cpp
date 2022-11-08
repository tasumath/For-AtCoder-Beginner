#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
 string S;
 cin>>S;
 int N = S.size();

int total=0;
for(int i=0;i<N;i++){
  total=total+S[i]-'0';
}
int tmp=0;
for(int i=0;i<N;i++){
  tmp=(S[i]-'0')+tmp*10;
}

if(tmp % total==0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}