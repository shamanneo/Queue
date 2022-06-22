#pragma once

struct Node 
{
	int data ; 
	Node *next ; 
	Node(int _data = 0, Node *_next = nullptr)
	{
		data = _data ; 
		next = _next ; 
	} 
} ; 

class CQueue
{ 
	private :
		Node *m_head ;
		Node *m_tail ; 
		int m_count ; 
	public :
		CQueue() ; 
		~CQueue() ; 
	public :
		CQueue &operator << (int data) ; // Enqueue
		void operator >> (int &data) ; // Dequeue
		bool operator ! () ; // IsFull
} ;

