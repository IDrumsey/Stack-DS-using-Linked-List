#pragma once
#include <iostream>

struct Node
{
	Node();
	Node* next;
	char data;
};

struct stack
{
	Node* Top = NULL;

	stack();
	~stack();

	void Push();
	void Pop();
	void Peek();
	void Print();

	bool IsEmpty();

	Node* createNode();
};

