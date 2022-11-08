#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(void){
int N; cin>>N;
vector<int> l(N);
vector<int> r(N);

int total=0;
for(int i=0;i<N;i++){
  int res;
  cin>>l[i]>>r[i];
  res=(r[i]-l[i])+1;
  total=total+res;
}

cout<<total<<endl;

}