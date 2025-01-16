#include <assert.h>
#include<stdlib.h>
#include "header.h"

int main()
{
    Array *test_ptr;

    test_ptr = inititialize_array(NULL);

    assert(test_ptr != NULL);
    assert(test_ptr->c_size==0);
    assert(test_ptr->t_size == 10);
    assert(test_ptr->arr != NULL);





    assert(insert_data(test_ptr, 10) == SUCCESS);
    assert(insert_data(test_ptr, 20));
    assert(insert_data(test_ptr, 30));
    assert(insert_data(test_ptr, 40));
    assert(insert_data(test_ptr, 10));
    assert(insert_data(test_ptr, 20));
    assert(insert_data(test_ptr, 30));
    assert(insert_data(test_ptr, 40));
    assert(insert_data(test_ptr, 10));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));
    assert(insert_data(test_ptr, 100));





    return 0;
}
