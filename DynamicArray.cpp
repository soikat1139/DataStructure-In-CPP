#include <stdio.h>
#include <stdlib.h>



///Implementation Of Dynamic Array In C++

  typedef struct {
        int* arr;
        size_t size;
        size_t capacity;
    }DynamicList;

    DynamicList* initDynamicList(){

        DynamicList* list=(DynamicList*)malloc(sizeof(DynamicList));

        list->arr=NULL;
        list->size=0;
        list->capacity=0;

        return list;
    }

    void push(DynamicList* list,int value){

        if(list->size>=list->capacity){

            list->capacity=(list->capacity==0)? 1:2*list->capacity;

            list->arr=(int*)realloc(list->arr,list->capacity*sizeof(int));
        }

        list->arr[list->size++]=value;
    }

    int getDynamicList(DynamicList* list,int indx){

        if(indx>list->size){
            return 0;
        }

        return list->arr[indx];
    }



int main()
{

    DynamicList* list=initDynamicList();

    for(int i=0;i<10000000;i++){
        push(list,i);
    }

    for(int i=0;i<list->size;i++){
        int temp=getDynamicList(list,i);
        printf("Value is:%d \n",temp);
    }




    return 0;
}
