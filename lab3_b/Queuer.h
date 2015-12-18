//
// Created by vadimeladii on 12/10/15.
//

#ifndef LAB3_B_QUEUER_H
#define LAB3_B_QUEUER_H

#include <queue>
#include <iostream>

using namespace std;

class Queuer {
private:
    queue<int> queuerQueuer;
public:
    Queuer();

    Queuer& operator+(Queuer &q);
    Queuer& operator=(Queuer &q);

    bool operator==(Queuer &q2);
    bool operator!=(Queuer &q2);

    bool operator>(Queuer &q2);
    bool operator<(Queuer &q2);


    friend ostream &operator<<(ostream &ostream1,Queuer &queuer);
    friend istream &operator>>(istream &istream1,Queuer &queuer);


    void deleteElementQueuer();
};



#endif //LAB3_B_QUEUER_H
