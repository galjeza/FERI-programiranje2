#include <vector>
#include <iostream>
#include "Apartement.h"
#include "Monitor.h"
#include "VectorUtil.h"


using namespace std;

int main() {
    srand (time(NULL));
  vector<Monitor> list;
  cout << "Default generator of 40 objects" << endl;
  fillDefault<40>(list);

  cout << "Prints by using toString function" << endl;
  print(list);
  cout << toString(list);

  cout << "Return new list with Reversed  order" << endl;
  vector<Monitor> list2 = reverse(list);
  print(list2);

  vector<Apartement> apartements;
  fillDefault<12>(apartements);
  print(apartements);

    std::cout<<"\n";
  vector<vector<int>> vec={{1,2,3},{4,5,6},{7,8,9}};
  vector<int> vec2 = mergeLists(vec);
  for(int i=0;i<vec2.size();i++){
      std::cout<<vec2[i]<<", ";
  }

  std::cout<<"\n";


  return 0;
}