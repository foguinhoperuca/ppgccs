/*
 *
 * My personal graph header - Jefferson Campos
 * Baseado no material do Ziviani
 *
 */

#define MAXNUMVERTICES  100
#define MAXNUMARESTAS   4500
#define TRUE  1
#define FALSE 0

typedef int TipoValorVertice;
typedef int  TipoPeso;
typedef struct TipoGrafo {
  TipoPeso Mat[MAXNUMVERTICES + 1][MAXNUMVERTICES + 1];
  int NumVertices;
  int NumArestas;
} TipoGrafo;
typedef int  TipoApontador;

TipoApontador Aux;
int i;
TipoValorVertice V1, V2, Adj;
TipoPeso Peso;
TipoGrafo Grafo, Grafot;
TipoValorVertice NVertices;
short NArestas;
short FimListaAdj;

void FGVazio(TipoGrafo *Grafo);
void InsereAresta(TipoValorVertice *V1, TipoValorVertice *V2, TipoPeso *Peso, TipoGrafo *Grafo);
short ExisteAresta(TipoValorVertice Vertice1, TipoValorVertice Vertice2, TipoGrafo *Grafo);
short ListaAdjVazia(TipoValorVertice *Vertice, TipoGrafo *Grafo);
TipoApontador PrimeiroListaAdj(TipoValorVertice *Vertice, TipoGrafo *Grafo);
void ProxAdj(TipoValorVertice *Vertice, TipoGrafo *Grafo, TipoValorVertice *Adj, TipoPeso *Peso, TipoApontador *Prox, short *FimListaAdj);
void RetiraAresta(TipoValorVertice *V1, TipoValorVertice *V2, TipoPeso *Peso, TipoGrafo *Grafo);
void LiberaGrafo(TipoGrafo *Grafo);
void ImprimeGrafo(TipoGrafo *Grafo);
void GrafoTransposto(TipoGrafo *Grafo, TipoGrafo *GrafoT);
