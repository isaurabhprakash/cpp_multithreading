#include <iostream>
#include <thread>

void playfizzbuzz()
{
    int number = 1;
    constexpr char *names[] = {"Abdul", "Bart", "Claudia", "Divya"};

    while (number != 100)
    {

        char *name = names[(number - 1) % 4];

        if (number % 15 == 0)
        {

            std::cout << name << " says fizzbuzz\n";
        }
        else if (number % 3 == 0)
        {

            std::cout << name << " says fizz\n";
        }
        else if (number % 5 == 0)
        {

            std::cout << name << " says buzz\n";
        }
        else
        {

            std::cout << name << " says " << number << "\n";
        }

        number++;
    }
}

int main()
{
    std::thread fizzbuzz(playfizzbuzz);

    fizzbuzz.join();
}