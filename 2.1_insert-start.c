#include <stdio.h>
#include <stdlib.h>

struct node {
  char value;
  struct node *nextNode;
};

int main() {
  struct node *current, *head, *tail;
  current = head = tail = NULL;

  current = (struct node *) malloc(sizeof(struct node));
  current->value = 'A';
  current->nextNode = NULL;
  head = current;
  tail = current;

  current = (struct node *) malloc(sizeof(struct node));
  current->value = 'B';
  current->nextNode = NULL;
  head->nextNode = current;
  tail = current;

  current = (struct node *) malloc(sizeof(struct node));
  current->value = 'C';
  current->nextNode = NULL;
  tail->nextNode = current;
  tail = current;

  struct node* temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }

  struct node *newNode;
  newNode = (struct node *) malloc(sizeof(struct node));
  printf("\nEnter new value: ");
  scanf("%c", &newNode->value);
  newNode->nextNode = head;
  head = newNode;

  temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }
  return 0;
}