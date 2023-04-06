
#include<iostream>
#include<math.h>


long long factorial(int n){
  long long f = 1;
  for(int i = 1; i < n; i++){
    f = f * i;
  }
  return f;
}

using namespace std;

int main(){
  cout << "enter number: ";
  int n = 1;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cout << "Factorial of " << i << " is " << factorial(i) << endl;
  }
  
enum myfoods{butter = 2, milk = 5, cheese = 8, eggs};
cout << eggs << endl;

  return 0;
}