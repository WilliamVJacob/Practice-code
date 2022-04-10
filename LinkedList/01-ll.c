#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct  node
{
    int data;
    node *next;
};

node* add_at_begining(node* , int);
void display(node *);

node* add_at_begining(node *head, int num)
{

    node *temp = (node *)malloc(sizeof(node));
    if(temp == NULL){
        perror("malloc");
    }
    else{
        temp->next = head;
        temp->data = num;
        head = temp;
    }
    return head;
}
void display( node* head)
{
    printf("List is \n");
    while(head != NULL){
        printf("%d ",head->data);
        head = head->next ;

    }
}
int main(int argc, char *argv[]){
     node *head = NULL;

    int num,input;
    head = NULL;
    printf("How many number?\n");
    scanf("%d",&num);
    for(int i = 0;i< num; i++){
        printf("Enter the number\n");
        scanf("%d",&input);
        head = add_at_begining(head,input);
        display(head);
        
    }
}