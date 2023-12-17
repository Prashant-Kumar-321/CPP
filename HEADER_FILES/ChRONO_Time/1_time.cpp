#include<iostream>
#include<chrono>
#include<thread>

using namespace std; 
using namespace std::chrono;// seconds, system_clock, nanoseconds
using namespace std::this_thread; // sleep_for(), sleep_until();
using namespace std::chrono_literals; // ns, us, ms, s, h;  

int main(int agrc, char*agrv[])
{
  cout<< "Message Before Time"<< endl; 

  std::chrono::seconds fiveSeconds = seconds(5); // fiveSeconds(5);  
  // sleep_for(fiveSeconds); 
  sleep_for(4s); // pause execution of program for 5 second 

  cout<<"\nMessage after five second"<< endl; 

  return 0; 
} 
/*
*This is an example of type aliasing in C++. Type aliasing allows you to create a new name for a type. In this case, 
std::chrono::seconds
 is an alias for 
std::chrono::duration<long long>
.
*
*/

/*std::this_thread::sleep_for()
 sleep_for()
 function pauses the execution of a program for a specified amount of time.
 This is useful for delaying the execution of a 
 certain action, such as displaying a 
 message or waiting for a response from a server.
*/
