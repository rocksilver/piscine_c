#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE	10

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_verif(int ac, char **av)
{
	if (ac > 4)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	return (1);
}

int		ft_c_param(char **av)
{
	if (av[2][0] == 'b')
		return (-512);
	else if (av[2][0] == 'k')
		return (-1000);
	else if (av[2][0] == 'm')
		return (-1000000);
}

int		ft_tail(int ac, char **av)
{
	int fd;
	int ret;
	char buf[BUFF_SIZE + 1];

	if (ft_verif(ac, av) == 0)
		return (1);
	fd = open(av[3], O_RDONLY);
	if (fd > 0)
	{
		lseek(fd, ft_c_param(av), SEEK_END);
		while ((ret = (read(fd, buf, BUFF_SIZE))))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}

int		main(int ac, char **av)
{
	ft_tail(ac, av);
	return (0);
}
