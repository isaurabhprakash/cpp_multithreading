/**
 * @brief A program to write hello, world on a different thread
 *
 */
#include <iostream>
#include <thread>

int main()
{
    std::thread thr(
        []()
        {
            std::cout << "hello, world\n";
        });

    thr.join();
}