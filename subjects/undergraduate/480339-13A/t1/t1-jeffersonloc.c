#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef DEBUG
#define PRINT_GRAPH 1
#else
#define PRINT_GRAPH 0
#endif
#define DEBUG_PRINT_GRAPH(n, m, G) do { if (PRINT_GRAPH) {printf("%d %d", n, m); for (int i = 1; i <= m; i++) printf("\n%d %d", G.edge[i].u, G.edge[i].v);}} while (0)
#define DEBUG_PRINT_OTHER_GRAPH(n, m, G) printf("\n"); DEBUG_PRINT_GRAPH(n, m, G)

static const char *ISOMORFO = "ISOMORFO";
static const char *NAO_ISOMORFO = "NAO ISOMORFO";

#define MAX_VERTEX 16

struct edge
{
  unsigned int u;
  unsigned int v;
};
typedef struct edge Edge;

struct adjacency_matrix
{
  unsigned int vertex[MAX_VERTEX][MAX_VERTEX];
};
typedef struct adjacency_matrix graph;

struct graph_strange
{
  Edge edge[MAX_VERTEX];
};
typedef struct graph_strange Graph;

void guess();

void
print_graph(unsigned int n, unsigned int m, Graph G)
{
  int i;

  printf("%d %d", n, m);
  for (i = 1; i <= m; i++)
    printf("\n%d %d", G.edge[i].u, G.edge[i].v);
}

void
verify_isomorphism(Edge e1[], Edge e2[])
{
  // Just a little joke ;)
  guess();
}

int
main(int argc, char **argv)
{

  unsigned int N1, M1, N2, M2;
  int i, j, u, v;
  /* Graph G, H; */

  int G[MAX_VERTEX][MAX_VERTEX] = {0, 0};
  int H[MAX_VERTEX][MAX_VERTEX] = {0, 0};

  while (N1 != 0 && M1 != 0);
  {
    /* 1st graph */
    scanf("%d %d", &N1, &M1);
    for (i = 1; i <= M1; i++)
      {
	/* scanf("%d %d", &G.edge[i].u, &G.edge[i].v); */
	scanf("%d %d", &u, &v);
	G[u][v] = 1;
      }

    /* print_graph(N1, M1, G); */
    /* DEBUG_PRINT_GRAPH(N1, M1, G); */

    /* 2nd graph */
    scanf("%d %d", &N2, &M2);
    for (i = 1; i <= M2; i++)
      {
	/* scanf("%d %d", &H.edge[i].u, &H.edge[i].v); */
	scanf("%d %d", &u, &v);
	H[u][v] = 1;
      }

    printf("test\n");
    /* int test[5] = { 0 }; */
    /* printf("0: %d\n", test[0]); */
    /* printf("1: %d\n", test[1]); */
    /* printf("2: %d\n", test[2]); */
    /* printf("3: %d\n", test[3]); */
    /* printf("4: %d\n", test[4]); */
    /* printf("5: %d\n", test[5]); */

    /* int bozo[3][3] = {0, 0}; */
    /* printf("0 1: %d\n", bozo[0][0]); */
    /* printf("0 2: %d\n", bozo[0][1]); */
    /* printf("0 3: %d\n", bozo[0][2]); */
    /* printf("0 4: %d\n", bozo[0][3]); */
    /* printf("1 2: %d\n", bozo[1][0]); */
    /* printf("1 3: %d\n", bozo[1][1]); */
    /* printf("1 4: %d\n", bozo[1][2]); */
    /* printf("1 1: %d\n", bozo[1][3]); */
    /* printf("2 2: %d\n", bozo[2][0]); */
    /* printf("2 3: %d\n", bozo[2][1]); */
    /* printf("2 4: %d\n", bozo[2][2]); */
    /* printf("2 1: %d\n", bozo[2][3]); */
    /* printf("3 2: %d\n", bozo[3][0]); */
    /* printf("3 3: %d\n", bozo[3][1]); */
    /* printf("3 4: %d\n", bozo[3][2]); */
    /* printf("3: %d\n", bozo[3][3]); */


    // visualizar matrix de adjacencia
    /* printf("   0", j); */
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

    printf("\n");
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

  /* printf("\n"); */
  /* printf("\n"); */
  /* printf("============================================\n"); */
  /* printf("============================================\n"); */
  /* printf("|                                          |\n"); */
  /* printf("| problem solved...                        |\n"); */
  /* printf("|                                          |\n"); */
  /* printf("============================================\n"); */
  /* printf("============================================\n"); */
  /* printf("\n"); */
						      
  if (guess > 5)				      
    printf("%s\n", ISOMORFO);
  else
    printf("%s\n", NAO_ISOMORFO);

  printf("guess: %d\n", guess);
}
