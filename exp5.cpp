#include <iostream>
 using namespace std;
// Define structure for a node
struct Node {
int data;
Node* next;
};
// Function to insert a new node at the end of the linked list
void insert(Node*& head, int data) {
Node* newNode = new Node;
newNode->data = data;
newNode->next = nullptr;
if (head == nullptr) {
head = newNode;
return;
}
Node* temp = head;
while (temp->next != nullptr) {
temp = temp->next;
}
temp->next = newNode;
}
// Function to delete a node with given data from the linked list
void remove(Node*& head, int data) {
if (head == nullptr) {
cout << "List is empty." << endl;
return;
}
if (head->data == data) {
Node* temp = head;
head = head->next;
delete temp;
return;
}
Node* prev = head;
Node* curr = head->next;
while (curr != nullptr) {
if (curr->data == data) {
prev->next = curr->next;
delete curr;
return;
}
prev = curr;
curr = curr->next;
}
cout << "Element not found in the list." << endl;
}
// Function to search for a node with given data in the linked list
Node* search(Node* head, int data) {
Node* temp = head;
while (temp != nullptr) {
if (temp->data == data) {
return temp;
}
temp = temp->next;
}
return nullptr;
}
// Function to display the linked list
void display(Node* head) {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}
int main() {
Node* head = nullptr;
// Insert nodes into the linked list
insert(head, 10);
insert(head, 20);
insert(head, 30);
// Display the linked list
cout << "Linked List: ";
display(head);
// Search for a node with data 20
Node* result = search(head, 20);
if (result != nullptr) {
cout << "Node with data 20 found." << endl;
} else {
cout << "Node with data 20 not found." << endl;
}
// Delete node with data 20 from the linked list
remove(head, 20);
// Display the modified linked list
cout << "Linked List after deletion: ";
display(head);
return 0;
}
