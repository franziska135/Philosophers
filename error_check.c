# define FALSE 0
# define TRUE 1

int	fill_struct(int argc, char *argv[])
{
	
}

int	argument_check(char *argv)
{
	int			i;
	long int	number;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == FALSE)
			return (FALSE);
		i++;
	}
	number = ft_atol(argv[i]);
	if (number >= INT_MAX || number <= INT_MIN)
		return (FALSE);
	return (TRUE);
}

int	error_check(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 5 && argc <= 6)
	{
		while (i < argc)
		{
			if (argument_check(argv[i]) == FALSE)
				return (FALSE);
		}
		write (2, "enough arg\n", 13);
	}
	else
		write (2, "not enoug args\n", 17);
	fill_struct(argc, **argv);
}

int	main(int argc, char *argv[])
{
	if (error_check(argc, argv) == FALSE)
		return (FALSE);
}