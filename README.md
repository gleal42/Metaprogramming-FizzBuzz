# FizzBuzz with Metaprogramming

FizzBuzz is a typical Software Engineering interview problem.

The typical inteplementation is to do a simple "if" "else if" "else".

However I wanted to see if we could make this program faster.

I used 2 approaches:
- 1st Specialization of class templates
- 2nd Overload of functions using tags
<br/>
<br/>

## 1st Specialization of class templates

Templates allow for non-type template parameters:

`class_template<50>`

So at runtime I knew that we could probably assert if these numbers were divisible by 3 and 5 in order for this 
`if else if else` logic to be passed to the compiler. And then each constructor would then print the right message.

> Please check FizzBuzz.hpp

___
<br/>

## 2nd Overload of functions using tags
Basically at compile time we would generate a type tag that would then be used to overload a function

> Please check FizzBuzzTags.hpp

___
<br/>

## Compile Times
`time make`

#### Regular FizzBuzz compilation times for 10000 loop (only one sample)
real    0m1.291s
user    0m1.165s
sys     0m0.075s

#### Template FizzBuzz compilation times for loop_const<10000>(); (only one sample)
real    0m9.769s
user    0m9.472s
sys     0m0.248s

### Run Times
`time ./fizzbuzz`

#### Template FizzBuzz (50 samples)

**Best**
- real    0m0.013s
- user    0m0.000s
- sys     0m0.013s

**Worst**
- real    0m0.029s
- user    0m0.010s
- sys     0m0.020s

#### Regular FizzBuzz (50 samples)

**Best**
- real    0m0.013s
- user    0m0.000s
- sys     0m0.013s

**Worst**
- real    0m0.031s
- user    0m0.000s
- sys     0m0.031s

## Conclusion
### Don't use my implementation

<br/>

When I checked the runtime performance of the typical implementation versus my metaprogramming solution I didn't notice much difference.

However I did notice a difference in compile times, which were **9 times higher**!

However, this was an interesting exercise to see the capabilities of the compiler.

The compiler was able to find the right functions to call, however calling a function is also expensive. Not sure if more or less expensive and 3 conditional statements but definitely not very significant.

I assume that `std::cout` also caused a lot of variation in my results.