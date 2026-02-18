int ft_atoi_base(char *str, char *base)
{
    
	int	index;
	int	index_2;
	long nbr_long;
    int i=0
	index = 0;
	index_2 = 0;
	
	if (base[index] == '\0')
		return ;
	
	if(nbr_long == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (base[1] == '\0')
		return ;
	
	if(nbr_long<0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
    while (base[index])
	{
		if ((base[index] == '+') || (base[index] == '-') || (base[index] == ' ' && (base[index] <= 126)))
    		return;

		while (base[index_2])
		{
			if (base[index] == base[index_2] && index != index_2)
				return ;
			index_2++;
		}
		index_2 = 0;
		index++;
	}
    
    
}