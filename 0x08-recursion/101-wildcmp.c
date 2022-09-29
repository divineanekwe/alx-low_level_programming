#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Description: @s2 can contain '*',
 * '*' can replace any string
 * (including an empty string)
 *
 * Return: 1 if @s1 and @s2 are identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	/**
	 * Sum of return values
	 */
	int sum = 0;

	/**
	 * Return 1 if we reach end of @s1 and the character
	 * or consecutive characters in @s2 is/are '*'
	 */
	if ((*s1 == '\0') && (*s2 == '*') && !(*rm_consec_wild(s2)))
		return (1);

	/**
	 * Return 1 if characters in @s1 and @s2 are equal
	 * and we reach end of @s1
	 * Otherwise increment address of @s1 and @s2
	 */
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/**
	 * Return 0 if we reach end of @s1 or @s2
	 */
	if ((*s1 == '\0') || (*s2 == '\0'))
		return (0);

	/**
	 * If character in @s2 is '*', get the address
	 * after '*' or after consecutive '*'s
	 * Return 1 if we reach end of @s2
	 * Return value of wildcmp to sum if character
	 * in @s1 and @s2 are equal
	 * Increment sum with the return value of *rm_consec_wild
	 * Return sum, convert non-zero to 1, and keep 0 at 0
	 */
	if (*s2 == '*')
	{
		s2 = rm_consec_wild(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += equalchar(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * equalchar - checks for equal characters in two strings
 * @s1: First string to check
 * @s2: Second string to check
 *
 * Return: Recursion or wildcmp
 */
int equalchar(char *s1, char *s2)
{
	/**
	 * if we reached the end of s1, return 0
	 * if chars are equal, return the return value of wildcmp()
	 * increment s1 by 1, not s2
	 */
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (equalchar(s1 + 1, s2));
}

/**
 * rm_consec_wild - returns address of character in string,
 * after skipping consecutive '*' wild character(s)
 * @s2: String to check
 *
 * Return: A pointer to @s
 */
char *rm_consec_wild(char *s2)
{
	if (*s2 == '*')
		return (rm_consec_wild(s2 + 1));
	else
		return (s2);
}
