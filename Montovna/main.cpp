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
public:
    int cas_vyroby = 0; //čas výroby součástky
    int oznacen = 0; //navštíven = 1, uzavřen = 2
    Uzel *sousede = nullptr; //pole pro hrany
    
    Uzel(){
    }
    
    Uzel(int cas){
        cas_vyroby = cas;
    }
    
    ~Uzel(){
        if (sousede != nullptr) {
            delete[] sousede;
        }
    }
    
    void Pridej_sousedy(int pocet){
        sousede = new Uzel[pocet];
    }
};

class Zasobnik {
public:
    int vrchol;
    int velikost;
    Uzel *hodnoty;
    Zasobnik (int vel){
        velikost = vel;
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
    
    Uzel Pop(){
        Uzel u = hodnoty[vrchol];
        vrchol--;
        return u;
    }
    
    bool IsEmpty(){
        return vrchol == -1;
    }
};

void NactiCasyVyroby(Zasobnik z){
    for (int i = 0; i < z.velikost; i++) {
        int cas;
        cin >> cas;
        Uzel u = Uzel(cas);
        z.hodnoty[i] = u;
    }
    //metoda pro náčet grafu
}

int main(int argc, const char * argv[]) {
    int pocet_soucastek;
    cin >> pocet_soucastek;
    int casySoucastek[pocet_soucastek];
    Zasobnik z(pocet_soucastek);
    NactiCasyVyroby(z);
    cout << "hotovo";
    return 0;
}
