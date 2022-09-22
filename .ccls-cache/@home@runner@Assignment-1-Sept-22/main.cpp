//library (include statements)
#include <iostream>
#include <fstream>
using namespace std;

int readFile()
{
  int row = 10;
  int collumn = 10;

  int theArray[row][collumn];

  ifstream inputfile("file.txt");
  if(!inputfile.is_open())
    cout << "The file selected could not be opened";

  for (int r =0 ; r < row; r++)
    {
    for (int c =0; c < collumn; c++)
      {
        inputfile >> theArray[r][c];
        }
      }
  for (int r = 0; r < row; r++)
    {
      for(int c = 0; c< collumn; c++)
        {
          cout << theArray[r][c] << "\t";
        }
      cout << endl;
    }
  }

int userMenu(){
  cout << "Welcome to your Array";
  cout << "Please enter a random number (or look at the file.txt file and enter a number that alreadt exists in the corresponding file";
  int userinput; 
  cin >> userinput;
}

//main function
int main() {

  
  
}