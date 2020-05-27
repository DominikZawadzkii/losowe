#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 

	int a;
	int main()
{
	cout<<"Twoje liczby to: " <<endl ; 
	srand(time(NULL)); 
	
	for(int i=1; i<49; i++)
	{
	int a =( std::rand() % 49 ) + 1;
	cout << a << "," ; 
	}

return 0; 
}


