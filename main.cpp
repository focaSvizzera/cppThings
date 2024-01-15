#include <iostream>
#include <string>

std::vector<std::string> guests()
{
  int namesSize;
  std::cout << "Insert qty: ";
  std::cin >> namesSize;

  std::cin.ignore();

  std::vector<std::string> list;
  for (int i = 0; i < namesSize; i++)
  {
    std::string input;
    std::cout << "Insert Name: ";
    std::getline(std::cin, input);
    
    list.push_back(input);
  }
  return list;
}

int main(void) 
{
  std::vector<std::string> listona = guests();

  std::cout << "Names: \n";

  for (int i = 0; i < listona.size(); i++)
  { 
    std::cout << listona[i] << "\n";
  }
  return 0;
}
