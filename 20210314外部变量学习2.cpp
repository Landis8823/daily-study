extern int A;
int power(int n)
{
	int i, y = 1;
	for (i = 0; i <= n; i++)
	{
		y = y * A;
	};
	return(y);
}