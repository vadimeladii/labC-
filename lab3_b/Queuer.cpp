//
// Created by vadimeladii on 12/10/15.
//

#include "Queuer.h"

Queuer::Queuer() {
}

ostream &operator<<(ostream &ostream1, Queuer &queuer) {
    queue <int> id = queuer.queuerQueuer;
    cout << "queruer : ";
    while(!id.empty()){
        cout << id.front() << " ";
        id.pop();
    }
    cout << endl << "--------------------------" << endl;
    return ostream1;
}

istream &operator>>(istream &istream1, Queuer &queuer) {
    int n;
    cout << "introduce valoarea elementul care doriti sa adaugati" << endl;
    cin >> n;
    queuer.queuerQueuer.push(n);
    return istream1;
}

Queuer & Queuer::operator+(Queuer &q) {
    queue <int> id = q.queuerQueuer;
    while(!id.empty()){
        queuerQueuer.push(id.front());
        id.pop();
    }
    return *this;
}

Queuer &Queuer::operator=(Queuer &q) {
    queuerQueuer = q.queuerQueuer;
    return *this;
}

bool Queuer::operator==(Queuer &q2) {
    queue<int> id1=queuerQueuer;
    int suma1=0;
    queue<int> id2=q2.queuerQueuer;
    int suma2=0;

    while(!id1.empty()){
        suma1+=id1.front();
        id1.pop();
    }
    while(!id2.empty()){
        suma2+=id2.front();
        id2.pop();
    }

    return suma1 == suma2;
}

bool Queuer::operator!=(Queuer &q2) {
    queue<int> id1=queuerQueuer;
    int suma1=0;
    queue<int> id2=q2.queuerQueuer;
    int suma2=0;

    while(!id1.empty()){
        suma1+=id1.front();
        id1.pop();
    }
    while(!id2.empty()){
        suma2+=id2.front();
        id2.pop();
    }

    return suma1 != suma2;
}

bool Queuer::operator>(Queuer &q2) {
    queue<int> id1=queuerQueuer;
    int suma1=0;
    queue<int> id2=q2.queuerQueuer;
    int suma2=0;

    while(!id1.empty()){
        suma1+=id1.front();
        id1.pop();
    }
    while(!id2.empty()){
        suma2+=id2.front();
        id2.pop();
    }

    return suma1 > suma2;
}

bool Queuer::operator<(Queuer &q2) {
    queue<int> id1=queuerQueuer;
    int suma1=0;
    queue<int> id2=q2.queuerQueuer;
    int suma2=0;

    while(!id1.empty()){
        suma1+=id1.front();
        id1.pop();
    }
    while(!id2.empty()){
        suma2+=id2.front();
        id2.pop();
    }

    return suma1 < suma2;
}


void Queuer::deleteElementQueuer() {
    queuerQueuer.pop();
}

