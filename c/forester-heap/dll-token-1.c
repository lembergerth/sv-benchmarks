#define __VERIFIER_assert(cond) do { if (!(cond)) __VERIFIER_error();} while (0)
/*
 * A list ended with node marked by a special integer value.
 *
 * Part of Forester benchmark.
 */

#include <stdlib.h>
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_error() __attribute__ ((__noreturn__));

typedef struct TSLL
{
	struct TSLL* next;
	struct TSLL* prev;
	int data;
} SLL;

int main()
{
	// create the head
	SLL* head = malloc(sizeof(SLL));
	head->next = NULL;
	head->prev = NULL;
	head->data = 0;

	SLL* x = head;

	// create an arbitrarily long tail
	while (__VERIFIER_nondet_int())
	{
		// create a node
		x->next = malloc(sizeof(SLL));
		x->next->prev = x;
		x = x->next;
		x->data = 0;
		if (!(NULL != x)) __VERIFIER_error();
	}
	x->data = 1;
	x->next = malloc(sizeof(SLL));
	x->next->prev = x;
	x->next->data = 2;

	x = head;
	// check the invariant
	if (!(NULL != x)) __VERIFIER_error();

	while (1 != x->data)
	{
		if (!(0 == x->data)) __VERIFIER_error();
		x = x->next;
	}
	if (!(1 == x->data)) __VERIFIER_error();
	x = x->next;
	if (!(2 == x->data)) __VERIFIER_error();

	x = head;
	// destroy the list
	while (1 != x->data)
	{
		head = x;
		x = x->next;
		free(head);
	}
	if (!(1 == x->data)) __VERIFIER_error();
	free(x->next);
	free(x);

	return 0;
}
