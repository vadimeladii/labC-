//
// Created by vadimeladii on 15/10/15.
//

#include <string.h>
#include "Procesor.h"

Procesor::Procesor(char *name, int fregventa, char *tehnologiiFolosite, int marimeaMemoriei) {

    this->name=new char[strlen(name)+1];
    stpcpy(this->name,name);
    this->fregventa=fregventa;
    this->tehnologiiFolosite=new char[strlen(tehnologiiFolosite)+1];
    stpcpy(this->tehnologiiFolosite,tehnologiiFolosite);
    this->marimeaMemoriei=marimeaMemoriei;

}
char* Procesor::getName() const {
    return name;
}

int Procesor::getFregventa() const {
    return fregventa;
}


char *Procesor::getTehnologiiFolosite() const {
    return tehnologiiFolosite;
}


int Procesor::getMarimeaMemoriei() const {
    return marimeaMemoriei;
}

void Procesor::setName(char *name) {
    this->name=name;
}

void Procesor::setFregventa(int fregventa) {
    this->fregventa=fregventa;
}

void Procesor::setTehnologiiFolosite(char *tehnologiiFolosite) {
    this->tehnologiiFolosite=tehnologiiFolosite;
}

void Procesor::setMarimeaMemoriei(int marimeaMemoriei) {
    this->marimeaMemoriei=marimeaMemoriei;
}
