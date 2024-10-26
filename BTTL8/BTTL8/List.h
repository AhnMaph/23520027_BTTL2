#pragma once
#ifndef List_H
#define List_H
#include <iostream>
class List
{
private:
	struct Node {
		double data;
		Node* prev;
		Node* next;
		Node(double val): data(val), prev(nullptr), next(nullptr){}
	};
	Node* head;
	Node* tail;
	unsigned int size;
public:
	List();
	void push_back(double x);
	void pop(double x);
	void popX(double x);
	void DoiX(int x, double y);
	void Xuat();
};
#endif
