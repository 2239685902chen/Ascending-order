#include <stdio.h>
void Ascending_order(int* q, int w)
{
	int e = 1;
	int r = 0;
	int t = 0;
	int y = 0;
	for (t = 0; t < w - 1; t++)
	{
		for (r = 0; r < w - 1 - t; r++)
		{
			if (q[r] > q[r+1])
			{
				y = q[r];
				q[r] = q[r + 1];
				q[r + 1] = y;
				e = 0;
			}
		}
		if (e == 1)
		{
			break;
		}
	}
}
int main()
{
	int q[] = { 8,7,6,1,5,2,4,9,3 };
	int w = sizeof(q)/sizeof (0);
	int u = 0;
	Ascending_order(q, w);
	for (u = 0; u < w; u++)
	{
		printf("%d ", q[u]);
	}
	printf("\n");
	return 0;
}