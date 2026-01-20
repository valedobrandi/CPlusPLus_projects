#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void testBasicFunctionality() {
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}

void testExceptionOnInsufficientData() {
    try {
        Span sp(1);
        sp.addNumber(42);
        std::cout << sp.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
}

void testExceptionOnOverflow() {
    try {
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    } catch (const std::exception& e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
}

void testRangeInsertion() {
    std::vector<int> nums;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	nums.push_back(40);
	nums.push_back(50);
    Span sp(5);
    sp.addMultipleNumbers(nums.begin(), nums.end());

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}


void testLargeDataset() {
    const unsigned int size = 10000;
    Span sp(size);

    std::srand(std::time(NULL));
    std::vector<int> largeInput;
    for (unsigned int i = 0; i < size; ++i) {
        largeInput.push_back(std::rand());
    }

    sp.addMultipleNumbers(largeInput.begin(), largeInput.end());

    std::cout << "Shortest Span (large): " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span (large): " << sp.longestSpan() << std::endl;
}

int main( void ) {
	std::cout << "=== Basic Functionality Test ===" << std::endl;
    testBasicFunctionality();

    std::cout << "\n=== Overflow Exception Test ===" << std::endl;
    testExceptionOnOverflow();

    std::cout << "\n=== Insufficient Data Exception Test ===" << std::endl;
    testExceptionOnInsufficientData();

    std::cout << "\n=== Range Insertion Test ===" << std::endl;
    testRangeInsertion();

    std::cout << "\n=== Large Dataset Test ===" << std::endl;
    testLargeDataset();
    return 0;
}