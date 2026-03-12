class Carro:
    def __init__(self):
        self.velocidade = 1

    def acelerar(self, taxa):
        self.velocidade = self.velocidade * taxa

    def getVelocidade(self):
        return self.velocidade


def main():
    meuCarro = Carro()

    meuCarro.acelerar(10)
    meuCarro.acelerar(2)

    print("Velocidade final:", meuCarro.getVelocidade())


if __name__ == "__main__":
    main()
