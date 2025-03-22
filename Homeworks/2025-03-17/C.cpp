#include <cstdio> // Why not?

int strlen(char a[]) {
  int size = 0;
  while (a[size] != '\0') {
    size++;
  }
  return size;
}

void reverse(char a[]) {
  int n = strlen(a);
  for (int i = 0; i < n / 2; ++i) {
    char c = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = c;
  }
}

void delete_char(char a[], char c) {
  int n = strlen(a);
  int i = 0, j = 0;
  while (i < n) {
    if (a[i] != c) {
      a[j++] = a[i];
    }
    i++;
  }
  a[j] = '\0';
}

// This is VERY unsafe in some circumstances...
void pad_right(char a[], int n) {
  int sz = strlen(a);
  if (sz >= n) {
    return;
  }
  for (int i = sz; i < n; ++i) {
    a[i] = ' ';
  }
  a[n] = '\0';
}

// ...this as well
void pad_left(char a[], int n) {
  int sz = strlen(a);
  if (sz > n) {
    return;
  }
  for (int i = n - 1; i > n - sz - 1; --i) {
    a[i] = a[i - n + sz];
  }
  for (int i = 0; i < n - sz; ++i) {
    a[i] = ' ';
  }
  a[n] = '\0';
}

void truncate(char a[], int n) {
  int sz = strlen(a);
  if (sz <= n) {
    return;
  }
  a[n] = '\0';
}

bool is_palindrome(char a[]) {
  int n = strlen(a);
  for (int i = 0; i < n / 2; ++i) {
    if (a[i] != a[n - i - 1]) {
      return false;
    }
  }
  return true;
}

void trim_left(char a[]) {
  int n = strlen(a);
  int count = 0;
  while (count < n && a[count] == ' ') {
    count++;
  }
  for (int i = 0; i < n - count; ++i) {
    a[i] = a[i + count];
  }
  a[n - count] = '\0';
}

void trim_right(char a[]) {
  int n = strlen(a);
  int endpoint = n - 1;
  while (endpoint >= 0 && a[endpoint] == ' ') {
    endpoint--;
  }
  a[endpoint + 1] = '\0';
}

int main() {
  // Do whatever you want here. I'm not gonna bother to code all of the cases I tested.
  return 0;
}