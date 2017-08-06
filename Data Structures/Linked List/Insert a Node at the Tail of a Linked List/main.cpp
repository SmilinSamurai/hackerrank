/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *Insert(Node *head, int data) {
  Node *node_iterator = head;
  Node *new_node = new Node;

  new_node->data = data;

  if (node_iterator == NULL) {
    new_node->next = head;
    node_iterator = new_node;

  } else {
    while (node_iterator != NULL) {
      if (node_iterator->next == NULL) {
        node_iterator->next = new_node;
        new_node->next = NULL;
      }
      node_iterator = node_iterator->next;
    }
  }
  return node_iterator;
}
