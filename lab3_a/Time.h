//
// Created by vadimeladii on 08/10/15.
//

#ifndef LAB3_A_TIME_H
#define LAB3_A_TIME_H


class Time {
private:
    int secundes;
    int minutes;
    int heures;

    void timeDroite();

public:

    Time(int heures,int minutes,int secundes);

    friend Time& operator+(Time&,int);
    friend Time& operator-(Time&,int);
    friend Time& operator+(Time&,Time&);
    friend Time& operator-(Time&,Time&);

    Time& operator--(int);
    Time& operator++(int);
    Time& operator--();
    Time& operator++();

    void printf();
};


#endif //LAB3_A_TIME_H
