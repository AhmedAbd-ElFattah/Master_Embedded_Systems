#include <stdio.h>


union job
{
	char name [32] ;
	float salary;
	int worker_no;

} u;

struct job1
{
	char name [32];
	float salary;
	int worker_no;

} s;


int main ()
{
	printf ("size of union is= %d", sizeof (u));
	printf ("\nsize of structure is= %d\n", sizeof (s));

	return 0;
}