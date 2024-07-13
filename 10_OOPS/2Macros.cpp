#include <iostream>
using namespace std;

#define PI 3.1415

float circleArea(float r) {
  return PI * r * r;
}

int main() {
  cout << circleArea(65.4) << endl;
  return 0;
}
