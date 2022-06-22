#include <iostream>
#include "Queue.h"

int main()
{
	{
	CQueue queue ; 
	int x = 0 ; 
	queue << 3 << 5 << 10 ; 
	while(true)
	{
		if(!queue)
		{
			break ;
		}
		queue >> x ; 
		std::cout << x << ' ' ; 
	} 
	std::cout << '\n' ; 
	}
	_CrtDumpMemoryLeaks() ; // Check memory leaks.
	return 0 ;  
}