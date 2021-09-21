#include <iostream>

template<typename T>
class Stack
{
private:
    int size;
    int current;
    T* arr;

public:
    Stack(int NewSize)
    {
        size = NewSize;
        current = 0;
        arr = new T[size];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(T elem)
    {
        if (current == size)
        {
            std::cout << "Stack is full" << std::endl;
        }
        else
        {
            arr[current] = elem;
            current++;
        }
    }

    T pop()
    {
        if (current == 0)
        {
            std::cout << "Stack is empty." << std::endl;
            return 0;
        }
        else
        {
            current--;
            return arr[current];
        }
    }
};

int main()
{
    Stack<int> stack(5);
    stack.push(1);
    std::cout << stack.pop() << std::endl;
    stack.push(23);
    stack.push(3);
    stack.push(32);
    std::cout << stack.pop() << std::endl;
    stack.push(67);
    std::cout << stack.pop() << std::endl;
    stack.push(67);
    stack.push(67);
    stack.push(67);
    stack.push(67);
    stack.push(67);


    return 0;
}