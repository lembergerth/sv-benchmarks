#define __VERIFIER_assert(cond) do { if (!(cond)) __VERIFIER_error();} while (0)
/*
 * A list with inner list of length 0 or 1.
 *
 * Part of Forester benchmark
 */

#include <stdlib.h>
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_error() __attribute__ ((__noreturn__));

#define CREATE_INNER(N)                                         \
    if (!(N != NULL)) __VERIFIER_error();                               \
	if (__VERIFIER_nondet_int()) {                              \
		N->inner = NULL;                                        \
	}                                                           \
    else {                                                      \
        N->inner = malloc(sizeof(SLL));                         \
        N->inner->next = NULL;                                  \
        N->inner->inner = NULL;                                 \
    }                                                           \
    if (!(N->inner != NULL || N->inner == NULL)) __VERIFIER_error();

typedef struct TSLL
{
	struct TSLL* next;
	struct TSLL* inner;
} SLL;

int main()
{
	// create the head
	SLL* list = malloc(sizeof(SLL));
	list->next = NULL;
	CREATE_INNER(list);

	SLL* end = list;

	// create an arbitrarily long tail
	while (__VERIFIER_nondet_int())
	{
		// create a node
		end->next = malloc(sizeof(SLL));
		end = end->next;
		end->next = NULL;
		if (!(NULL != end)) __VERIFIER_error();
		CREATE_INNER(end);
	}

	end = NULL;
	end = list;

	// check the invariant
	if (!(NULL != end)) __VERIFIER_error();

	while (NULL != end)
	{
		int len = 0;
		SLL* inner = end->inner;
		while (NULL != inner)
		{
			if (len == 0)
				len = 1;
			else
				len = 2;
			if (!(NULL != inner)) __VERIFIER_error();
			if (!(NULL == inner->inner)) __VERIFIER_error();
			if (!(NULL == inner->next)) __VERIFIER_error();
			inner = inner->inner;
			if (len == 1)
				inner = inner->inner; // Should be a real error.
		}
		if (!(len <= 1)) __VERIFIER_error();

		end = end->next;
	}

	// destroy the list
	while (NULL != list)
	{
		end = list->inner;
		// while (NULL != end)
		if (NULL != end)
		{
			if (!(NULL != end)) __VERIFIER_error();
			if (!(NULL == end->inner)) __VERIFIER_error();
			if (!(NULL == end->next)) __VERIFIER_error();
			free(end);
			end = NULL;
		}
		end = list->next;
		free(list);
		list = end;
	}

	return 0;
}
