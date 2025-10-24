#include<stdio.h>

int main(){
	int c;

    while(c = getchar() != EOF){
        putchar(c);
      // printf("%c",c);
    }
    putchar(c);
	return 0;
}


