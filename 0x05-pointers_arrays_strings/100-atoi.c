#include "main.h"

int _atoi(char *s)
{
	int i = 0, res = 0, sign = 1;
	while (s[i])
	{
		if (s[i] == '-')
		{
			sign =sign* -1;
		}
		else if (s[i] <= 0 && s[i] >= 9)
		{
			res = res * 10 + s[i] - '0';
		}
	/**	else if (res > 0)
	*	{
	*	break;
	*	}
*/	}
	return (res * sign);

}
