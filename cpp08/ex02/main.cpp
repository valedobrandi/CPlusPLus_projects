#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

void print(std::string msg) {
	std::cout << std::endl << "===== " << msg << " =====" <<std::endl;
}

void exercicePDFTest( void ) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void listContaineTest( void ) {
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << *mstack.begin() << std::endl;
	mstack.erase(mstack.begin());
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int, std::list<int> > s(mstack);
}

void vectorContaineTest( void ) {
	std::vector<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << *mstack.begin() << std::endl;
	mstack.erase(mstack.begin());
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int, std::vector<int> > s(mstack);
}

void testListComparison() {
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.push_back(3);
    lst.push_back(42);

    std::cout << "List contents (forward): ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "List contents (reverse): ";
    for (std::list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit)
        std::cout << *rit << " ";
    std::cout << std::endl;
}


int main( void ) {
    print("Exercice PDF Test");
	exercicePDFTest();
	print("List Container Test");
	listContaineTest();
	print("Vector Container Test");
	vectorContaineTest();
	print("std::list Comparison");
	testListComparison();
    return 0;
}