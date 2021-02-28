#include <bits/stdc++.h>
#include <iostream>
#include <vector>


using namespace std;;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  long double ans = 0.0, m = 0.0;
  int w, v, pos;
  
  while (capacity)
  {
    for (int i = 0; i < values.size(); i++)
    {
      if ( m < values[i] / weights[i]) {
        m = (double)values[i] / (double)weights[i];
        v = values[i];
        w = weights[i];
        pos = i;
      }
    }
    if(capacity >= w) {
      capacity = capacity - w;
      ans = ans + v;
    }
    else if (capacity < w) {
      ans = ans + (capacity*m);
      capacity = 0;
    }
    weights.erase(weights.begin()+pos);
    values.erase(values.begin()+pos);
    m = 0.0;
  }
  return ans;
}

int main() {
  freopen("1.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout << std::fixed;
  std::cout << std::setprecision(4);
  cout << optimal_value << std::endl;
  return 0;
}
