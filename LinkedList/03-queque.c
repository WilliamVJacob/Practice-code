#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct  node
{
   int data;
   node* next;
};
node* front= NULL;
node* rear = NULL;

void enqueue(int input){
    node* temp = (node *) calloc (1, sizeof(node));
    if(temp != NULL){

    temp ->data = input;
    temp->next = NULL;
    if(front == NULL){
        front = temp;
    }
    else{
        rear->next = temp;
    }
    rear =temp;
    }

}



void dequeue()
{
    if(is_empty()){
        return;
    }
    node *temp = (node *)calloc(1,sizeof(node));
    if( NULL != temp){
        temp = front;
        front = front -> next ;
        free(temp);
    }
 
}
int is_empty()
{
    return (front == NULL) ? 1 : 0;
}

void display_all()
{
    if (is_empty())
    {
        return;
    }
    node* view=front;
    printf("List is ");
    while(view != NULL ){
        printf("%d ",view->data);
        view = view-> next;
    }
    printf("\n");
}
void display_front()
{
    if (is_empty())
    {
        return;
    }
    printf("Front data is %d\n" , front->data);
}


int main(int argc, char *argv[])
{

    int flag;
    int num, input;
    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter the number\n");
            scanf("%d", &input);
            enqueue(input);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display_front();
            break;
        case 4:
            display_all();
            break;
        case 5:
            flag = is_empty();
            printf("is empty? %d\n", flag);
            break;
        default:
            break;
        }
    }
}