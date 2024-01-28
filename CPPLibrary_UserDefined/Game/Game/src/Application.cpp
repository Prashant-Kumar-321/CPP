// Relative path to current Application.cpp file 
// It is not ideal way to do that 
//#include "../../Engine/src/Engine.h"

// Set absolute path in Properties page of Game 
// project 

#include "Engine.h"

#include<iostream>


int main(int argc, char** argv)
{
	engine::printMessage();

	std::cin.get(); 
}


/*
* My library is within the same Solution 
* so I don't need to set property page of Game for
* linking the library 
* 
* We can just give Reference of Engine Library 
*/