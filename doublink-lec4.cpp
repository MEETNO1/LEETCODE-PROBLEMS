// #include<iostream>
// using namespace std;

// // int main(){

// //     printf( "Hello World");
// //  return 0;
// // }
// #include <stdio.h>

// int main()
// {
//     int arr[10]; 

//     printf("Enter 10 values:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Stored values:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{

struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));

n1->data = 10; n1->next