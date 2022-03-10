//Given a positive integer to split, x, return the maximum product using rational numbers.
#include <iostream>

using namespace std;

float split(float x) 
{
    float result = 0;
    float newResult = 0;
    

    for (float i = 1; i <= 100; i++)
    {
        newResult = powf((x / i), i);
        if (result < newResult)
            result = newResult;
        else if (result > newResult)
            break;
    }
    return result;
}

int main()
{
    float x;
    cin >> x;
    cout << split(x);
}

