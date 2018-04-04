#pragma once
#include<bits/stdc++.h>
using namespace std; 
class Node
{
protected:
	Node* parent;

public:
	static FILE* edgesFile, *nodesFile;

	static void openFiles();
	static void closeFiles();


	static Node* current;

	Node(){}
		
	Node(Node* parent);
	
	static void setCurrent(Node* current);

	static void Up();

	
	virtual string getType() = 0;
	
	virtual int print(int) = 0;
	
	~Node();
};
