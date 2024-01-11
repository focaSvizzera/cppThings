#include <iostream>
#include <string>

using namespace std;

char** guests()
{
  int namesSize;
  
  cout << "Insert qty" << endl;
  cin >> namesSize;
  
  char** list = new char*[namesSize];

  cout << ""
  
  for (int i = 0; i < namesSize; i++)
  {
    cout << "Insert Names: " << endl;
    cin >> list[i];
  }
}


int main(void) 
{

  
  

  
  return 0;
}