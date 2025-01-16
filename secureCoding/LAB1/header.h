
#define MEM_ALLOC_FAIL NULL
#define FULL -1
#define SUCCESS 1

struct _array_
{
    int *arr;
    int c_size, t_size;
};
typedef struct _array_ Array;

Array * inititialize_array(int);
int insert_data(Array *, int);
int search_array(Array *, int);
