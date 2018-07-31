# include <stdio.h>

void function1(){
	int a=10;
	static int b=10;
	a=a+1;
	b=b+1;
	printf("%d\n",a );
	printf("%d\n", b);
}

void printPoint(){
	int a=90;
	printf("%d\n   %u\n",a,&a );
}

void main()
{

	printPoint();
    printf("%s\n","hello world");
    function1();
    function1();
    function1();
    function1();
}

