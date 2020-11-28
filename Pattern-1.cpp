/*
input 4
output:
         1
      1  2  1
   1  2  4  2  1
1  2  4  8  4  2  1

*/

#include<iostream>
using namespace std;

int main()
{
    int x = 1, y, z = 1;
    std::cin >> y;
    
    for(int i=0; i<y; i++) {x += 2;}
    std::string str = std::to_string(x);
    int space = str.size() + 2;
    x = 1;
    
    for(int i=y; i>0; i--) {
        for(int j=0; j<i; j++) {
            for(int s=0; s<space; s++) {std::cout << " ";}
        }
        for(int k=0; k<=z; k+=2) {
            std::cout << x;
            x += x;
            str = std::to_string(x);
            int sp = space - str.size();
            if(k != z-1) {
                for(int s=0; s<sp; s++) std::cout<< " ";
            }            
        }
        x /= 2;
        for(int k=0; k<=z; k+=2) {
            x /= 2;
            str = std::to_string(x);
            int sp = space - str.size();
            for(int s=0; s<sp; s++) std::cout << " ";
            
            if(i == y) {continue;}
            if(x != 0) {std::cout << x;}
        }
 
        std::cout << "\n";
        z += 2;
        x = 1;
    }
    return 0;
}
