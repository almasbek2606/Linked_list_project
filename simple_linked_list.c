#include <stdio.h>
#include <stdlib.h>

 struct Node{
    char* name;
    int data;
    struct Node * next;
} ;

void printname(struct Node* n){
    while(n != NULL){
        printf("%s\n", n->name);
        n = n->next;
    }
}

void printdata(struct Node* h){
    while(h != NULL){
        printf("%d\n", h->data);
        h = h->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));


    head->name = "al";
    head->data = 2;
    head->next = NULL;

    printname(head);
    printdata(head);

    second->data = 3;
    second->name = "mas";
    second->next = NULL;

    printdata(second);
    printname(second);
    return 0;
}
