#ifndef __LOOP_H__
#define __LOOP_H__

#include "FizzBuzz.hpp"

// template<int N>
// struct A {
//     constexpr A() : arr() {
//         for (auto i = 0; i != N; ++i)
//             arr[i] = i; 
//     }
//     int arr[N];
// };
// static constexpr auto array = A<10001>();
// template<int I>
// void loop_const()
// {
//     loop_const<I-1>();
//     FizzBuzz<array.arr[I]>();
// }

template<int I>
void loop_const()
{
    loop_const<I-1>();
    FizzBuzz<I>();
}

template<>
void loop_const<1>()
{
    FizzBuzz<1>();
}

#endif // __LOOP_H__
