#include <iostream>

/* $>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$> */

int	main(int ac, char **av)
{
	int	i, x;
	char c;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
  for (i = 1; av[i]; i++)
	{
		x = 0;
    while (av[i][x])
    {
      c=av[i][x];
      putchar(toupper(c));
      x++;
    }
    if (av[i+1])
      std::cout << " ";
    else
      std::cout << "\n";
  }
  return (0);
}