#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(void){
int N,A; cin>>N>>A;

int n=N/500;
int ret=N-n*500;

if(ret<=A) cout<<"Yes"<<endl;

else cout<<"No"<<endl;

}