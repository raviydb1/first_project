#include <iostream>
using namespace std;
int sub_array(){
    int n=5;
  int arr[5]={1,2,3,4,5};
  for(int st=0; st<n;st++){
    for(int end=st; end<n; end++ ){
      for(int i=st; i<=end; i++){
        cout<<arr[i];
      }
      cout<<" ";
    }
    cout<<endl;
  }
  return 0;

}
int sum(int a, int b){
  int s=a+b;
  return s;
}
int main(){
  sub_array();
  cout<<sum(8,22);
  return 0;
}