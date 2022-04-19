#include<stdio.h>
#include<stdlib.h>
#include "../essential/essential.h"

typedef struct node node;
struct  node
{
    int info;
    node *next;
};
void add_at_begining(node** , int);
void add_at_end(node**, int);

void display(node *);

void add_at_begining(node** p2head, int num)
{

    node *temp = (node *)malloc(sizeof(node));
    if(temp == NULL){
        perror("malloc");
    }
    else{
        temp->next = *p2head;
        temp->info = num;
        *p2head = temp;
    }
}

void add_at_end(node **p2head, int num)
{
    if (NULL == p2head)
    {
        perror("p2head error");
    }
    node *p = *p2head;
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        perror("temp malloc");
        // return 0;
    }
    else
    {

        printf("num %d  next %p\n", num, *p2head);
        temp->info = num;
        temp->next = NULL;
        if (p == NULL)
        {
            *p2head = temp;
        }
        else
        {
            while (p->next != NULL)
            {

                printf("%d ", p->info);

                p = p->next;
            }

            p->next = temp;
            //  return *p2head;
        }
    }
}

void add_at_nth(node** p2head,int pos, int num)
{

    node *p = *p2head;
    node *temp = (node *)malloc(sizeof(node));
    if (temp != NULL)
    {      
        temp->info = num;
        printf("num %d  head %p\n", temp->info, *p2head);
            if(pos == 1)
            {
                temp->next = *p2head;
                *p2head = temp;
                
            }
            p = *p2head;
            for(int i = 1 ; i < pos -1 && p!= NULL ;i++)
            {
                
                printf("%d ", p->info);
                p = p->next;
            }
            if(p == NULL)
                printf("There are less elements than %d\n",pos);
            else
            {
                temp->info=p->info;
                p->next = temp;
            }
    }
} 
void display( node* head)
{
    printf("List is \n");
    while(head != NULL){
        printf("%d ",head->info);
        head = head->next ;

    }
}
int main(int argc, char *argv[]){
     node *head = NULL;

    int num,input;
    while(1){
        printf("Enter your choice\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_begining(&head, input);
            break;
        case 2:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_end(&head, input);
            break;
        case 3:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_nth(&head, 1, input);
            break;
        case 4:
            display(head);
            break;
        default:
            break;
        }
        
    }
}