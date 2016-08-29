#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *am;
	char *pm;

	am = "A.M.";
	pm = "P.M.";
	printf("THE FOLLOWING TAKES PLACES BETWEEN ");
	if (hour != 23)
	{
		if (hour++ >= 12)
		{
			hour -= 12;
			printf("%d:00 %s", hour, pm);
		}
		else
			printf("%d:00 %s", hour, am);
		if (hour++ >= 12)
		{
			hour -= 12;
			printf(" AND %d:00 %s\n", hour, pm);
		}
		else
			printf(" AND %d:00 %s\n", hour, am);
	}
	else
	{
		printf("12:00 P.M");
		printf(" AND 1:00 A.M\n");
	}
}

int		main(void)
{
	ft_takes_place(23);
	return (0);
}
