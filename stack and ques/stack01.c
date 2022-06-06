#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack OverFlow ! Cannot push %d into stack ",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow ! Cannot pop form the stack");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack * stack_ptr = (struct stack *)malloc(sizeof(struct stack));

    stack_ptr->size = 10;
    stack_ptr->top = -1;
    stack_ptr->arr = (int *)malloc(stack_ptr->size * sizeof(int));
    printf("Stack Successfully created \n");

    printf("Before Pushing , Full : %d\n",isFull(stack_ptr));
    printf("Before Pushing , Empty %d\n",isEmpty(stack_ptr));

    push(stack_ptr, 66);
    push(stack_ptr, 344);
    push(stack_ptr, 5);
    push(stack_ptr, 434);
    push(stack_ptr, 76);
    push(stack_ptr, 456);
    push(stack_ptr, 21);
    push(stack_ptr, 566);
    push(stack_ptr, 96);
    // push(stack_ptr, 106);

    printf("After Pushing : Full : %d\n",isFull(stack_ptr));
    printf("After Pushing , Empty : %d\n",isEmpty(stack_ptr));

    printf("Popped %d form the stack\n",pop(stack_ptr));
    printf("Popped %d form the stack\n",pop(stack_ptr));
    printf("Popped %d form the stack\n",pop(stack_ptr));

    return 0;
}