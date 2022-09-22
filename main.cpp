#include <iostream>
#include <fstream>
#include "Functions.h"
using namespace std;

int main() {
  int userChoice;
  int arrSize = 100;
  int numbers[arrSize];
  int count =0;
  ifstream inputFile;
  int newVal;
  int lookNum;
  int delNum;
  int j;
  int newNum;
  
bool x;
  x = true;

  inputFile.open("file.txt");

  while(count < arrSize && inputFile >> numbers[count]){
    count++;
    
  }
  inputFile.close();

  cout << "Numbers in Array" << endl;
  for (count =0; count < arrSize; count++){
    cout << numbers[count] << " ";
  
  }
  cout << endl;
  cout << endl;
  
  while(x){
    
  cout << "program" << endl;
  cout << "Please choose an option from below"<< endl;
  cout << endl << "1: display array"<< endl;
  cout << "2: add a new number to the array"<< endl;
  cout << "3: find a number in the array"<< endl;
  cout << "4: delete value from array" << endl;
  cout << "5: modify value in array:" << endl;
  cout << "6: quit program"<< endl;
  
  cin >> userChoice;

  switch(userChoice){
    
    case 1:
      cout << "updated array" << endl;
      for(count =0 ; count < arrSize; count++){
        cout << numbers[count] << " ";
        
      }
      cout << endl;
    break;

    case 2:
      
    cout << "What number would you like to add?" << endl;
    cin >> newVal;
    for(count =0; count < arrSize; count++){
      //cin >> newVal;
    }
      numbers[100] = newVal;
      cout << endl;
    break;

    case 3:
      
    cout << "What number are you looking for?" << endl;
      cin >> lookNum;
      
      for (count =0; count < arrSize; count++){
      
        if(numbers[count] == lookNum){
          cout << "number is at index -->>" << count << endl;
          break;
        }
      }
      if(count == arrSize){
        cout << "Number is not in Array" << endl;
        
        }
    
    break;

    case 4:
    cout << "What is the the number you would like to delete?" << endl;
      cin >> lookNum;

      for (count =0; count < arrSize; count++){
        if (numbers[count] == lookNum){
          break;
          if (count < arrSize){
            count - count -1;
            for(int j= count; j < arrSize; j++)
              numbers[j] = numbers[j+arrSize];
            return 0;
            }
          
          }
          
        }
      
    break;
    
    case 5:
    cout << "what is the index of the number you would like to change ?";

      cin >> numbers[count];
      cout << "what number would you like to change it to?" << endl;
        cin >> newNum;
        numbers[count]=newNum;

      break;

    case 6:
      
    cout << "thanks for using this program";
      
      x = false;
    break;
      
    default:
    cout << "Please choose a valid input option" << endl;
    break;
      
    return;
  }
      }
  
  return 0;

    
  }