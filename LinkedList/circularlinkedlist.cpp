#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertNode(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        newNode->next = head;
        tail->next = newNode;
    }
}

void insertAtHead(Node *&head, int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
        head->next = head;
    }
    else
    {
        Node *newNode = new Node(data);
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}

void insertAtPosition(Node *&head, int data, int pos)
{

    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    else
    {

        int cnt = 1;
        Node *temp = head;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    // using do while loop because if we have single node then we should run loop at least one and print it
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}

bool isCircular(Node *&head)
{
    Node *temp = head;
    while (temp != head || temp != nullptr)
    {
        if (temp->next == head)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteNode(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        if (curr == head)
        {
            cout << "No node exists at this position!" << endl;
            return;
        }
        cnt++;
    }

    if (curr == head) // if we are deleting head node
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
    }
    else
    {
        prev->next = curr->next;
    }

    curr->next = NULL;
    delete curr;
}


int main()
{
    Node *head = nullptr;
    insertNode(head, 10);
    insertNode(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtPosition(head, 50, 1);
    print(head);
    deleteNode(head, 1);
    cout << "After Insertion " << head->data << endl;
    print(head);
    cout << "LinkedList is Circular: " << isCircular(head) << endl;

    return 0;
}
