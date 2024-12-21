#include "torre.h"

int torre::contagemPosicao = 0;

torre::torre() : posicao(contagemPosicao)
{
    topo = NULL;
    numeroDiscos = 0;
}

int torre::getNumeroDiscos() const
{
    return numeroDiscos;
}

int torre::getPosicao() const
{
    return posicao;
}

disco* torre::getTopo() const {
    return topo;
}

bool torre::vazia() const
{
    if (topo == NULL)
        return true;
    else
        return false;
}

bool torre::empilhar(disco* D)
{
    if (vazia())
    {
        topo = D;
        D->setProximo(nullptr);
        numeroDiscos++;
        return true;
    }
    else
    {
        if (D->getTamanho() > topo->getTamanho())
            return false;
        else
        {
            D->setProximo(topo);
            topo = D;
            numeroDiscos++;
            return true;
        }
    }
}

bool torre::desempilhar(disco*& D)
{
    if (vazia())
        return false;
    else
    {
        D = topo;
        topo = topo->getProximo();
        numeroDiscos--;
        return true;
    }
}


