#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int N; cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin>>a[i];


    sort(a.rbegin(),a.rend());

int Alice=0;
int Bob=0;
    for(int i=0;i<N;i++){
        if(i%2==0){
        Alice=Alice+a[i];
        }
        else{
            Bob=a[i]+Bob;
        }
    }

    cout<<Alice-Bob<<endl;



}