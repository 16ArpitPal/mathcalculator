#include<stdio.h>
#include<assert.h>
#include<limits.h>
#include"Cal.h"

void test_1(void)
{
assert(calc(4,4,1)==8);
printf("\nThe addition of two positive no ");

assert(calc(4,4,2)==0);
printf("\nThe sutraction of two positive no ");

assert(calc(4,4,3)==16);
printf("\nThe multiplication of two positive no ");

assert(calc(4,4,4)==1);
printf("\nThe division of two positive no ");
}
void test_2(void)
{
assert(calc(4,(-4),2)==8);
printf("\nThe subtraction of one positive no and one negative no ");

assert(calc(4,(-4),1)==0);
printf("\nThe addition of one positive no and one negative no ");

assert(calc(-4,4,2)==(-8));
printf("\nThe multiplication of one positive no and one negative no ");

assert(calc(4,(-4),4)==(-1));
printf("\nThe division of one positive no and one negative no ");

}
void test_3(void)
{

assert(calc(-4,-4,1)==(-8));
printf("\nThe addition of two negative no ");

assert(calc(-4,-4,2)==(0));
printf("\nThe sutraction of two negative no ");

assert(calc(-4,-4,3)==(16));
printf("\nThe multiplication of two negative no ");

assert(calc(-4,-4,4)==1);
printf("\nThe division of two negative no ");
}
void test_4(void)
{
assert(calc(4,0,3)==0);
printf("\nThe multiplication of any no by zero ");
}

void main()
{
    test_1();
    test_2();
    test_3();
    test_4();
}
