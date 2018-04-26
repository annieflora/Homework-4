#include <stdio.h>
#include <string.h>



char* print_prefix(char* s, int size) {
  char* output = "";
  for (int i = 0; i < size; i++) {
    output += putchar(s[i]);
  }

  return output;
}

char* print_prefixes(char* s) {
  char* output = "";
  for (int i = 0; i <= strlen(s); i++) {
    output = print_prefix(s, i);
  }
  return output;
}

char* print_suffix(char* s, int size) {
  char* output = "";
  for (int i = 0; i < size; i++) {
    output += putchar(s[i]);
  }
  return output;
}

char* print_suffixes(char* s) {
  char* output = "";
  for (int i = 0; i <= strlen(s); i++) {
    output = print_suffix(s, strlen(s) - i);
  }
  return output;
}

char* print_silly(char* s, char* t) {
  char* output = "";
  output = print_prefixes(s);
  output = print_suffixes(t);
  return output;
}



int main() {

  char* test = "abc";
  char* test1 = "";

  printf("%s\n", print_silly(test1, test));

}
