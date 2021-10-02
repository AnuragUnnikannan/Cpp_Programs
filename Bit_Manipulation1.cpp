#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*  Let n = 5 and i = 2. Binary equivalent of 5 => 0101

    here, getBit will determine the digit at position 2 (0-based indexing and starting from right)
    Example of left shift => 1 << 2  => 0001 << 2 => 0100

    0101 & 0100 = 0100, which will return output as 1, since it is not equal to 0
*/
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

/*
    setBit sets a bit to 1 at a given position.

    Let n=5 and i=1. 1 << 1 => 0001 << 1 => 0010

    0010 | 0101 = 0111. It will return 7, the decimal equivalent of the result.
*/
int setBit(int n, int pos)
{
    return (n | 1 << pos);
}

/*
    clearBit sets a bit to 0 at a given position

    Let n=5 and i=2. 1 << 2 => 0001 << 2 => 0100

    ~0100 = 1011    0101 & 1011 = 0001
*/
int clearBit(int n, int pos)
{
    return (n & ~(1 << pos));
}

/*
    updateBit updates a bit with our choice at a given position. Basically, it's just clearBit followed by setBit.

    Let n=5 and i=1. 1 << 1 => 0001 << 1 => 0010

    ~0010 = 1101   0101 & 1101 = 0101

    1 << 1 => 0010   0101 | 0010 = 0111. Answer will be 7
*/
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main()
{
    cout << "getBit(5, 2) = " << getBit(5, 2) << endl;
    cout << "setBit(5, 1) = " << setBit(5, 1) << endl;
    cout << "clearBit(5, 2) = " << clearBit(5, 2) << endl;
    cout << "updateBit(5, 1) = " << updateBit(5, 1, 1) << endl;
    return 0;
}