#ifndef __FIZZBUZZ_H__
#define __FIZZBUZZ_H__

#include <iostream>
#include <type_traits>

template <int A, bool M1, bool M2>
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
        std::cout << "Fizz" << std::endl;
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

template <int A>
class FizzBuz
{
public:
    void operator()() const
    {
        return FizzBuzz<A, A%2, A%3>()();
    }
};

#endif // __FIZZBUZZ_H__
