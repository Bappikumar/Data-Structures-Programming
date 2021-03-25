#include<stdio.h>
#include<stdlib.h>

struct Node
    {
      int data;
      struct Node *next;
    };


int main()
    {
      struct Node* head = NULL;
      struct Node* second = NULL;
      struct Node* third = NULL;


      head = (struct Node*)malloc(sizeof(struct Node));
      second = (struct Node*)malloc(sizeof(struct Node));
      third = (struct Node*)malloc(sizeof(struct Node));

      head->data = 5;
      printf("1st value will be:%d\n",head->data);
      head->next = second;

      second->data = 3;
      printf("2nd value will be:%d\n",second->data);
      second->next = third;

      third->data = 9;
      printf("3rd value will be:%d\n",third->data);
      third->next = NULL;

      return 0;
    }

