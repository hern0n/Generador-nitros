#include<iostream>
#include<ctime>
#include<cstdlib>
#include<time.h>
using namespace std;
string crear(int leng) {
    string codigo = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char a;
    string b;
    for (int i = 0; i < leng; i++) {
        a = codigo[rand() % codigo.size()];

        b += a;
        
    }
    return b;
}
void generar(int cant, int leng) {
    for (int i = 0; i < cant; i++) {
        cout << "https://discord.gift/" << crear(leng) << endl;
    }
}
int main()
{
    srand(time(NULL));
    generar(3, 16);
    system("pause");
}