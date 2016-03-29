#include <iostream>
#include <thread>

void hello()
{
    std::cout<<"Hello Concurrent Max's World\n";
}

int main()
{
    std::thread t(hello);
    t.join();
}
