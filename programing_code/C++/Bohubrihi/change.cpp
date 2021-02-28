#include <iostream>

int get_change(int m) {
  int n = 0;
  int ten = m/10;
  m = m - (10*ten);
  int five = m/5;
  m = m - (5*five);
  n = m + five + ten;
  
  return n;
}

int main() {
  freopen("1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
