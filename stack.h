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
};