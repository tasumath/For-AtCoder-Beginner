#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    int a; cin>>a;
    int b; cin>>b;

    int cnt=0;

    for(int i=a;i<=b;i++){
        int k1 = i / 10000;
        
        int k2 = (i - k1*10000)/1000;
        //cout<<k2<<endl;
        int k3 = (i - k1*10000 - k2*1000)/100;
        //cout<<k3<<endl;
        int k4 = (i - k1*10000 - k2*1000 - k3*100)/10;
        //cout<<k4<<endl;
        int k5=i%10;


        if(k1==k5 && k2==k4){
            cnt++;
        }
    }

    cout<<cnt<<endl;


}
