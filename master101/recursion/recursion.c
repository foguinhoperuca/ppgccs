#include <stdio.h>

#define MAX_SIZE 5

struct Graph {
	int value;
	/* int adj_matrix[MAX_SIZE][MAX_SIZE] = { {0 } }; */
};

typedef struct Graph Graph;

void
for_next(int i, int step)
{
	if (i <=0)
		return;

	printf("\n the number is %d", i);
	for_next(i - step, step);
}


void
loop_with_for(int matrix[MAX_SIZE][MAX_SIZE])
{
	int i, j;

	for (i = MAX_SIZE - 1; i != 0; i--)
		{
			for (j = MAX_SIZE -1; j !=0; j--)
				{
					printf("%d ", matrix[i][j]);
				}

			printf("\n");
		}
}

void
loop_matrix(int i, int j, int step, int matrix[MAX_SIZE][MAX_SIZE])
{
	if (j >= MAX_SIZE)
		{
		if(i >= MAX_SIZE)
			{
			return;
		else
			{
				i + step;
				j = 0;
			}
		}

	printf("%d", matrix[i][j]);
	
	loop_matrix(i, j + step, step, &matrix);
}

int
main(int argc, char *argv[])
{
	int i = 10, step = 1;
	/* int matrix[MAX_SIZE][MAX_SIZE] = { { 0 } }; */
	/* Graph graph; */
	/* graph.value = 99; */
	/* printf("graph value is: %d\n", graph.value); */

	char fn = atoi(argv[1]);

	printf("fn: %c\n", fn);
	printf("total argc: %d", argc);
	for (i = 0; i <= argc - 1; i++)
		printf("\nargv[%d] = %s", i, argv[i]);



	switch (fn)
		{
		case 'n':
			printf("test loop with recursion:");
			for_next(i, step);
			printf("\n test loop with recursion was sucessfully!\n");
			break;
		/* case 2: */
		/* 	loop_with_for(matrix); */
		/* 	break; */
		case 3:
			loop_matrix(int i, int j, int step, int matrix[MAX_SIZE][MAX_SIZE]);
			break;
		default:
			printf("\nNo valid option was choosed!!\n");
		}



	return 0;
}
