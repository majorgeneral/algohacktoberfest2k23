#include<stdio.h>
#include<stdlib.h>

struct node{
    int size;
    int top;
    char* arr;
};
int Is_empty(struct node* top){
    if(top->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int Is_full(struct node* top){
    if(top->top==top->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct node* top, char ch){
    if(Is_full(top)){
        printf("stack overflow\n");
    }
    else{
        top->top++;
        top->arr[top->top]=ch;
    }
}

char pop(struct node* top){
    if(Is_empty(top)){
        printf("stack underflow\n");
    }
    else{
        int x=top->arr[top->top];
        top->top--;
        return x;
    }
}
int main()
{   char arr[]={'{','+','(','=','[',')',')',')'};
    struct node* s=(struct node*)malloc(sizeof(struct node));                          
    s->top=-1;
    s->size=50;
    s->arr=(char*)malloc(sizeof(char));
    int i;
    for(i=0;i<8;i++){
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='['){
            push(s,arr[i]);
        }
        if(arr[i]==s->arr[s->top]){
            char z=pop(s);
        }
    }
    if(s->top==-1){
        printf("pranthesis are valid");
    }
    else{
        printf("non valid pranthesis");
    }
    return 0;
}
