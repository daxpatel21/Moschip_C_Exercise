#include<stdio.h>

int main()
{
	int c;

    while(( c = (getchar() != EOF)))
    {
       printf("The vaue of c :%d\n",c);
    }
       printf("The value of expression :%d\n",c);
    return 0;
}

