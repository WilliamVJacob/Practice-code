#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct  node
{
   int data;
   node* next;
   
};
node *top =NULL;

 int is_empty();
void push(int input){
    node* temp = (node *)calloc(1,sizeof(node));
    if(temp != NULL){
        temp->next = top;
        temp->data =input;
        top = temp;
    }

}

void pop (){

    if (is_empty())
    {
        printf("Stack underflow \n");
        return;
    }
    node * tmp = top;
    top = top->next;
    free(tmp);
}
int is_empty(){
    return (top == NULL)? 1 : 0;
}
void display_all(){
    printf("List is ");
    node *view = top;
    while(view != NULL){
        printf("%d ",view->data);
        view = view ->next;
    }
    printf("\n");
}


void display_top()
{
    if(is_empty()){
        printf("Stack underflow ");
        return;
    }
    printf("%d ", top->data);
}

int main(int argc, char *argv[])
{

    int flag ;
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
            push(input);
            break;
        case 2:
            pop();
            break;
        case 3:
            display_top();
            break;
        case 4:
            display_all();
            break;
        case 5:
            flag = is_empty();
            printf("is empty? %d\n",flag);
            break;
        default:
            break;
        }
    }
}