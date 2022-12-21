#include <iostream>
#include <queue>

using namespace std;

class Stack 
{
	std::queue<int> _Main_queue;
	std::queue<int> _Sub_queue;

public:
	/** Push element x onto stack. */
	void push(int x) 
	{
		int iSize = _Main_queue.size();
		for (int i = 0; i < iSize; i++)
		{
			_Sub_queue.push(_Main_queue.front());
			_Main_queue.pop();
		}

		_Main_queue.push(x);

		iSize = _Sub_queue.size();
		for (int i = 0; i < iSize; i++)
		{
			_Main_queue.push(_Sub_queue.front());
			_Sub_queue.pop();
		}
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() 
	{
		if (_Main_queue.size() != 0)
		{
			int Pop = _Main_queue.front();

			_Main_queue.pop();

			return Pop;
		}
	}

	/** Get the top element. */
	int top() const 
	{
		if (_Main_queue.size() != 0)
			return _Main_queue.front();
	}

	/** Returns whether the stack is empty. */
	bool empty() const 
	{
		return _Main_queue.size() == 0;
	}
};