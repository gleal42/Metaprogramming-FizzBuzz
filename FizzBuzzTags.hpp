#ifndef __FIZZBUZZTAGS_H__
#define __FIZZBUZZTAGS_H__

#include <iostream>
#include <type_traits>

template <bool M1, bool M2, typename NU, typename FZ, typename BZ, typename FB>
struct dconv { using type = NU;};

template <bool M2, typename NU, typename FZ, typename BZ, typename FB>
struct dconv<false, M2, NU, FZ, BZ, FB>
{using type = FZ;};

template <bool M1, typename NU, typename FZ, typename BZ, typename FB>
struct dconv<M1, false, NU, FZ, BZ, FB>
{using type = BZ;};

template <typename NU, typename FZ, typename BZ, typename FB>
struct dconv<false, false, NU, FZ, BZ, FB>
{using type = FB;};

template <int A>
class FizzBuzz
{
public:
    struct nbr_tag{};
    struct fizz_tag{};
    struct buzz_tag{};
    struct fizz_buzz_tag{};
    void operator()(typename dconv<A % 2, A % 3, nbr_tag, fizz_tag, buzz_tag, fizz_buzz_tag>::type tag = {}) const
    {
        return print(tag);
    }
private:
    void print(FizzBuzz::nbr_tag) const
    {
        std::cout << A << std::endl;
    }
    void print(FizzBuzz::fizz_tag) const
    {
        std::cout << "Fizz" << std::endl;
    }
    void print(FizzBuzz::buzz_tag) const
    {
        std::cout << "Buzz" << std::endl;
    }
    void print(FizzBuzz::fizz_buzz_tag) const
    {
        std::cout << "FizzBuzz" << std::endl;
    }
};

#endif // __FIZZBUZZTAGS_H__
