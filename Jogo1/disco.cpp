#include "disco.h"
disco::disco(int tam) {
	tamanho = tam;
	pr�ximo = nullptr;
}
int disco::getTamanho() const {
	return tamanho;
}
disco* disco::getProximo() const {
	return pr�ximo;
}
void disco::setTamanho(int tam) {
	this->tamanho = tam;
}
void disco::setProximo(disco* pro) {
	this->pr�ximo = pro;
}