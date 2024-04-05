/**
 * @brief This function prints the native handle of a thread
 * The native handle before a thread is joined has some value, whereas
 * the native handle after the thread has been joined has value 0.
 * On some compilers, the value returned by native_handle may be some index.
 */
#include <iostream>
#include <thread>

void hello()
{
    std::cout << "In the funciton \"hello\"";
}

int main()
{
    std::thread thr(hello);

    std::cout << "Native handle of thread thr before joining : " << thr.native_handle() << ;

    thr.join();

    std::cout << "Native handle of thread thr after joining : " << thr.native_handle();
}