#ifndef __LOOP_CONST_TAGS_H__
#define __LOOP_CONST_TAGS_H__

#include "FizzBuzzTags.hpp"

template<int N>
struct A {
    constexpr A() : arr() {
        for (auto i = 0; i != N; ++i)
            arr[i] = i; 
    }
    int arr[N];
};

static constexpr auto array = A<1001>();

template<int I>
void loop_const()
{
    loop_const<I-1>();
    FizzBuzz<array.arr[I]>()();
}

template<>
void loop_const<1>()
{
    FizzBuzz<array.arr[1]>()();
}

#endif // __LOOP_CONST_TAGS_H__
