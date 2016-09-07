#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE	30000

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

int		ft_cat(int ac, char **av)
{
	int fd;
	int ret;
	char buf[BUFF_SIZE + 1];

	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd > 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		close(fd);
	}
	return (0);
}

int		main(int ac, char **av)
{
	ft_cat(ac, av);
	return (0);
}
