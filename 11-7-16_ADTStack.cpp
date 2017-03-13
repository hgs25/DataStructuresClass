#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node* link;
};

class ListQueue
{
  private:
    Node* front;
    Node* rear;
    int count;
  public:
    ListQueue()
    {
      front = NULL;
      rear = NULL;
      count = 0;
    };
    void Enqueue(int element);
    int Dequeue();
    int Front();
    int Size();
    bool isEmpty();
};

int main()
{
  int n, data;
  ListQueue list;

  cout << "Enter number of entries : ";
  cin >> n;
  cout << "Enter data to be entered : \n";
  for(int i=0; i<n; i++)
  {
    cin >> data;
    list.Enqueue(data);
  }

  cout << "The Front is " << list.Front() << endl;
  cout << "The size is " << list.Size() << endl;
  cout << "Enter number of entries to delete : ";
  cin >> n;
  for(int i=0; i<n; i++)
  {
    list.Dequeue();
  }
  cout << "Is the list Empty? " << list.isEmpty() << endl;
  if(list.isEmpty() == false)
  {
    cout << "The Front is " << list.Front() << endl;
    cout << "The size is " << list.Size() << endl;
  }
  return 0;
}

void ListQueue::Enqueue(int element)
{
  Node *temp = new Node;
  temp -> data = element;
  temp -> link = NULL;
  if(isEmpty())
  {
    front = temp;
    rear = temp;
  }
  else
  {
    rear -> link = temp;
    rear = temp
  }
  count++;
}

int ListQueue::Dequeue()
{
  Node* temp;
  temp = front;
  front = front -> link;
  delete temp;
  count--;
  return 0;
}

int ListQueue::Front()
{
  return (front -> data);
}

int ListQueue::Size()
{
  return count;
}

bool ListQueue::isEmpty()
{
  if (count > 0)
    return false;
  else
    return true;
}
