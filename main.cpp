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
typedef map<string, int>MapT;
typedef MapT::const_iterator MapIterT;

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

  //STL iterator
  cout << "\nSTL iterator" << endl;
  vector<int> vint(10); //vector with 10 integers
  vint[0] = 10;
  vint[1] = 20;
  vint[2] = 30;
  vint[3] = 40;
  vint[4] = 50;
  vint[5] = 60;
  vint[6] = 70;
  vint[7] = 80;
  vint[8] = 90;
  vint[9] = 100;

  //diplaying the elements of the vector
  vector<int>::iterator it; 
  for (it = vint.begin(); it != vint.end(); ++it)
  {
    cout << " " << *it << endl;
  }

  //std::stack
  stack<int> st;

  st.push(100);             //Pushes the number on the stack
  assert(st.size() == 1);   //Verifies that one element is on the stack
  assert(st.top() == 100);  //Verifies the element value
  
  st.top() = 500;           //Assigs a new value
  assert(st.top() == 500);

  st.pop();                 //Revomes the element
  assert(st.empty() == true); 

  //std::set
  cout << "\nSTL Set" << endl;
  set<int> iset;     //Set of unique integers
  iset.insert(11);  //Populating set with values
  iset.insert(-11);
  iset.insert(55);
  iset.insert(22);
  iset.insert(22);
  if (iset.find(55) != iset.end())
  {
    iset.insert(55);
  }
  assert(iset.size() == 4);
  set<int>::iterator i;
  for (i = iset.begin(); i != iset.end(); i++)
  {
    cout << " " << *i;
  }
  
  //Pair structure
  pair<string, string> strstr;  
  strstr.first = "Hello";
  strstr.second = "World";

  pair<int, string> intstr;
  intstr.first = 1;
  intstr.second = "one";

  pair<string, int> strint("two", 2);
  assert(strint.first == "two");
  assert(strint.second == 2);

  //Map insert
  MapT amap;
  pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45));
  assert(result.second == true);
  assert(result.first -> second == 45);
  result = amap.insert(make_pair("Fred", 54));

  assert(result.second == false);
  assert(result.first -> second == 45);
  cout << endl;
  //Map Summary
  cout << "\nMap Summary" << endl;
  map<string,string> phone_book;
  phone_book["411"] = "Directory";
  phone_book["911"] = "Emergency";
  phone_book["508-678-2811"] = "BBC";
  if (phone_book.find("411") != phone_book.end())
  {
    phone_book.insert(make_pair(string("411"), string("Directory")));
  }
  assert(phone_book.size() == 3);
  map<string, string>::const_iterator t;
  for(t = phone_book.begin(); t != phone_book.end(); ++t)
  {
    cout << " " << t -> first << " " << t -> second << endl;
  }

  //Sort algorithm
  int arr[100];
  sort(arr, arr + 100);
  vector <int> v1;
  sort (v1.begin(), v1.end());

  
  return 0;
}

//Predicate algorithm
bool less_than_7(int value)

  {
    return value < 7;
  }
  vector <int> v2;
  int count_less = std::count_if(v2.begin(), v2.end(), less_than_7);
