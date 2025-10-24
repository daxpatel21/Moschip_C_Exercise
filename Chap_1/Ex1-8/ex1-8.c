#include<stdio.h>

int main(){
	int c,t,b,nl;
    t=b=nl=0;

    while((c=getchar()) != EOF)
    {
        if(c=='\t')
            ++t;

        else if(c==' ')
            ++b;

        else if(c=='\n')
            ++nl;

    }
    printf("Tabs:%d\tBlanks:%d\tNewLine:%d\n",t,b,nl);
	return 0;
}


