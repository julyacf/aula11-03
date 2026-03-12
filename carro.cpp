#include <iostream>
using namespace std;

class Carro {

private:
    int velocidade;

public:
    Carro() {
        velocidade = 1;
    }

    void acelerar(int taxa) {
        velocidade = velocidade * taxa;
    }

    int getVelocidade() {
        return velocidade;
    }
};

int main() {

    Carro meuCarro;

    meuCarro.acelerar(10);
    meuCarro.acelerar(2);

    cout << "Velocidade final: " << meuCarro.getVelocidade() << endl;

    return 0;
}
