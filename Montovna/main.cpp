//
//  main.cpp
//  Montovna
//
//  Created by Jaroslav Bažant on 11.12.17.
//  Copyright © 2017 Jaroslav Bažant. All rights reserved.
//

#include <iostream>
using namespace std;

class Uzel {
    int cas_vyroby;
    Uzel *sousede[];
};

class Zasobnik {
private:
    int vrchol;
    int velikost;
    Uzel *hodnoty;
public:
    Zasobnik (int velikost){
        this->velikost = velikost;
        hodnoty = new Uzel[velikost];
        vrchol = -1;
    }
    
    ~Zasobnik(){
        delete[] hodnoty;
    }
    
    void Push(Uzel u){ //tady možná testovat plnost
        vrchol++;
        hodnoty[vrchol] = u;
    }
    
    Uzel pop(){
        Uzel u = hodnoty[vrchol];
        vrchol--;
        return u;
    }
    
    bool isEmpty(){
        return vrchol == -1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
