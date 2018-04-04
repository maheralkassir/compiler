#include "While.h"

While::While(Expression *condition, Statement *statement,Node *parent) :Statement(parent)
{
	this->condition = condition; 
	this->statement = statement; 
}

int While::print(int nodeCnt){
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'While', shape: 'box', color:'#fc4e6b'},", currentId);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = condition->print(nodeCnt + 1);

	if (statement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statement->print(nodeCnt + 1);
	}

	return nodeCnt;
}

string While::getType() {
	return "while";
}

While::~While()
{
}
