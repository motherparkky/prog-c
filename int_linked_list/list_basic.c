#include "list.h"

#include <stdio.h>
#include <stdlib.h>

struct list *list_prepend(struct list *list, int value)
{
    struct list *new_node = malloc(sizeof(struct list));
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->data = value;
    new_node->next = list;

    return new_node;
}

size_t list_length(struct list *list)
{
    size_t length = 0;
    while (list != NULL)
    {
        length++;
        list = list->next;
    }
    return length;
}

void list_print(struct list *list)
{
    if (list == NULL)
    {
        return;
    }
    int first = 1;
    while (list != NULL)
    {
        if (!first)
        {
            printf(" ");
        }
        printf("%d", list->data);
        list = list->next;
        first = 0;
    }
    printf("\n");
}

void list_destroy(struct list *list)
{
    struct list *next_node;
    while (list != NULL)
    {
        next_node = list->next;
        free(list);
        list = next_node;
    }
}
