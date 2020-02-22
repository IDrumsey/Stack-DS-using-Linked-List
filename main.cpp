#include "stack.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
	stack* mystack = new stack();

	int choice;

	while (1)
	{
		cout << "(0)Exit\n(1)Push\n(2)Pop\n(3)Peek\n(4)Print\nChoice : ";
		cin >> choice;

		switch (choice)
		{
		case 0:
		{
			delete mystack;
			exit(0);
		}
		case 1:
		{
			mystack->Push();
			break;
		}
		case 2:
		{
			mystack->Pop();
			break;
		}
		case 3:
		{
			mystack->Peek();
			break;
		}
		case 4:
		{
			mystack->Print();
			break;
		}

		}
		system("pause");
		system("cls");
	}
	return 0;
}