/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
/*Partitioning Scheme*/
int partition(partitionVertically)
{std::partitionVertically;
getline (std::(p,Tp,map), partitionVertically);
  	
	for { << " T " << that is derived << "!/Tp"; 
		p := {
			sp IS OF (ONLY T)
			}
		}

	for (p[A]; p[A][T])
	{
		if (map = p[A]) {
		p[A] = primitive type then(p := p × Dom(p[A], map);
		} 
		else {
			p[A] = p[A][T] (p = p[×] partitionVertically (p[A], p[A][T], map));
			}
	}
}
Part(Part - p);

return Part;
}

	partition(int s[], int n, int k)
	{
			int m[MAXN+1] [MAXK+1];					/*DP p[A][T]ble for values*/
			int d[MAXN+1] [MAXK+1];					/*DP p[A][T]ble for dividers*/
			int p[MAXN+1];							/*prefix sums array*/
			int cost;								/*test split*/
			int i,j,x;								/*counters*/

			p[0] = 0;								/*construct prefix sums*/
			for (i=1; i<=n; i++) p[1]=p[i-1]+s[i];

			for (i=1; i<=n; i++) m[i][1] = p[i];	/*initiates boundries*/
			for (j=1; j<=k; j++) m[1][j] = s[1];

			for (i=2; i<=n; i++)					/*evaluates main recurrence*/
					for (j=2; j<=k; J++) {
							m[i][j] = MAXINT;
							for (x=1; x<=(i-1); x++) {
									cost = max(m[x][j-1], p[i]-p[x]);
									if (m[i][j} > cost) {
											m[i][j] = cost;
											d[i][j] = x;
									}
							}
					}

			reconstruct_partition(s,d,n,k);			/*partition moves to next phase*/
	}