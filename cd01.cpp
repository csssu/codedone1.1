#include<iostream>
using namespace std;

int main(){
  unsigned long int n;
  int c=0;
  cin>>n;
  while(n>=100){
    n-=100;
    c++;
  }
  while(n>=20){
    n-=20;
    c++;
  }
  while(n>=10){
    n-=10;
    c++;
  }
  while(n>=5){
    n-=5;
    c++;
  }
  while(n>=1){
    n-=1;
    c++;
  }
  cout<<c;
  return 0;
}