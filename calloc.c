#include "monty.h"

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - memory management calloc.
 * @nmemb: this is the number of memebr elements.
 * @size: this is the size odf the elements.
 *
 * Return: return nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *monty_p = NULL;
	unsigned int monti;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	monty_p = malloc(nmemb * size);
	if (monty_p == NULL)
	{
		return (NULL);
	}
	for (monti = 0; monti < (nmemb * size); monti++)
	{
		*((char *)(monty_p) + monti) = 0;
	}
	return (monty_p);
}
