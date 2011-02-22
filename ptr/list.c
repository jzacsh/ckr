#include<stdio.h>

typedef struct li_t {
    int value;
    struct li_t *next;
} item;

int main(int argc, char *argv[], char *envp[])
{
    item * head, *current;
    int i, list_size = 10;

    head = NULL;

    printf("Will create a %d item list.\n", list_size);
    item contacts = * malloc(sizeof(item));

    for (i = 0; i < list_size; i++) {
        printf(".. creating number #%2.d in the list.\n", i+1);
        nums->next = head;
        nums->value = i;
    }

    return(0);
}
