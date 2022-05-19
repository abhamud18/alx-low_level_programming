#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_sin - singly linked list
 * @strn: string - (malloc'ed string)
 * @leng: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_sin
{
	char *str;
	unsigned int leng;
	struct list_s *next;
} list_ab;
int _putchar(char c);
size_ab print_list(const list_ab *h);
size_ab list_len(const list_ab *h);
list_ab *add_node(list_ab **head, const char *str);
list_ab *add_node_end(list_ab **head, const char *str);
void free_list(list_ab *head);
void __attribute__((constructor)) calledFirst();

#endif
