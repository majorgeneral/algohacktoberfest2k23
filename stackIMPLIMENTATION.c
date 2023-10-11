#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int Is_empty(struct stack*ptr){               // check if stack is empty
    if(ptr->top==-1)
        return 1;
    else
        return 0;
}
int Is_full(struct stack*ptr){                // check if satck is full
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else
        return 0;
}

void push(struct stack* ptr, int val){         // push function in stack
    if(Is_full(ptr)){
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){                    // pop function in stack
    int x;
    if(Is_empty(ptr)){
        printf("stack unreflow");
    }
    else{
        x=ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
}

int peak(struct stack* ptr, int position){
    int shortcut=ptr->top-position+1;
    if(shortcut<0){
        printf("invalid input");
        return -1;
    }
    else
        return ptr->arr[shortcut];
}
int main()
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int));

    //                                             just to check if push and pop fuction are working;

    // printf("after just creating the stack\n");

    // if(Is_empty(s)){
    //     printf("stack is empty\n");
    // }
    // else{
    //     printf("stafck is not empty\n");
    // }

    // push(s,78);

    // printf("after pushing in stack\n");

    // if(Is_empty(s)){
    //     printf("stack is empty\n");
    // }
    // else{
    //     printf("stack is not empty\n");
    // }

    // int x=pop(s);

    // printf("after popping from the stack\n");

    // if(Is_empty(s)){
    //     printf("stack is empty\n");
    //     printf("return item is %d\n",x);
    // }
    // else{
    //     printf("stack is not empty\n");
    //     printf("return item is %d\n",x);
    // }

    //                                                  working fine 

    int x,j,y;
    for(x=1;x<=10;x++){
        push(s,x);
    }

    // y=peak(s,6);
    // printf("%d",y);
    
    for(j=1;j<=s->top+1;j++){
        printf("value at posotion %d is %d\n",j,peak(s,j));            // to print whole stack
    }


}
