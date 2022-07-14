/**
* cap_string - capitalizes all words of a string
* @s: string to capitalize
* Return: s
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	if (i == 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	else if (s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == '\t'
		 || s[i - 1] == '\n' || s[i - 1] == ';'
		|| s[i - 1] == '!' || s[i - 1] == '\"'
		 || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		|| s[i - 1] == '}' || s[i - 1] == ',')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	}
	return (s);
}
