#include <bits/stdc++.h>
using namespace std;
/**
 * Its safe and simple but it uses the extra space.
 */
void swapUsingTempVariable(int &a, int &b)
{
    int temp = a; // first we assign value of a in temp variable now the a is empty(technically).
    a = b;        // now in a we assign the value of b and then b is empty(technically).
    b = temp;     // now we will assign the value of temp in b
}

/**
 * using arithmatic operator +,- , no extra space but cause the issue of integer overflow
 */
void swapUsingArithmetic(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/**
 * using *,/ fails when b==0
 */
void swapUsingMultiplication(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}

/**
 * in this case no extra space & no overflow but it is less readable
 */
void swapUsingXOR(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

/**
 * using STL
 */
void swapUsingSTL(int &a, int &b)
{
    swap(a, b);
}

/**
 * tuple unbacking not good approach
 */
void swapUsingTuple(int &a, int &b)
{
    tie(a, b) = make_tuple(b, a);
}

int main()
{
    int a = 3, b = 4;
    swapUsingTuple(a, b);
    cout << a << " " << b << endl;
}

/**
🎯 Final Conclusion
1️⃣ Best Performance → Temporary Variable & std::swap()
2️⃣ Best No Extra Space Approach → XOR Method
3️⃣ Avoid Addition/Subtraction & Multiplication/Division due to overflow issues
4️⃣ Tuple Swap is not efficient and adds unnecessary complexity
must read time analysis of swap.md
 */