#include<iostream>
#include<thread>

int main ()
{
    std::thread thr(
        [](){
            std::cout<<"hello, world\n";
        }
    );

    thr.join ();
}