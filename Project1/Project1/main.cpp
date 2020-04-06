#include <iostream>

using namespace std;

struct Node
{
	Node* next;
	int data;

	Node(int data)
	{
		this->data = data;
		next = nullptr;
	}
};

struct List
{
	Node* head;
	int length;

	List()
	{
		head = nullptr;
		length = 0;
	}
	
	void add(int data)
	{
		if (head == nullptr)
		{
			head = new Node(data);
			++length;
			return;
		}
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = new Node(data);
		++length;
	}

	void print()
	{
		Node* temp = head;
		while (temp->next != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
};


int main()
{
	List l;

	for (int i = 0; i < 5; ++i)
	{
		l.add(i);
	}

	l.print();

	return 0;
}