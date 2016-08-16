/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
#include <stdlib.h>
/*Sorting and Searching method in C for proj-Kettler*/
void qsort(void *base, size_t nel, size_t width,
			int (*compare) (const void *, const void *));

int intcompare(int *i, int *j)
{
	if (*i > *j) return(1);
	if (*i < *j) return(-1);
	return(0);
}

	qsort(a, n, sizeof(int), intcompare);
/*constructing heapsorting methods*/
typedef struct {
		item_tpe q[PQ_SIZE+1];		/*body of queue*/
		int n;						/*number of queue elements*/
} priority_queue;

pq_parent(int n)
{
		if (n == 1) return(-1);
		else return((int) n/2);		/*implicity take floor(n/2)*/
}

pq_young_child(int n)
{
		return(2 * n);
}

pq_insert(priority_queue *q, item_type x)
{
	if (q->n >= PQ_SIZE)
			printf("Warning: priority queue overflow insert x=%d\n",x);
	else {
			q->n = (q->n) + 1;
			q->q[ q->n ] = x;
			bubble_up(q, q->n);
	}
}

bubble_up(priority_queue *q, int p)
{
	if (pq_parent(p) == -1) return; /*at root of heap, no parent*/

	if (q->q[pq_parent(p)] > q->q[p]) {
			pq_swap(q,p,pq_parent(p));
			bubble_up(q, pq_parent(p));
	}
}

pq_init(priority_queue *q)
{
		q->n = 0;
}
/*heapsort*/
make_heap(priority_queue *q, item_type s[], int n)
{
		int 1;						/*counter*/

		pq_init(q);
		for (i=0; i<n; i++)
				pq_insert(q, s[i]);
}
/*for faster heap construction
make_heap(priority_queue *q, item_type s[], int n)
{
		int 1;						
		
		q->n = n;
		for (i=0; i<n; i++) q->q[i+1] = s[i];

		for (i=q->n; i>=1; i--) bubble_down(q,i);
		
}*/
item_type extract_min(priority_queue *q)
{
		int min = -1;				/*minimum value*/

		if (q->n <= 0) printf("Warning: empty priority queue.\n");
		else {
				min = q->q[1];

				q->q[1] = q->q[ q->n ];
				q->n = q->n - 1;
				bubble_down(q,1);
		}

		return(min);
}

bubble_down(priority_queue *q, int p)
{
		int c;						/*child index*/
		int i;						/*counter*/
		int min_index;				/*index of lightest child*/

		c = pq_young_child(p);
		min_index = p;

		for (i=0; i<=1; i++)
				if ((c+i) <= q->n) {
					if (q->q[min_index] > q->q[c+i]) min_index = c+i;
				}

		if (min_index != p) {
				pq_swap(q,p,min_index);
				bubble_down(q, min_index);
		}
}

heapsort(item_type s[], int n)
{
		int i;						/*counters*/
		priority_queue q;			/*heap for heapsort*/

		make_heap(&q,s,n);
		for (i=0; i<n; i++)
				s[i] = extract_min(&q);
}

int heap_compare(priority_que *q, int i in count, int x)
{
		if ((count <= 0) || (i > q->n) return(count);

		if (q->q[i] < x) {
			count = heap_compare(q, pq_young_child(i), count-1, x);
			count = heap_compare(q, pq_young_child(i)+1, count, x);
		}

		return(count);
}

/*mergesort*/
mergesort(item_type s[], int low, int high)
{
		int i;					/*counter*/
		int middle;				/*index middle element*/

		if (low < high) {
				middle = (low+high)/2;
				mergesort(s,low,middle);
				mergesort(s,middle+1,high);
				merge(s, low, middle, high);
		}
}

merge(item_type s[], int low, int middle, int high)
{
	int i;						/*counter*/
	queue buffer1, buffer2;		/* buffers to hold elements for merging*/

	init_queue(&buffer1);
	init_queue(&buffer2);

	for (i=low; i<=middle; i++) enqueue(&buffer1,s[i]);
	for (i=middle+1; i<=high; i++) enqueue(&buffer2,s[i]);

	i = low;
	while (!(empty_queue(&buffer1) || empty_queue(&buffer2))) {
			if (headq(&buffer1) <= headq(&buffer2))
					s[i++] = dequeue(&buffer1);
			else
					s[i++] = dequeue(&buffer2);
	}

	while (!empty_queue(&buffer1)) s[i++] = dequeue(&buffer1);
	while (!empty_queue(&buffer2)) s[i++] = dequeue(&buffer2);
}

/*quicksort*/
quicksort(item_type s[], int l, int h)
{
		int p;					/*index of partion*/

		if ((h-l)>0) {
				p = partition(s,l,h);
				quicksort(s,l,p-1);
				quicksort(s,p+1,h);
		}
}

int partition(item_type s[], int l, int h)
{
		int i;					/*counter*/
		int p;					/*pivot element index*/
		int firsthigh;			/*divider position for pivot element*/

		p = h;
		firsthigh = l;
		for (i=l; i<h; i++)
				if (s[i] < s[p]) {
						swap(&s[i],&s[firsthigh]);
						firsthigh ++;

				}
		swap(&s[p],&s[firsthigh]);

		return(firsthigh);
}

/*Binary search & sort algorithms*/

int binary_search(item_type s[], item_type key, int low, int high)
{
		int middle;						/*index of middle element*/

		if (low > high) return (-1);	/*key not found*/

		middle = (low+high)/2;

		if (s[middle] == key) return(middle);
		if (s[middle] > key)
				return( binary_search(s,key,low,middle-1) );
		else
				return(binary_search(s,key,middle+1,high) );
}