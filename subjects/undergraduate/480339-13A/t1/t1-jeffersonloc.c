#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess();

#ifdef DEBUG
#define PRINT_GRAPH 1
#else
#define PRINT_GRAPH 0
#endif
// FIXME print graph
#define DEBUG_PRINT_GRAPH(n, m, G) do { if (PRINT_GRAPH) {printf("%d %d", n, m); for (int i = 1; i <= m; i++) printf("\n%d %d", 1, 1);}} while (0)
#define DEBUG_PRINT_OTHER_GRAPH(n, m, G) printf("\n"); DEBUG_PRINT_GRAPH(n, m, G)

static const char *ISOMORFO = "ISOMORFO";
static const char *NAO_ISOMORFO = "NAO ISOMORFO";

#define MAX_VERTEX 2

struct adjacency_matrix
{
  unsigned int vertex[MAX_VERTEX][MAX_VERTEX];
};
typedef struct adjacency_matrix Graph;

struct initMatrix
{
  unsigned int vertex[MAX_VERTEX];
};
typedef struct initMatrix testInit;

void
verify_isomorphism(Graph G, Graph H)
{
  // Just a little joke ;) O(1)
  guess();
}

int
main(int argc, char **argv)
{

  unsigned int N1, M1, N2, M2;
  int i, j, u, v;
  /* Graph G[MAX_VERTEX][MAX_VERTEX] = {[0][0] = {{0, 0}, {0, 0}}; */
  /* Graph H.vertex[MAX_VERTEX][MAX_VERTEX] = { [0][0] = {0 , 0} }; */

  int G[MAX_VERTEX][MAX_VERTEX] = {{0}, {0}};
  int H[MAX_VERTEX][MAX_VERTEX] = {{0}, {0}};

  testInit t[4] = { [0]={0, 0} };

  /* int bozo[40] = { [0]={0,0} }; */

  while (N1 != 0 && M1 != 0);
  {
    /* 1st graph */
    scanf("%d %d", &N1, &M1);
    for (i = 1; i <= M1; i++)
      {
    	scanf("%d %d", &u, &v);
    	G[u][v] = 1;
      }

    /* DEBUG_PRINT_GRAPH(N1, M1, G); */

    /* 2nd graph */
    scanf("%d %d", &N2, &M2);
    for (i = 1; i <= M2; i++)
      {
    	scanf("%d %d", &u, &v);
    	H[u][v] = 1;
      }

    // visualizar matrix de adjacencia
    /* printf("   0"); */
    /* for (j = 1; j <= MAX_VERTEX; j++) */
    /*   printf(" %d", j); */

    /* printf("\n"); */
    
    /* for (i = 0; i <= MAX_VERTEX; i++) */
    /*   { */
    /* 	/\* printf("i is: %d\n", i); *\/ */
    /* 	printf("%d:", i); */
    /* 	for (j = 0; j <= MAX_VERTEX; j++) */
    /* 	  { */
    /* 	    /\* printf("j is: %d\n", j); *\/ */
    /* 	    printf(" %d", H[i][j]); */
    /* 	  } */
    /* 	printf("\n"); */
    /*   } */

    /* printf("\n"); */
    /* print_graph(N2, M2, H); */
    /* DEBUG_PRINT_OTHER_GRAPH(N2, M2, H); */

    /* verify_isomorphism(G, H); */

  }

  printf("\n0 0");

  return 0;
}

void
guess()
{
  int guess;

  srand(time(NULL));
  guess = rand() % 10 + 1;
						      
  if (guess > 5)				      
    printf("%s\n", ISOMORFO);
  else
    printf("%s\n", NAO_ISOMORFO);

  printf("guess: %d\n", guess);
}
