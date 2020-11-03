/* Wilfrido Varela 10/29/2020 STL Library
Dr_T Unit 2 COSC-1437
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cassert>
#include <stack>
#include<set>
#include<utility>
#include<map>  
using namespace std;

class MyClassVector1
{
  private:
    vector<double> vd;
  public:
    MyClassVector1 (vector <double> d)
    {
      vd = d;
    }
    void print() //printing the value of the vector
    {
      for (int i = 0; i < vd.size(); i++)
      {
        cout << vd[i] << " ";
      }
    }
};

int main(int argc, char* argv[]) 
{
  //Vectors
  vector<double> vd; //floating point numbers
  vector<int> vi;    //integer numbers
  vector<string> vs; //string objects

  vd.push_back(4);   //adding 3 elements to the vd vector
  vd.push_back(8);   
  vd.push_back(12.9);

  vi.push_back(5);   //adding 3 elements to the vi vector
  vi.push_back(9);
  vi.push_back(314);

  vs.push_back("Hello"); //adding 3 elements to the vs vector
  vs.push_back("World");
  vs.push_back("!");
  
  cout << "\nValues in vd: \n"; //displaying the 3 elements in the vd vector

    for(double vals : vd)
    {
      cout << vals << endl; 
    }
  cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vd.size(); i++)
    {
      cout << vd[i] << endl; 
    }

  cout << "\nValues in vi: \n";   //displaying the 3 elements in the vi vector
    for(double vals : vi)
    {
      cout << vals << endl; 
    }
  cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vi.size(); i++)
    {
      cout << vi[i] << endl; 
    }

  cout << "\nValues in vs: \n";   //displaying the 3 elements in the vs vector
    for(string vals : vs)
    {
      cout << vals << endl; 
    }
  cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vs.size(); i++)
    {
      cout << vs[i] << endl; 
    }
}
