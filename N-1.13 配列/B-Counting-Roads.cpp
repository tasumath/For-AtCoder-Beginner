#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int a[60];
int b[60];
int cnt[60][60];
int count[60];

int main(){
int N,M; cin>>N>>M;

for(int i=1;i<=M;i++) cin>>a[i]>>b[i];

for(int i=1;i<=M;i++) cnt[a[i]][b[i]]=cnt[a[i]][b[i]]+1;

for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
        if(cnt[i][j] != 0){
            count[i]=count[i]+cnt[i][j];
            count[j]=count[j]+cnt[i][j];
        }
    }
}

for(int i=1;i<=N;i++) cout<<count[i]<<endl;


}