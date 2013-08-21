#define ADJ_SIZE 2

int
is_in_Parent(int v, int[] parent)
{
	return 1;
}

void
dfs_visit(int[] V, int[] Adj)
{
	int i = 0; 
	for (i = 0; i < ADJ_SIZE; i++)
		{
			if (!is_in_parent(v, parent))
				{
					parent[v] = s;
					dfs_visit(V, Adj.s);
				}
		}
}

int
dfs(int[] V, int[] Adj)
{
	int i;
	int[] parent = {{0}};
	for (i = 0; i < parent.size; i++)
		{
			parent[s] = null;
			dfs_visit(V, Adj.s);
		}
}

int
main()
{
	return 0;	
}
