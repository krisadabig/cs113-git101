// 6210402330 Krisada Mungsrakoo

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node_t;

node_t *createNewNode(int data) {
    node_t *newNode = malloc(sizeof(node_t));

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertNode(node_t *newNode, node_t **head)
{
    node_t *tmp = *head;
    while(tmp != NULL){
        if(newNode->data < tmp->data){
            if(*head == tmp){
                *head = newNode;
                newNode->next = tmp;
                tmp->prev = newNode ;
            }else {
                tmp->prev->next = newNode;
                newNode->next = tmp;
                newNode->prev = tmp->prev;
                tmp->prev = newNode; 
            }
            break;
        }else if(tmp->next == NULL && tmp->data <= newNode->data ) {
            newNode->next = tmp->next;
            newNode->prev = tmp;
            tmp->next = newNode;
            break;
        }
        tmp = tmp->next;
    }
}

void printlist(node_t *head)
{
    node_t *tmp;
    for(tmp=head; tmp; tmp = tmp->next){
            printf("%d\n",tmp->data);
    }
}

int main()
{
    int input;
    node_t *head;
    node_t *tmp;

    scanf("%d",&input);
    if(input!=-1) {
            tmp = createNewNode(input);
            head = tmp;
            
            while(1){
                    scanf("%d",&input);
                    if (input==-1) break;
                    tmp = createNewNode(input);
                    insertNode(tmp, &head);
            }
    }
    printlist(head);
}
