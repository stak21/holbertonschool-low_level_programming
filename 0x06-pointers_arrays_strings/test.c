#include <stdio.h>
/**
 * hash - inserts an alphabetic character into the hash and returns the array;
 * @ins: holds the string of alphabet to insert
 * Return: returns the pointer to the array
 */

char * hash(char *ins)
{
	static char alpha[52];
	char c;
	int neutral;
	while (*ins)
	{
		c = *ins;
		neutral = (c - 97) >= 0 ? 97 : 65;
		alpha[c - neutral] = c;
		*ins++;
	}
	return alpha;

}
/**
 * find - finds the number of occurances of alpha in s
 * @alpha: holds the subset to find
 * @s: holds the string to look into
 * Return: the number of occurances the function finds
 */
int find(char *alpha, char *s)
{
	char c;
	int occ;
	int neutral;

	occ = 0;
	while (*s)
	{
		c = *s;
		neutral = (c - 97) >= 0 ? 97 : 65;
		if (alpha[*s - neutral])
			occ += 1;
			printf("%c\n", alpha[*s - neutral]);
		*s++;
	}
	return (occ);
}
/**
 * example main
 *	char *str = "abc";
 *	char *string = hash(str);
 *	printf("%i", find(string, "abc"));
 */
