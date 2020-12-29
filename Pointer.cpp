#include <iostream>
using namespace std;

/// >> "What and How pointers in C++ work?"
/// >> "int *ptr = 0x7f2e88099a"
/// >> "Why do we need to declare the type of pointer? int*, char*, float* "
/// >> "The Real truth behind Arrays!"
/// >> "Arithmatic + Operator on pointers"
/// >> "Equality operator on pointers"
/// >> "How much time would copying a pointer array take?"
///     int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};
///     int *ptr = arr;
/// >> "Pointers that do not point to anythings!"

int main() {

    int x = 1; /// x is an integer, stack section of  the memory.
    /// &x -> give me the address of x (int , char, float, string)
    printf("Address of x is: %p\n", &x);
    x = 15;
    printf("Address of x is: %p\n", &x);
    x = 100;
    printf("Address of x is: %p\n", &x);


     printf("\n========================\n\n");


    /// int *ptr = (int*)0x7ffd6586b8c4;
    /// printf("My first pointer ptr = %p\n", ptr);/// 0x7ffd6586b8c4
    /// printf("Value = %d\n", *ptr);/// 100


    int *ptr = &x; /// ptr will start pointing to x
    char *name = "Pias"; /// name becomes a pointer

    printf("Size of pointer to an integer: %lu\n", sizeof(ptr));
    printf("Size of pointer to an character: %lu\n", sizeof(name));


    int intType;
    char charType;

    printf("Size of an integer: %lu\n", sizeof(intType));
    printf("Size of an character: %lu\n", sizeof(charType));


     printf("\n========================\n\n");



    /// >> "Why do we need to declare the type of pointer? int*, char*, float* "

    printf("Content of ptr %p\n", ptr);
    printf("Content of ptr + 1 %p\n", ptr + 1);
    printf("Content of ptr + 2 %p\n", ptr + 2);

    printf("\n========================\n\n");

    printf("Content of name %p\n", name);
    printf("Content of name + 1 %p\n", name + 1);
    printf("Content of name + 2 %p\n", name + 2);

    printf("\n========================\n\n");

    int arr[3] = {10, 20, 30}; /// arr actually becomes a pointer to the
                               /// first element of the array;

    printf("Content of arr %p, value %d\n", arr, *arr);
    printf("Content of arr + 1 %p, value %d\n", arr + 1, *(arr + 1));
    printf("Content of arr + 2 %p, value %d\n", arr + 2, *(arr + 2));

    /// *(arr + 1) <---- arr[1];

    int *other = arr; /// equality operation /// time taken O(1);


    printf("\n========================\n\n");


    printf("Content of other %p, value %d\n", other, *other);
    printf("Content of other + 1 %p, value %d\n", other + 1, *(other + 1));
    printf("Content of other + 2 %p, value %d\n", other + 2, *(other + 2));


    printf("\n========================\n\n");


    int *p = nullptr;

    printf("*Ptr = %p\n", p);

    /// & <----- address of whatever comes in front


    /// * <----- dereferencing the value being pointed by the pointer


    return 0;
}
