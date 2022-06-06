#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top = -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top = ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("The stack is Overflow cannot push !");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Cannot pop because stack is empty ");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i){
    int arrayInd = ptr->top-i-1;
    if(arrayInd<0){
        printf("Not a valid position for the stack !");
        return -1;
    }
    else{
        return ptr->arr[arrayInd];
    }
}
int main(){
    struct stack * stack_array = (struct stack *)malloc(sizeof(struct stack));
    stack_array->size = 18;
    stack_array->top = -1;
    stack_array->arr = (int *)malloc(stack_array->size*sizeof(int));
    printf("Stack Created Successfully !\n");
    int res = isEmpty(stack_array);
      int res2 = isFull(stack_array);

      printf("Array  is Empty before push operation %d\n",res);
      printf("Array is Empty before push operation %d\n",res2);

      push(stack_array, 55);
      push(stack_array, 89);
      push(stack_array, 35);
      push(stack_array, 95);
       printf("Array  is Empty After push operation %d\n",isEmpty(stack_array));
      printf("Array is Empty After push operation %d\n",isFull(stack_array));

     for(int j=1; j<=stack_array->top+1; j++){
          printf("the value at %d index is %d\n", j,peek(stack_array,j));
     }

}