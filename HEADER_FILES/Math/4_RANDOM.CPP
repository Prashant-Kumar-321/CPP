#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std; 

int const NUM = 1000; // NUM+1 = 10001
int const x = 29; 

// This function will return a random interger in the range (min to max)
int Random(int min, int max)
{
  int randomNum; 
  randomNum = (rand()%(max-min+1)) + min;

  return randomNum;  
}

// This function will return a random floating point value in the range (min to max )
double dRandom(int min, int max){
  int const NUM = 1000; 
  int MAX = max + (min<0)?abs(min): 0; 

  double random_Num;
  random_Num = double(rand() % ((NUM/MAX)*MAX +1)) / (NUM/MAX) + min; 
  cout<<random_Num<<endl; 

  return random_Num; 
}

// Driver Function 
int main()
{ 
  srand(time(NULL)); 
  
  // for(int x=0; x<10; x++){
  //   cout<< rand() % (NUM+1)<<"  "; 
  // }
  // cout<<endl;

  // int i=0;
  // int maxd = 5;  
  // for(int x=0; x<200 ; x++,i++){
  //  cout<< double(rand() % ((NUM/maxd)*maxd +1)) / (NUM/maxd) << endl;  // expression return value in the range <<-->>[0, NUM(100)]

  //  if(i==9){
  //   i=0; 
  //   cout<<endl; 
  //  }
  // }

  double float_Random(int min, int max); 

  for(int x=0; x<100; x++){
    cout<<float_Random(-3,7)<<endl; 
  }

  return 0; 
}

double float_Random(int min, int max){
  int random_Num = (rand() % (max*x - min*x + 1)) + min*x ; // random intger value 

  return double(random_Num) / x;   
}