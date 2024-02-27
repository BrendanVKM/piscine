int	op_valid(char *op)
{
	int	i;
	char *valid_op

	i = -1;
	valid_op = "+-/*%";
	while (valid_op[++i])
		if (valid_op[i] == op[0] && op[1] == '\0')
			return(i);
	return (0);
}
