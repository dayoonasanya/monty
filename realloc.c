#include "monty.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * _realloc - function: reallocate memory size.
 * @ptr: pointer to the memory size.
 * @old_size: old memory size.
 * @new_size: new memory size.
 *
 * Return: return nithing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *monty_p = NULL;
	unsigned int monti;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		monty_p = malloc(new_size);
		if (!monty_p)
			return (NULL);
		return (monty_p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		monty_p = malloc(new_size);
		if (!monty_p)
			return (NULL);
		for (monti = 0; monti < old_size; monti++)
			monty_p[monti] = *((char *)ptr + monti);
		free(ptr);
	}
	else
	{
		monty_p = malloc(new_size);
		if (!monty_p)
			return (NULL);
		for (monti = 0; monti < new_size; monti++)
			monty_p[monti] = *((char *)ptr + monti);
		free(ptr);
	}
	return (monty_p);
}
