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

  // Display
  struct node* temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }

  // Front Value:
  struct node *newNode;
  newNode = (struct node *) malloc(sizeof(struct node));
  printf("\nEnter front value: ");
  scanf("%c", &newNode->value);
  newNode->nextNode = head;
  head = newNode;

  temp = head;
  while (temp != NULL) {
    printf("\t %c", temp->value);
    temp = temp->nextNode;
  }

  // Last Value:
  newNode = (struct node *) malloc(sizeof(struct node));
  printf("\nEnter last value: ");
  scanf("\t %c", &newNode->value);
  newNode->nextNode = NULL;
  temp = head;
  while (temp->nextNode != 0) {
    temp = temp->nextNode;
  }
  temp->nextNode = newNode;
  
  tail->nextNode = newNode; 
  tail = newNode;

  temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }
  
  // Middle Value
  int pos;
  int size = 5;
  newNode = (struct node *) malloc(sizeof(struct node));
  printf("\nEnter the index position: ");
  scanf("%d", &pos);
  int i = 0;
  if (pos > size) {
    printf("Position is invalid. ");
  } else {
    temp = head;
    while (i < pos) {
      temp = temp->nextNode;
      i++;
    }
    printf("\nEnter data you want to insert: ");
    scanf(" %c", &newNode->value);
    newNode->nextNode = temp->nextNode;
    temp->nextNode = newNode;
  }

  temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }


// Delete the front
  struct node *toDelete;

  toDelete = head;
  head = head->nextNode;
  free(toDelete);

  printf("\nDeleted Front: ");
  temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }


// Delete latter

  temp = head;
  // Move to second-to-last node
  while (temp->nextNode != tail) {
    temp = temp->nextNode;
  }

  toDelete = tail;
  temp->nextNode = NULL;
  tail = temp;

  free(toDelete);
  
  printf("\nDeleted Latter: ");
  temp = head;
  while (temp != NULL) {
    printf("\t%c", temp->value);
    temp = temp->nextNode;
  }

  return 0;
}