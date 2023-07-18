#include <stdio.h>

// Custom putchar function to print a character
int _putchar(char c) {
  return putchar(c);
}

int main() {
  // Call _putchar to print "_putchar"
  _putchar('_');
  _putchar('p');
  _putchar('u');
  _putchar('t');
  _putchar('c');
  _putchar('h');
  _putchar('a');
  _putchar('r');

  // Print a new line
  _putchar('\n');

  return (0);
}
