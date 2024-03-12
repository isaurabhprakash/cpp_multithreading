#include<iostream>
#include<thread>

void hello ()
{
    std::cout<<"hello, world\n";
}

int main ()
{
    std::thread thr(hello);

    thr.join ();
}