#include <stdlib.h>
#include <stdio.h>


/**
* strtow - splits a string into words
* @str: a pointer to the string
* Return: a pointer to an array
*/

char **strtow(char *str);
void cpy_str(int end, char *s, char **word_box);
char  **strtow(char *str)
{
	char **words;
	int i, start, found;
	int count;

	count = 0;
	start = i = 0;
	found = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (found)
			{
				count += 1;
				found = 0;
			}
			i += 1;
			continue;
		}
		else
			found = 1;
		i += 1;
	}
	i = 0;
	words = malloc(sizeof(char *) * count + 1);
	count = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (found)
			{
				cpy_str(i - start + 1, str + start, words + count);
				count += 1;
				start = i + 1;
				found = 0;
			}
			i += 1;
			continue;
		}
		else
		{
			if (!found)
			{

				start = i;
			}
			found = 1;
		}
		i += 1;
	}
	words[count] = NULL;
	return (words);
}

/**
* cpy_str - clips a word from the string
* @end: the end of the word
* @s: the string to clip the word from
* @word_box: the array to store the word in
*/
void cpy_str(int end, char *s, char **word_box)
{
	int i;

	(*word_box) = malloc(sizeof(char) * end);
	for (i = 0; i < end - 1; i += 1)
	{
		(*word_box)[i] = s[i];
	}
	(*word_box)[i] = '\0';
}

