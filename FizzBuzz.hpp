#ifndef __FIZZBUZZ_H__
#define __FIZZBUZZ_H__

#include <iostream>
#include <type_traits>

// template<class T> struct is_pair : std::

template <int A>
class FizzBuzz
{
public:
    struct pair_tag {};
    struct non_pair_tag {};

    void val(typename std::conditional<A%2, pair_tag, non_pair_tag>::type tag = {}) const
    {
        return get_val(tag);
    }

private:
    void get_val(FizzBuzz::pair_tag) const
    {
        std::cout << "YOOOOOOOO" << std::endl;
    }

    void get_val(FizzBuzz::non_pair_tag) const
    {
        std::cout << "Boss" << std::endl;
    }

public:
    FizzBuzz()
    {
    }
};


#endif // __FIZZBUZZ_H__
