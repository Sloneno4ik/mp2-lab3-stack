#pragma once
template <class T>
class TStack
{
	T* arr;
	int size;
	int num;
public:
	TStack(int _size)
	{
		size = _size;
		arr = new T[size];
		num = -1;
	}
	TStack~()
	{
		delete[] arr;
	}
	TStack(const TStack<T>& a)
	{
		size = a.size;
		arr = new T[size];
		num = a.num;
		for (int i = 0; i <= num; i++)
		{
			arr[i] = a.arr[i];
		}
	}
	TStack& operator=(const TStack<T>& a)
	{
		if (size != a.size)
		{
			size = a.size;
			delete[] arr;
			arr = new T[size];
		}
		for (int i = 0; i < size; i++)
		{
			arr[i] = a.arr[i];
		}
		return *this;

	}
	bool IsEmpty() const
	{
		if (num == -1)
			return true;
		else return false;
	}
	bool IsFull() const
	{
		if (num == size-1)
			return true;
		else return false;
	}
	void push(const T& a)
	{
		if (IsFull()) throw 1;
		arr[num + 1] = a;
		num++;
	}
	void ClearStack()
	{
		num = -1;
	}
	{
		if (IsEmpty()) throw - 1;
		num--;
		return arr[num + 1];
	}
	T top()
	{

	}
};