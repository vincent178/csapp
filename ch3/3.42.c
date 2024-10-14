
struct ELE {
  long v;
  struct ELE *p;
};

long fun(struct ELE *ptr);

/*
  fun:
    movl $0, %eax
    jmp  .L2

  L3:
    addq (%rdi), %rax
    movq 8(%rdi), %rdi

  L2:
    testq %rdi, %rdi
    jne   .L3
    rep; ret
 */