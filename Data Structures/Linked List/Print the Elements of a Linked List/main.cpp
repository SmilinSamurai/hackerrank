/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head) {
  Node *node_iterator = head;
  while (node_iterator != NULL) {

    cout << node_iterator->data << endl;

    node_iterator = node_iterator->next;
  }
}
