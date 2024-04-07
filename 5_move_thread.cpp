#include <iostream>
#include <thread>
#include <chrono>

void hello()
{
    using namespace std::chrono_literals;

    std::this_thread::sleep_for(2s);

    std::cout << "hello, world\n";
}

void func(std::thread thr)
{
    std::cout << "\nhello from the function func\n";

    std::cout << "Thread id of current thread :" << std::this_thread::get_id() << "\n";

    std::cout << "Thread id of passed thread : " << thr.get_id() << "\n";

    thr.join();
}

int main()
{
    std::thread thr(hello);

    std::cout << "Thread id of main thread : " << std::this_thread::get_id() << "\n";

    std::cout << "Thread id of thr thread : " << thr.get_id() << "\n";

    func(std::move(thr));

    std::cout << "Thread id of thr after moving : " << thr.get_id() << "\n";

    // This will give a compilation error
    // thr.join();
}