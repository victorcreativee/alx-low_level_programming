/**
 * _isalpha - check for alphabetic.
 * @c: character to be checked
 * Return: 1 for character or 0 for other
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
	return (1);
}
return (0);
}
