extern "C" {
  int add(int a, int b) {
    return a + b;
  }
  
  long long fibonacci(int n) {
    if (n < 2)
      return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}