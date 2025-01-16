#include <stdlib.h>
#include "header.h"

Array * inititialize_array(int size)
{
    Array *my_arr;
    //validate the size before mem_alloc

    my_arr = (Array *)malloc(sizeof(Array));
    // after certain size, The memory allocation fails which give the error [Process returned -1073741819 (0xC0000005)], while size exceed 2147483900
    //when NULL value is passed in input, it should return MEM_ALLOC_FAIL
    if(my_arr == NULL) return MEM_ALLOC_FAIL;

    my_arr->c_size = 0;
    my_arr->t_size = size;
    my_arr->arr = (int *)malloc(sizeof(int) * size);

    if(my_arr->arr == NULL){
        free(my_arr);
        return MEM_ALLOC_FAIL;
    }
    return my_arr;
}

int insert_data(Array *my_arr, int data)
{
    if(my_arr->c_size == my_arr->t_size) return FULL;

    *(my_arr->arr + my_arr->c_size) = data;
    my_arr->c_size++;

    return SUCCESS;
}
int search_array(Array *, int);

