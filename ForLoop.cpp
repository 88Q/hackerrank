#include <iostream>
#include <cstdio>

using std::cout;
using std::cin;

int main()
{
    int x, y;
    std::string numb[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> x >> y;
    
    for (int i = x; i <= y; i++){
        if (i >= 1 && i <= 9){
            cout << numb[i - 1] << std::endl;
        }
        else {
            
            if (i % 2 == 0){
                cout << "even" << std::endl;
            }
            else {
                cout << "odd";
            }
        }
    }
    
    
    
    return 0;
}
