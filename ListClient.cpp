#include <iostream>
#include <random>
#include "List.h"

using namespace std;

int main()
{
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution <int> n (1,100);
  List L1, L2;
  int x = 0;
  //Do some stuff with L1, L2, ...
  // ...

  //insert 100 random elements in list
  for(int i = 1; i < 101; i++){
    x = n(mt);
    L1.insert(x,i);
  }

  //Clone
  L2 = L1;


  //cout L1's elements
  cout << "L1's elements \n";
  for(int i = 1; i< L1.size(); i++){
    cout << L1.get(i) << ", ";
  }


  //cout L2's elements
  cout << "L2's elements \n";
  for(int i = 1; i< L2.size(); i++){
    cout << L2.get(i) << ", ";
  }

  //Clear L2
  L2.clear();
  cout << "L2 has been cleared \n";
  //cout L2's elements
  for(int i = 1; i< L2.size(); i++){
    cout << L2.get(i) << ", ";
  }

  //Remove 50 random elements in list
  for(int i = 1; i < 51; i++){
    x = n(mt);
    if (x > L1.size()){
      x = L1.size()-1;
    }
    L1.remove(x);
  }

  //cout L1's elements
  cout << "50 elements from L1 have been removed\n";
  for(int i = 1; i< L1.size(); i++){
    cout << L1.get(i) << ", ";
  }




}
