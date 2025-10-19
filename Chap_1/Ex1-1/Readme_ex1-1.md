The First Experiment Results into Error Like:

ex1-1_Experiment.c: In function ‘main’:
ex1-1_Experiment.c:8:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    8 |     printf("hello, world\n");
      |     ^~~~~~
ex1-1_Experiment.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | //In this exercise, we need to check which types of errors we encounter if we don't include some parts of the code.
ex1-1_Experiment.c:8:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    8 |     printf("hello, world\n");

## Explanation:

- printf() is declared in stdio.h
- Without the include, compiler doesn't know what printf is.
- stdio is Standard Input Output Library.


The Second Experiment Results Into Error Like:

/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x1b): undefined reference to `main'
collect2: error: ld returned 1 exit status

## Explanation:

- Every C program MUST have a main() function
- Linker looks for main as the entry point
- Without main, program cannot start execution


The Third Experiment Results Into Error Like:

warning:control reaches end of non-void function

## Explanation:

- main() is declared to return int
- Without explicit return, behavior is undefined (though C99+ assumes return 0)
- Should always explicitly return 0 for success

