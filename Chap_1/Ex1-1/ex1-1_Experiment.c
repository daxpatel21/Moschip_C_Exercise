//In this exercise, we need to check which types of errors we encounter if we don't include some parts of the code.

//1st Experiment
//Not Including the Header File
//#include <stdio.h>
/* 
int main()
{
    printf("hello, world\n");
    return 0;
}
*/

//2nd Experiment
//Not Including main()
/*
#include <stdio.h>

void myfunction(void)
{
    printf("hello, world\n");
}
*/

//3rd Experiment
//Not Including return 0

#include <stdio.h>
int main()
{
  printf("hello, world\n");
  //return 0;
}


