#include <iostream>
using namespace std;
const int MAX = 50;
int a[MAX];
void sieveOFEratosthenes(){
  a[2]=1;
  
  for(int i=3;i<MAX;i+=2){
    a[i] = 1;
  }
  for(int i=3;i*i<MAX;i+=2){
    if(a[i]==1){
      for(int j =i*i;j<=MAX;j+=i){
        a[j]=0;
      }
    }
  }
}

int main() 
{
  int n;
    cout << n;
  sieveOFEratosthenes();
  
  for(int i=2;i<MAX;i++)
    cout<<i<<" "<<a[i]<<endl;
    return 0;
}