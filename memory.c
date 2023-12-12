#include "monty.h"

/**
 * *_calloc - allocates memory for an array using calloc
 *
 * @nmemb: number of elements
 * @size: size of each elements
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}

/**
 * _realloc - reallocates a memory block with a new size
 *
 * @ptr: pointer to reallocate
 * @old_size: old number of bytes
 * @new_size: new number of bytes
 *
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (!p)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = *((char *)ptr + i);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			p[i] = *((char *)ptr + i);
	}

	free(ptr);

	return (p);
}
