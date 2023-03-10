#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor

    ~Node()
    {
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{

    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // create new node to insert
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        head = head->next;
        temp->next = NULL;
        // memory free
        delete temp;
        return;
    }
    else
    {

        Node *curr = head;
        Node *prev = NULL; // at start prev is NULL
        int cnt = 1;
        // Yeh loop position tk phonchne k liye hai
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr == NULL) // pos is greater than the number of nodes in the list
        {
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseLinkedList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

bool detectLoop1(Node* head){
    if(head == NULL) return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp != NULL){
        
        // cycle present
        if(visited[temp] == true)
        {
        cout << "Cycle is present at " << temp->data << endl;
        return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node* detectLoop2(Node* head){
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout << "Cycle is present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNodeOfCycle(Node* head){
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* entry = detectLoop2(head);

    while(slow != entry){
        slow = slow->next;
        entry = entry->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL) return;

    Node* startOfLoop = getStartingNodeOfCycle(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp -> next;
    }

    temp->next = NULL;

}

int main()
{

    // Singly Linked List

    // created a new node
    Node *node1 = new Node(10);
    Node *head = node1;

    Node *tail = node1;

    insertAtTail(tail, 11);
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    print(head);
    // reverseLinkedList(head);
    // cout << "After reverse: " << endl;
    // print(head);
    // insertAtPosition(head, tail, 3, 21);
    // print(head);
    // insertAtPosition(head, tail, 6, 30);
    // print(head);
    // deleteNode(head, 6);
    // print(head);

    // cout << "head: " << head << endl;
    // cout << "tail: " << tail << endl;
    tail->next = head->next;
    // if(detectLoop1(head)){
    //     cout << "Cycle is present" << endl;
    // }else{
    //     cout << "No cycle is present" << endl;
    // }

    cout << "Loop Node:" << detectLoop2(head) << endl;
    Node* loop = getStartingNodeOfCycle(head);
     print(head);
    cout << "Starting Loop Node: " << loop->data << endl;
    cout << "REMOVING " << endl;
    removeLoop(head);
     print(head);
    cout << "Loop Node:" << detectLoop2(head) << endl;
    // insertAtHead(head,12);
    // insertAtHead(head,13);
    // print(head);
    // insertAtHead(head,14);
    // print(head);

    // cout << node1->data << endl; // pointer because of heap allocation
    //  cout << node1->next << endl;

    return 0;
}