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

  if (in.is_open())
  {
    while (!in.eof())
    {
      in>>current;
      file.push_back(current);
    }
  }
  first = file[0];
  last = file[file.size()-1];
  in.close();
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
