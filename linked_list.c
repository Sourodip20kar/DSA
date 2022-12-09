#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void insertAtBeginning(struct node **head_ref, int new_data){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    *head_ref=new_node;
}
void insertAfter(struct node *prev_Node, int new_data){
    if(prev_Node==NULL)
    {
        printf("The given previous node cannot be null");
        return;
    }
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=prev_Node->next;
    prev_Node->next=new_node;
}
void insertAtEnd(struct node **head_ref, int new_data){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *last = *head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
    last=last->next;

    last->next=new_node;
    return;
}
void deleteNode(struct node **head_ref, int key) {
struct node *temp = *head_ref, *prev;
if (temp!= NULL && temp->data == key) {
*head_ref = temp->next;
free(temp);
return;
}
while (temp != NULL && temp->data != key) {
prev = temp;
temp = temp->next;
}
if (temp == NULL) return;

prev->next = temp->next;
free(temp);
}
int searchNode(struct node** head_ref, int key) {
struct node* current = *head_ref;
while (current != NULL) {
if (current->data == key) return 1;
current = current->next;
}
return 0;
}
void sortLinkedList(struct node** head_ref) {
struct node *current = *head_ref, *index = NULL;
int temp;
if (head_ref == NULL) {
return;
} else {
while (current != NULL) {
index = current->next;
while (index != NULL) {
if (current->data > index->data) {
temp = current->data;
current->data = index->data;
index->data = temp;
}
index = index->next;
}
current = current->next;
}
}
}
void printList(struct node* node) {
while (node != NULL) {
printf(" %d ", node->data);
node = node->next;
}
}

int main() {
struct node* head = NULL;
insertAtEnd(&head, 1);
insertAtBeginning(&head, 2);
insertAtBeginning(&head, 3);
insertAtEnd(&head, 4);
insertAfter(head->next, 5);
printf("Linked list: ");
printList(head);
printf("\nAfter deleting an element: ");
deleteNode(&head, 3);
printList(head);
int item_to_find = 3;
if (searchNode(&head, item_to_find)) {
printf("\n%d is found", item_to_find);
} else {
printf("\n%d is not found", item_to_find);
}
sortLinkedList(&head);
printf("\nSorted List: ");
printList(head);
}