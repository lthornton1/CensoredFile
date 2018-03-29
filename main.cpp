//Author:
#include <iostream>
#include <fstream>
#include<vector>
using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;
  vector<char> file;
  int i=1;
  if (in.is_open())
  {
    while (!in.eof())
    {
      in>>current;
      file.push_back(current);
    }
  }

  first = file[0];

  while (!isalpha(file[file.size()-i]))
  {
    i++;
  }

  last = file[file.size()-i];
  in.close();
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last

  cout<<first<<"**"<<last<<endl;


  //Then, finally, this displays the censored version:

  return 0;
}
