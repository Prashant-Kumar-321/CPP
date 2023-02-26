#include<bits/stdc++.h>

#include<iostream>
#include<map>
#include<string>  // To implement string class 
#include<cstring> // // To implement strign manipulation function of c 

using namespace std; 

void printMap(const map<string, unsigned int> &a) // Reference so that copying time will save 
{
  cout<< " String "<<" String lenght"<< endl; 
  auto it = a.begin();

  for(it; it != a.end(); it++)
    cout<< "  "<<setw(20)<<left<<it->first<< it->second<< endl<<endl; 

  cout<<endl; 
}

// Driver code 
int main()
{
  vector<pair<string,unsigned int>> vecp; // vector of paier i.e each element of vector is a pair 
  vecp.push_back({"abc",3}); 
  vecp.push_back({"cde", 4});

  vecp[0].first = "efg"; // v[i] --> is a pair 
  vecp[0].second = 4;   

  // map<string, unsigned int> mp={{"ABC", 3}, {"CDE", 3}}; // intialization 
  // map <string, unsigned int> mp {{"ABC", 3}, {"CDE", 3}};  // inside map (key:value pairs) stored in {pair form}
  map<string, unsigned int> mp(vecp.begin(), vecp.end());  // intialization with vector of pair

  printMap(mp); // print map 
  cout<< "size of map(no of pair) = "<< mp.size()<< endl;  
  mp.clear(); 
  cout<< "size of map(no of pair) = "<< mp.size()<< endl;
  cout<<endl; 

  // inserting element "key: value"form in map
  // string   == string length 
  mp["Data-Type"] = strlen("Data-Type"); 
  mp["Variable"] = strlen("Variable"); 
  mp["Variable-Declaration"] = strlen("Variable-Declartion"); 
  mp["Operator"] = strlen("Operator"); 
  mp["Control-Statement"] = strlen("Control-Statement");

  printMap(mp);
  cout<<endl; 
  
  pair<string, unsigned int> p; 
  p = make_pair("LOOP", strlen("loop"));

  string temp = "Decision"; 
  size_t size = strlen("Decision"); 
  mp.insert({{temp, size}, {"jump", strlen("jump")}});  
  mp.insert(p); 
  printMap(mp); 
  cout<<endl; 

  if(mp.count("LOOP") != 0) // (mp.find("LOOP") != mp.end()); 
    cout<< "LOOP key is present "<< endl; 
  else
    cout<< "LOOP key is not present in map "<<  endl; 


  cin.get(); 
  system("cls"); 
  return 0; 
}