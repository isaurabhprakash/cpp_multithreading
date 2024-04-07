#include <iostream>
#include <thread>

void print(std::string str)
{
    /**
     * Here, std::cout is the resource that is being shared by the 3 threads
     * thread1, thread2 and thread3. While one thread is still usign std::cout,
     * another thread acquires it and startes using it. Hence the outputs come
     * jumbled.
     *
     */
    std::cout << str[0] << str[1] << str[2] << "\n";
}

int main()
{
    std::thread thr1(print, "abc");
    std::thread thr2(print, "def");
    std::thread thr3(print, "xyz");

    thr1.join();
    thr2.join();
    thr3.join();
}