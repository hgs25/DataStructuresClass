#include <iostream>
using namespace std;

//Node class
class Node
{
  private:
    int data;
    Node* next;
  public:
    Node() {}; //constructor
    void SetData(int aData) {data = aData; };
    void SetNext(Node * aNext) {next = aNext; };
    int GetData() {return data; };
    Node* GetNext() {return next; };
};

//List class
class List
{
  Node* head;
  public:
    List() {head = NULL; };
    void PrintList();
    void AppendNode(int data);
    void DeleteNode(int data);
};

int main()
{
  //new List
  List list;

  //append nodes to list
  list.AppendNode(100);
  list.PrintList();
  list.AppendNode(200);
  list.PrintList();
  list.AppendNode(300);
  list.PrintList();
  list.AppendNode(400);
  list.PrintList();
  list.AppendNode(500);
  list.PrintList();

  //delete nodes from list

  list.DeleteNode(400);
  list.PrintList();
  list.DeleteNode(300);
  list.PrintList();
  list.DeleteNode(200);
  list.DeleteNode(50);
  list.PrintList();
  list.DeleteNode(500);
  list.PrintList();
  list.DeleteNode(100);
  list.PrintList();
}

//print the contents of the list
void List::PrintList()
{
  //temp pointer
  Node *temp = head;

  //no nodes
  if(temp == NULL)
  {
    cout << "EMPTY" << endl;
    return;
  }

  //one node in list
  if(temp->GetNext() == NULL)
    cout << temp->GetData() << " --> NULL" << endl;

  //parse and print list
  else
  {
    do
    {
      cout << temp->GetData() << " --> ";
      temp = temp->GetNext();
    }
    while(temp != NULL);

    cout << "NULL" << endl;
  }
}

//Append a node to the linked list
void List::AppendNode(int data)
{
  //create a new node
  Node* newNode = new Node();
  newNode->SetData(data);
  newNode->SetNext(NULL);

  //create a temp pointer
  Node *temp = head;

  if(temp != NULL)
  {
    //nodes already in the list
    //parse to end of list
    while(temp->GetNext() != NULL)
    {
      temp = temp-> GetNext();
    }

    //point the last node to the new naode
    temp->SetNext(newNode);
  }
  else
  {
    //first node in the list
    head = newNode;
  }
}

//Delete a node form the list
void List::DeleteNode(int data)
{
  bool found = false;
  //create a temp pointer
  Node *temp = head;

  //if no nodes
  if(temp == NULL)
    return;

  //only one node in list
  if(temp->GetNext() == NULL)
  {
    delete temp;
    head = NULL;
  }

  else
  {
    //parse throuh the nodes
    Node *prev;
    do
    {
      if (temp->GetData()==data)
      {
        found = true;
        break;
      }
      prev = temp;
      temp = temp->GetNext();
    }
    while(temp != NULL);

    if(!found)
    {
      cout << data << " not found in list.\n";
      return;
    }

    //adjust the pointers
    prev->SetNext(temp->GetNext());

    //delete the current nodes
    delete temp;
  }
}
