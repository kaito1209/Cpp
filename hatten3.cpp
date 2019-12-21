#include <iostream>
using namespace std;

void func(int &x){
  x *= 2;
  x += 3;
}

int main(){
  int y = 10;
  func(y);
  cout << y << "\n";
}
