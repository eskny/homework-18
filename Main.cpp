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
            size++;
            T* tmp = new T[size];
                     
            for (int i = 0; i < size-1 ; i++)
            {
                tmp[i] = arr[i];
            }

            delete[]arr;
            arr = tmp;
            arr[current] = elem;
            current++;
            
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
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    stack.push(7);
    stack.push(8);
    stack.push(9);
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
  
    return 0;
}