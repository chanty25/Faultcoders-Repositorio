#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
  if (n <= 1) return n;
  vector<int> fib(n + 1);
  fib[0] = 0, fib[1] = 1;
  for (int i = 2; i <= n; i++)
      fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
  return fib[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}