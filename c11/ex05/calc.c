int	calc(int x, int op, int y)
{

	if (op == 0)
		return (x + y);
	if (op == 1)
		return (x - y);
	if (op == 2)
		return (x / y);
	if (op == 3)
		return (x * y);
	if (op == 4)
		return (x % y);
	return (0);
}
