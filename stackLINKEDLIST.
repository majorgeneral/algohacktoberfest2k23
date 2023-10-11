#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* next;
};

int Is_empty(struct node*ptr){
    if(ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int Is_full(struct node*ptr){
    struct node*top =(struct node*)malloc(sizeof(struct node));

    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push(struct node*top, int val){
    if(Is_full(top)){
        printf("stack overflow");
    }
    else{
        struct node* ptr=(struct node*)malloc(sizeof(struct node)) ;
        ptr->val=val;
        ptr->next=top;
        top = ptr;
        return top;
    }
}

int pop(struct node**top){
    if(Is_empty(*top)){
        printf("stack under flow");
    }
    else{
        int x;
        struct node* s=*top;
        *top=(*top)->next;
        x=s->val;
        free(s);
        return x;
    }
}

int peak(struct node* top, int index){
    struct node* ptr=top;
    int x=1;
    int j;
    while(x<=index){
        if(x==index){
            j=ptr->val;
            return j;
        }
        ptr=ptr->next;
        x++;
    }
}
int stackTop(struct node*top){
    return top->val;
}

int satckBottom(struct node*top){
    struct node*ptr=top;
     while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    return ptr->val;

}

void LinkedListTraversal(struct node* top){

    while(top!=NULL){
        printf("value is %d\n",top->val);
        top=top->next;
    }
}

int main()
{
    struct node* top=NULL;
    top=push(top,78);
    top=push(top,8);
    top=push(top,3478);
    top=push(top,782);
    top=push(top,7843);
    LinkedListTraversal(top);

    // int j=pop(&top);                                             POP FUNCTION CHECKING
    // printf("\n\n%d\n",j);
    // LinkedListTraversal(top);
    // j=pop(&top);
    // printf("\n\n%d\n",j);
    // LinkedListTraversal(top);


    // int siui=peak(top,1);                                        PEAK FUNCTION CHECKING 
    // printf("%d",siui);

    int lm=stackTop(top);
    printf("\ntop element %d\n",lm);

    int rnld=satckBottom(top);
    printf("bottom element %d",rnld);
    return 0;
}























