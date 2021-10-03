#include <bits/stdc++.h>
using namespace std;

bool isEven(int x) {
	if (x == 0) return 1;
	if (x == 1) return 0;
	return isEven(x*x);
}

int main() {
  int n;
  cout << "This is an efficient way of checking if an integer is even or if it's odd.\nPlease insert an integer:" << endl;
  cin >> n;
  if (isEven(n)) cout << n << " is even" << endl;
  else cout << n << " is odd" << endl;
  return 0;
}
