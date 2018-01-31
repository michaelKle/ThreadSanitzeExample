#include <iostream>
#include <chrono>
#include <thread>

int main(int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;

    int shared = 0;
    std::thread t1([&shared](){
        while (shared < 100000)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            ++shared;
        }
    });

    std::thread t2([&shared](){
        while (shared < 100000)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            ++shared;
        }
    });

    t1.join();
    t2.join();

    return 0;
}
