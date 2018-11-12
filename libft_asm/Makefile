ft_puts : ft_puts.o
	ld -o ft_puts ft_puts.o

ft_puts.o : ft_puts.s
		as -o ft_puts.o ft_puts.s

clean : 
	rm -fv ft_puts.o

fclean: clean
	rm -fv ft_puts
