// pasando cadenas a apuntadores 
#include <iostream>
#include <stdio.h>
int main(int argc, char* argv[]){
	for(int i=0;i<argc;i++)
		std::cout << "argv[" << i << "]" << argv[i] << std::endl;
 	
	return 0;
}