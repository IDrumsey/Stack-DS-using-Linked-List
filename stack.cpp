#include "stack.h"

using std::cout;
using std::cin;
using std::endl;

stack::stack()
{
}

stack::~stack()
{
}

void stack::Push()
{
	Node* newNode = createNode();

	if (IsEmpty())
	{
		cout << "IsEmpty\n";
		Top = newNode;
	}
	else
	{
		Node* temp = Top;

		Top = newNode;
		Top->next = temp;
	}
	
}

void stack::Pop()
{
	if (IsEmpty())
	{
		cout << "Empty List!\n";
	}
	else
	{
		Node* reference = Top;

		Top = Top->next;
		delete reference;
	}
}

void stack::Peek()
{
	if (IsEmpty())
	{
		cout << "Empty List!\n";
	}
	else
	{
		cout << "Top data : " << Top->data << endl;
	}
}

void stack::Print()
{
	if (IsEmpty())
	{
		cout << "Stack Empty!\n";
	}
	else
	{
		Node* temp = Top;

		while (temp != NULL)
		{
			cout << temp->data << endl;

			temp = temp->next;
		}
	}
}



bool stack::IsEmpty()
{
	if (Top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

Node* stack::createNode()
{
	Node* newNode = new Node;

	cout << "Data : ";
	cin >> newNode->data;

	return newNode;
}

Node::Node()
{
	next = NULL;
	data = NULL;
}
