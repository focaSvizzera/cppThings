#include <iostream>
#include <string>

using namespace std;

class partyGuests
{
  public:
    string name;
    int number;
    
}

char** guests(int* returnSize)
{
  int namesSize;
  
  cout << "Insert qty" << endl;
  cin >> namesSize;

  *returnSize = namesSize;        
  
  char** list = new char*[namesSize];     // dynamically allocated array of pointers

  cout << "1. to start the for" << endl;
  int select;
  cin >> select;

  if (select == 1)
  {
    for (int i = 0; i < namesSize; i++)
    {
      list[i] = new char[15];
      
      cout << "Insert Names: " << endl;
      cin >> list[i];
    }
  }

  return list;
}

int main(void) 
{

  int size;
  char** listona = guests(&size);


  cout << "Names:" << endl;
  for (int i = 0; i < 5; i++)
  { 
    cout << listona[i] << endl;
    delete listona[i];
  }
  delete listona;
  return 0;
}