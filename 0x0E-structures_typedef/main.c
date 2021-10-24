#include <stdio.h>
void mul(int a, int b)
{
	printf("this is multiplication %d", (a * b));
}
void add(int a, int b)
{
	printf("this is addition %d", (a + b));
}
void sub(int a, int b)
{
	printf("this is subtraction %d", (a - b));
}
void div(int a, int b)
{
	printf("this is division %d", (a / b));
}
int  main(void)
{
void (*op[4]) (int,int) = {mul, add, sub, div};
unsigned int ch, a = 600, b = 300;
int result;

printf("0 for multiplicaton, 2 for addition, 2 for subtraction, 3 for division: ");
scanf("%u", &ch);

if (ch > 3 || ch < 0)
	return 1;
(*op[ch]) (a,b);
return 1;

}
