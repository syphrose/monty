# include "monty.h"
/*
 * f_push - pushes an element to the stack
 * @head: stack's head pointer
 * @counter: number line
 * Return: void
 *
 */
void f_push(stack_t **head, unsigned int counter)
{
	int c, d = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			d++;
		for (; bus.arg[d] != '\0'; d++)
		{
			if (bus.arg[d] > 57 || bus.arg[d] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	c = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, c);
	else
		addqueue(head, c);
}
