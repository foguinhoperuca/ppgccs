#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

int
main()
{
	/*-- Programa principal --*/
	/* -- NumVertices: definido antes da leitura das arestas --*/
	/* -- NumArestas: inicializado com zero e incrementado a --*/
	/* -- cada chamada de InsereAresta											 --*/

	printf("Leitura do grafo\n");

	printf("No. vertices:"); scanf("%d%*[^\n]", &NVertices); getchar();

	printf("No. arestas:"); scanf("%hd%*[^\n]", &NArestas); getchar();

	Grafo.NumVertices = NVertices; Grafo.NumArestas=0; FGVazio(&Grafo);
	for (i = 0; i <= NArestas - 1; i++) 
		{
			printf("Insere V1 -- V2 -- Peso:");
			scanf("%d%d%d%*[^\n]", &V1, &V2, &Peso);
			getchar();
			Grafo.NumArestas++;
			InsereAresta(&V1, &V2, &Peso, &Grafo);	 /* 1 chamada g-direcionado		 */
			/*InsereAresta(V2, V1, Peso, Grafo);*/	 /* 2 chamadas g-naodirecionado*/
		}

	printf ("Imprimindo o grafo\n");
	ImprimeGrafo(&Grafo);

	scanf("%*[^\n]");
	getchar();
	GrafoTransposto(&Grafo, &Grafot);

	printf("Imprimindo o grafo transposto\n");
	ImprimeGrafo(&Grafot);

	scanf("%*[^\n]");
	getchar();
	printf("Incluindo uma nova aresta no grafo\n");

	printf("Insere V1 -- V2 -- Peso:");
	scanf("%d%d%d%*[^\n]", &V1, &V2, &Peso);
	getchar();
	if (ExisteAresta(V1, V2, &Grafo))
		printf("Aresta ja existe\n");
	else
		{
			Grafo.NumArestas++;
			InsereAresta(&V1, &V2, &Peso, &Grafo);
			/*InsereAresta(V2, V1, Peso, Grafo);*/	/* grafo nao direcionado */
		}
	printf("Imprimindoo grafo novamente\n");
	ImprimeGrafo(&Grafo);

	scanf("%*[^\n]");
	getchar();
	printf("Lista adjacentes de: ");
	scanf("%d", &V1);
	if (!ListaAdjVazia(&V1, &Grafo)) 
		{
			Aux = PrimeiroListaAdj(&V1, &Grafo);
			FimListaAdj = FALSE;
			while (!FimListaAdj) 
				{
					ProxAdj(&V1, &Grafo, &Adj, &Peso, &Aux, &FimListaAdj);
					printf("%2d (%d)", Adj, Peso);
				}
			putchar('\n');
			scanf("%*[^\n]");
			getchar();
		}

	printf("Retira aresta V1 -- V2:");
	scanf("%d%d%*[^\n]", &V1, &V2);
	getchar();
	if (ExisteAresta(V1, V2, &Grafo)) 
		{
			Grafo.NumArestas--;
			RetiraAresta(&V1, &V2, &Peso, &Grafo);
			/*RetiraAresta(V2, V1, Peso, Grafo);*/
		}
	else
		printf("Aresta nao existe\n");

	ImprimeGrafo(&Grafo);

	scanf("%*[^\n]");
	getchar();
	printf("Existe aresta V1 -- V2:");
	scanf("%d%d%*[^\n]", &V1, &V2);
	getchar();
	if (ExisteAresta(V1, V2, &Grafo))
		printf(" Sim\n");
	else
		printf(" Nao\n");

	LiberaGrafo(&Grafo);

	ImprimeGrafo(&Grafo);

	return 0;
}
