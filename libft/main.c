#include "libft.h"

int main(int argc, char *argv[])
{
//	const char *mot = argv[1];
	if (argc < 2)
		return(0);
	argc = 0;
	argv[0] = "main";
//	ft_putstr(mot);
//	ft_putchar('\n');
/*	
	if (ft_isalpha(mot[0]))
		ft_putstr("isalpha : ok\n");
	else
		ft_putstr("isalpha : not ok\n");
	if (ft_isdigit(mot[0]))
		ft_putstr("isdigit : ok\n");
	else
		ft_putstr("isdigit : not ok\n");
	if (ft_isalnum(mot[0]))
		ft_putstr("isalnum : ok\n");
	else
		ft_putstr("isalnum : not ok\n");
	if (ft_isascii(mot[0]))
		ft_putstr("isascii : ok\n");
	else
		ft_putstr("isascii : not ok\n");
	if (ft_isprint(mot[0]))
		ft_putstr("isprint : ok\n");
	else
		ft_putstr("isprint : not ok\n");
*/
//	ft_putstr(ft_strstr(argv[1], argv[2]));
//	ft_putnbr(ft_atoi(argv[3]));
//	ft_putchar('\n');
/*	if(ft_strcmp(argv[1], argv[2]) == 0)
		ft_putstr("strcmp : ok\n");
	else
		ft_putstr("strcmp : not ok\n");
	if(ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])) == 0)
		ft_putstr("strncmp : ok\n");
	else
		ft_putstr("strncmp : not ok\n");
*/		

//	ft_putstr(ft_strncpy(argv[1], argv[2], ft_atoi(argv[3])));
//	ft_putchar('\n');

/*	if(ft_strnequ(argv[1], argv[2], ft_atoi(argv[3])) == 1)
		ft_putstr("strnequ : ok\n");
	else
		ft_putstr("strnequ : not ok\n");
	if(ft_strequ(argv[1], argv[2]) == 1)
		ft_putstr("strequ : ok\n");
	else
		ft_putstr("strequ : not ok\n");
*/

	ft_putstr(argv[0]);
	ft_putchar('\n');	


	return (0);
}
