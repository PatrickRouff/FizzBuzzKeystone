#include <iostream>

using namespace std;

int main() {
int i = 0;
i+++;
while (i<101) {
  if ((i%3) == 0){
    cout<<"Fizz";
  } else {
    cout<<i;
  }
  cout<<", ";
  i++;
}
}
