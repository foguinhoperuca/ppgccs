#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char *ISOMORFO = "ISOMORFO";
static const char *NAO_ISOMORFO = "NAO ISOMORFO";

#define MAX_VERTEX 200

struct edge
{
  unsigned int u;
  unsigned int v;
};
typedef struct edge Edge;

struct graph
{
  Edge edge[MAX_VERTEX];
};
typedef struct graph Graph;

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
  int i;
  /* Edge e1[MAX_VERTEX], e2[MAX_VERTEX]; */

  Graph G, H;

  while (N1 != 0 && M1 != 0);
  {
    /* 1st graph */
    scanf("%d %d", &N1, &M1);
    for (i = 1; i <= M1; i++)
      scanf("%d %d", &G.edge[i].u, &G.edge[i].v);

    print_graph(N1, M1, G);

    /* 2nd graph */
    scanf("%d %d", &N2, &M2);
    for (i = 1; i <= M2; i++)
      scanf("%d %d", &H.edge[i].u, &H.edge[i].v);

    printf("\n");
    print_graph(N2, M2, H);

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
