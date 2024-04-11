#include <iostream>
#include <thread>
#include <mutex>

std::mutex mut;


int count = 0;

void task()
{
    mut.lock ();
    for (int i = 0; i < 5000; ++i)
    {

        ++count;
    }
    mut.unlock ();
}

int main()
{
    std::thread thr1(task);
    std::thread thr2(task);
    std::thread thr3(task);

    thr1.join();
    thr2.join();
    thr3.join();

    std::cout << "Final value of variable is : " << count << "\n";
}