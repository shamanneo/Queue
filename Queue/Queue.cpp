#include "Queue.h"

CQueue::CQueue()
{
	m_head = nullptr ; 
	m_tail = nullptr ; 
	m_count = 0 ; 
} 

CQueue::~CQueue()
{
	while(m_count-- != 0)
	{
		Node *tempNode = m_head ; 
		m_head = m_head->next ; 
		delete tempNode ; 
	}
} 

CQueue &CQueue::operator << (int data)
{
	Node *newNode = new Node { data } ; 
	if(m_count == 0) 
	{
		m_head = m_tail = newNode ; 
	}
	else 
	{
		m_tail->next = newNode ; 
		m_tail = newNode ; 
	}
	m_count++ ; 
	return *this ; 
} 

void CQueue::operator >> (int &data)
{
	if(m_count == 0)
	{
		return ; 
	}
	else if(m_count == 1)
	{
		data = m_head->data ;
		delete m_head ; 
		m_head = m_tail = nullptr ; 
		m_count-- ; 
	}
	else 
	{
		Node *tempNode = m_head ; 
		m_head = m_head->next ; 
		data = tempNode->data ;
		delete tempNode ; 
		m_count-- ; 
	}
} 

bool CQueue::operator ! ()
{
	return (m_count == 0) ; 
} 