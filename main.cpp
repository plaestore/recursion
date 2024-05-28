                        // Recursion //
#include <iostream>

using namespace std;


    int factorialFinder(int x){
        if (x ==1){
            return 1;  //this is a base case, else the function would run forever //
        }else{
        return x*factorialFinder(x-1);
        }
    }



int main()
{
    cout << factorialFinder(5)<< endl;

    return 0;
}
