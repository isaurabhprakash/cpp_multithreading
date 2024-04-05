#include<iostream>
#include<thread>

void hello ()
{
    std::cout<<"hello, from function hello(). thread id is : "<<std::this_thread::get_id()<<"\n";
}

int main ()
{
    std::thread thr(hello);

    std::cout<<"Thread id of {main} thread: "<<std::this_thread::get_id ()<<"\n";

    std::cout<<"Thread id of {thr} thread : "<<thr.get_id ()<<"\n";

    thr.join ();
}