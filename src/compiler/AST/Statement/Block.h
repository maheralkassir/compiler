#pragma once
#include "Statement.h"
class Block :public Statement
{
	vector<Node*> statements;
public:
	Block(Node *parent);
	
	void add(Node* statement);
	
	string getType();
	
	int print(int);

	~Block();
};
