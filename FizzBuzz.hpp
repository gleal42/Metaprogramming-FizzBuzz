#ifndef __FIZZBUZZ_H__
#define __FIZZBUZZ_H__

#include <iostream>
#include <type_traits>

template <int A, bool B = ((bool)(A%2)), bool C = ((bool)(A%3))>
class FizzBuzz
{
public:
    void operator()() const
    {
        std::cout << A << std::endl;
    }
};

template <int A, bool M2>
class FizzBuzz<A, false, M2>
{
public:
    void operator()() const
    {
        std::cout << "Fizz" << std::endl;
    }
};

template <int A, bool M1>
class FizzBuzz<A, M1, false>
{
public:
    void operator()() const
    {
        std::cout << "Buzz" << std::endl;
    }
};

template <int A>
class FizzBuzz<A, false, false>
{
public:
    void operator()() const
    {
        std::cout << "FizzBuzz" << std::endl;
    }
};

#endif // __FIZZBUZZ_H__
