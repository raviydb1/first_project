#include<iostream>
using namespace std;
int main(){
  int n=5;
  int arr[5]={8,-1,2,4,5};
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<sum;
  cout<<endl;
  return 0;
}