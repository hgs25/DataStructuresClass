#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node* link;
};

class ListStack
{
  private:
    Node* top;
    int count;

  public:
    ListStack()
    {
      top = NULL;
      count = 0;
    };
    void Push(int element);
    int Pop();
    int Top();
    int Size();
    bool isEmpty();
};

int main()
{
  int n, data;
  ListStack stack;
  cout << stack.isEmpty() << endl;

  cout << "Please enter number of elements in list: ";
  cin >> n;
  cout << "Please enter data to be inputed into list: " << endl;
  for(int i=0; i<n; i++)
  {
    cin >> data;
    stack.Push(data);
  }

  cout << stack.isEmpty() << endl;
  cout << stack.Top() << endl;
  cout << stack.Size() << endl;
  stack.Pop();
  cout << stack.Top() << endl;
  cout << stack.Size() << endl;

  return 0;
}

void ListStack::Push(int element)
{
  Node* temp = new Node();
  temp -> data = element;
  temp -> link = top;
  top = temp;
  count++;
}

int ListStack::Pop()
{
  Node* temp;
  temp = top -> link;
  delete top;
  top = temp;
  count--;
}

int ListStack::Top()
{
  return top -> data;
}

int ListStack::Size()
{
  return count;
}

bool ListStack::isEmpty()
{
  if(count > 0)
    return false;
  else
    return true;
}
