/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
/*Bipartite Mapping*/
typedef struct {
	int v;					/*neighboring vertex*/
	int capacity;			/*capacity of edge*/
	int flow;				/*flow through edge*/
	int residual;			/*residual capacity of edge*/
	struct edge *next;		/*next edge in list*/
} edgenode;

netflow(flow_graph *g, int source, int sink)
{
	int volume;				/*weight of the augmenting path*/
	
	add_residual_edges(g);

	initialize_search(g);
	bfs(g,source);

	volume = path_volume(g, source, sink, parent);

	while (volume > 0) {
			augment_path(g,source,sink,parent,volume);
			initialize_search(g);
			bfs(g,source);
			volume = path_volume(g, source, sink, parent);
	}
}

bool valid_edge(edgenode *e)
{
		if (e->residual > 0) return (TRUE);
		else return(FALSE);
}

int path_volume(flow_graph *g, int start, int end, int parents[])
{
	edgenode *e;			/*edge in question*/
	edgenode *find_edge();

	if (parents[end] == -1) return(0);

	e = find_edge(g,parents[end],end);

	if (start == parents[end])
			return(e->residual);
	else
			return( min(path_volume(g,start,parents[end],parents),
						e->residual) );
}

edgenode *find_edge(flow_graph *g, int x, int y)
{
		edgenode *p;		/*temporary pointer*/

		p= g->edges[x];

		while (p != NULL) {
				if (p->v == y) return (p);
				p = p->next;
		}

		return(NULL);
}

augment_path(flow_graph *g, int start, int end, in parents[], int volume)
{
		edgenode *e;		/*edge in question*/
		edgenode *find_edge();

		if (start == end) return;

		e = find_edge(g,parents[end],end);
		e->flow += volume;
		e->residual -= volume;

		e = find_edge(g,end,parents[end]);
		e->residual += volume;

		augment_path(g,start,parents[end],parents,volume);
}