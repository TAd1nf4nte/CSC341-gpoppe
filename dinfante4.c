//Dominic Infante
//Lab #4
//CSC-341
//Pointer for lab

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int i;
	int z = 0;
	int array1[5] = {0};

	int *pointer1;
	pointer1 = &z;

	printf("The value of variable z is %d \n", z);
	printf("The address of variable z is %p \n", &z);

	printf("The value of pointer1 is %p, which is the same as the z's addresss %p \n", pointer1, &z);

	for (i = 0; i < 5; i++)
	{
		printf("array1[%d] = %d with an address of %p \n", i, array1[i], &array1[i]);
	}

	return EXIT_SUCCESS;
}
