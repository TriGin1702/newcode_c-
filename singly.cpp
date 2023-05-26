#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   while (head != NULL) {
      cout<<head->data<<" ";
      head = head->next;
   }
}

int main() {
   insert(7);
   insert(5);
   insert(11);
   insert(13);
   insert(17);
   cout<<"The linked list is: ";
   display();
   return 0;
}
