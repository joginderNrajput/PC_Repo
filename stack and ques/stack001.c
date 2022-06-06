#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;

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
        printf("Stack OverFlow cannot push element into it !\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow cannot pop from it !");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
      struct stack * StackArray = (struct stack *)malloc(sizeof(struct stack));
      StackArray->size = 5;
      StackArray->top = -1;
      StackArray->arr = (int *)malloc(StackArray->size * sizeof(int));

      printf("Stack created successfully !\n");
      int res = isEmpty(StackArray);
      int res2 = isFull(StackArray);

      printf("Array  is Empty before push operation %d\n",res);
      printf("Array is Empty before push operation %d\n",res2);

      push(StackArray, 55);
      push(StackArray, 89);
      push(StackArray, 35);
      push(StackArray, 95);
      push(StackArray, 39);
    //   push(StackArray, 55);
     
    //  pop(StackArray);



      printf("Array  is Empty After push operation %d\n",isEmpty(StackArray));
      printf("Array is Empty After push operation %d\n",isFull(StackArray));

      return 0;
}