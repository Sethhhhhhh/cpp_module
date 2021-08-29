#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(void) {

    MutantStack<int> mstack;
    std::cout << "===== MutantStack =====" << std::endl;
    std::cout << "MutantStack" << std::endl;

    std::cout << "push -> 5, 17" << std::endl;
    mstack.push(5);
    mstack.push(17);

    std::cout << "top :\t" << mstack.top() << std::endl;
    std::cout << "pop" << std::endl;
    mstack.pop();
    std::cout << "size :\t" << mstack.size() << std::endl;

    std::cout << "push -> 3, 5, 737" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    std::cout << "top :\t" << mstack.top() << std::endl;
    std::cout << "size :\t" << mstack.size() << std::endl;

    std::cout << "\n======== List ========" << std::endl;
    std::cout << "List" << std::endl;
    std::list<int> list;
    
    std::cout << "push -> 5, 17" << std::endl;
    list.push_back(5);
    list.push_back(17);
    
    std::cout << "top :\t" << list.back() << std::endl;
    std::cout << "pop" << std::endl;
    
    list.pop_back();
    std::cout << "size :\t" << list.size() << std::endl;
    
    std::cout << "push -> 3, 5, 737" << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    
    std::cout << "top :\t" << list.back() << std::endl;
    std::cout << "size :\t" << list.size() << std::endl;



    std::cout << "\nMutantStack => [5, 3, 5, 737]" << std::endl;
    std::cout << "MutantStack iterator" << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "iterator it(begin) :\t" << *it << std::endl;
    std::cout << "display all elements" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }


    std::cout << "\nList => [5, 3, 5, 737]" << std::endl;
    std::cout << "List iterator" << std::endl;

    std::list<int>::iterator lit = list.begin();
    std::list<int>::iterator lite = list.end();

    std::cout << "iterator lit(begin) :\t" << *lit << std::endl;
    std::cout << "display all elements" << std::endl;

    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }

    std::cout << "\nCopy Constructor" << std::endl;
    std::stack<int> s(mstack);
 
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(42);
 
    std::cout << "stack s top :\t\t\t" << s.top() << std::endl;
    std::cout << "stack s size :\t\t\t" << s.size() << std::endl;
    std::cout << "MutantStack mstack top :\t" << mstack.top() << std::endl;
    std::cout << "MutantStack mstack size :\t" << mstack.size() << std::endl;

return 0;
}