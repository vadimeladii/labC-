//
// Created by vadimeladii on 15/10/15.
//

#ifndef LAB4_B_PROCESOR_H
#define LAB4_B_PROCESOR_H


class Procesor {
private:
    char* name;
    int fregventa;
    char* tehnologiiFolosite;
    int marimeaMemoriei;
public:
    Procesor(char* name,int fregventa,char*tehnologiiFolosite,int marimeaMemoriei);
    void setName(char* name);
    void setFregventa(int  fregventa);
    void setTehnologiiFolosite(char* tehnologiiFolosite);
    void setMarimeaMemoriei(int marimeaMemoriei);
    char *getName() const;
    int getFregventa() const;
    char *getTehnologiiFolosite() const ;
    int getMarimeaMemoriei() const;
};


#endif //LAB4_B_PROCESOR_H
