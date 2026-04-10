#include <iostream>
using namespace std;

int main(){

  int cnt,num,res;

  cin>>cnt;
  cin>>res;
  cnt-=1;

  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}
  if(cnt>0){cnt-=1; cin>>num; if(num>res) res=num;}

  cout<<res<<endl;
             
    return 0;
}