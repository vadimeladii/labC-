//
// Created by vadimeladii on 08/10/15.
//

#include "Time.h"
#include <iostream>


Time&  operator+(Time& time,int secundes) {
    time.secundes +=secundes;
    return time;

}

Time& operator-(Time& time,int secundes) {
    time.secundes -=secundes;
    return time;

}

Time&  operator+(Time& time,Time& time1) {
    time.heures += time1.heures;
    time.minutes += time1.minutes;
    time.secundes += time1.secundes;

    return time;

}

Time& operator-(Time& time,Time& time1) {

    time.heures -= time1.heures;
    time.minutes -= time1.minutes;
    time.secundes -= time1.secundes;

    return time;

}

Time::Time(int heures, int minutes, int secundes) {
    this->secundes =secundes;
    this->minutes =minutes;
    this->heures =heures;
}

void Time::printf() {
    timeDroite();
    std::cout << this->heures << ":";
    std::cout << this->minutes << ":";
    std::cout << this->secundes << std::endl ;
    std::cout << "----------------------------------";
    std::cout << std::endl;

}

void Time::timeDroite() {
    if(heures<0){
        std::cout << "eroarea";
    }
    if(secundes > 60){
        this->minutes++;
        this->secundes%=60;
    }
    if(minutes > 60){
        this->heures++;
        this->minutes%=60;
    }
    if(minutes<0){
        int a=60;
        this->heures--;
        this->minutes=a+this->minutes;
    }
    if(secundes<0){
        int b=60;
        this->heures--;
        this->secundes=b+this->secundes;
    }
}

Time &Time::operator--() {
    this->secundes--;
    return *this;
}

Time &Time::operator++() {
    this->secundes++;
    return *this;
}

Time& Time::operator++(int) {
    this->secundes++;
    return *this;
}

Time& Time::operator--(int) {
    this->secundes++;
    return *this;
}