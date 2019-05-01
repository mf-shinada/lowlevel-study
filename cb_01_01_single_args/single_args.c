#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "invalid arguments\n");
    return 1;
  }

  const char *t =
    ".intel_syntax noprefix\n"
    ".global main\n"
    "\n"
    "main:\n"
    "  mov rax, %d\n"
    "  ret\n";

  printf(t, atoi(argv[1]));

  return 0;
}
