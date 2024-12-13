#include<iostream>
using namespace std;

int digitSum(int num){
  int digit_sum=0;
  while (num>0)
  {
    int lastdigit= num %10;
    num /= 10;
    digit_sum += lastdigit;

  }
  
  return  digit_sum;
}


int main(){
  cout<<"sum ="<<digitSum(112)<<endl;
 return 0;
}