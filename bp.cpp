#include "bp.hpp"
#include "hw4.hpp"
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

vector<string> buffer;
long long tempVarCount = 0;

int next(){
    return buffer.size();    
}

void emit(string s){
    buffer.insert(buffer.end(), s);
}

void bp(list<int>& l, int address){
    ostringstream os;
    os << address;
    for(list<int>::iterator i = l.begin(); i != l.end(); i++){
	buffer[*i] += os.str();
    }
}

void printBuffer(){
    for(int i = 0; i < buffer.size(); i++){
	cout << buffer[i] << endl;
    }
}

list<int> makelist(int litem)
{
	list<int> newList;
	newList.push_front(litem);
	return newList;
}

stack<CaseElem> makestack(CaseElem litem)
{
	stack<CaseElem> newStack;
	newStack.push(litem);
	return newStack;
}

list<int> merge(list<int> l1,list<int> l2)
{
	list<int> newList;
	newList.merge(l1);
	newList.merge(l2);
	return newList;
}

string newTemp(){
	string newVar = "s[" + std::to_string(tempVarCount++) + "]";
	return newVar;
}

