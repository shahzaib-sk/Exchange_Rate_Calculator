#include <iostream>

using namespace std;

void doubledDigits(int num)
{
int doubledDigit=0;
  int reversedSum = 0;
  int digit = 0;

  while(num > 0){
    digit = num % 10;
    doubledDigit = digit * 2;

    cout <<"Seperated digits doubled :"<<doubledDigit << "\n";
    reversedSum = (reversedSum * 10) * doubledDigit;
    num /=10;
  }
}

int sumOfDoubledDigits(int num){
  int sum = 0;
  while (num>0){
    int digit = num%10;
    int doubledDigit = digit * 2;
    sum += doubledDigit;
    num /= 10;
  }
  return sum;
}
int main(){
  cout<<"The given student id is : bc123456789"<<endl;
  cout<<"Given student id digital part is : 123456789"<<endl;
  int numericalPart = 123456789;
  doubledDigits(numericalPart);
int s = sumOfDoubledDigits(numericalPart);
  cout <<"Sum of Doubled Digits: "<<s<<endl;
  return 0;
}