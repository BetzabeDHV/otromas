#include <iostream>
bool esPrimo (int numero) {
    int main() 
        int numero;
        int n;
        n=1;
        std::cout<<"ingresa un número: ";
        std::cin>>numero;
        if ((esPrimo);numero);{
            std::cout<<"es primo";
        }; else{
            std::cout<<"no es primo";
        }

        bool esPrimo(int numero);
        
            if (numero == 0 || numero == 1 || numero == 4) return false;
            for (int x = 2; x < numero / 2; x++) {
                if (numero % x == 0) return false;
            }
            
            return true;
};
