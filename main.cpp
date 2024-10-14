#include <iostream>
using namespace std;

int main() {

string toString (double);
int toInt (string);
double toDouble (string);
void calcolatrice(double a, string c, double stato, double b);
double divisione(double a, double b);
double moltiplicazione(double a, double b);
double somma(double a, double b);
double sottrazione(double a, double b);

int main() {
    double a, b, stato;
    string c;
    
    c = "";
    stato = 0;
    do {
        if (c == "+") {
            stato = somma(a, b);
            cout << "La somma tra a e b è " << stato << endl;
        }
        if (c == "-") {
            stato = sottrazione(a, b);
            cout << "La differenza  tra a e b è " << stato << endl;
        }
        if (c == "*") {
            stato = moltiplicazione(a, b);
            cout << "Il prodotto tra a e b è " << stato << endl;
        }
        if (c == "/") {
            stato = divisione(a, b);
            cout << "Il quoziente tra a e b è " << stato << endl;
        }
        if (c == "R") {
            stato = 0;
        }
    } while (c != "x");
    return 0;
}

void calcolatrice(double a, string c, double stato, double b) {
    c = "";
    stato = 0;
    do {
        cout << "Inserire uno delle seguenti operazioni (+ , - * , /) e se si vuole uscire dalla calcoltrarice inserire x,se la si vuole resettare inserire R" << endl;
        cout << "Inserisci la condizione che preferisci" << endl;
        cin >> c;
        if (c != "x" && c != "R") {
            cout << "Inserisci il primo numero" << endl;
            cin >> a;
            cout << "Inserisci il secondo numero" << endl;
            cin >> b;
        }
        if (c == "+") {
            stato = somma(a, b);
            cout << "La somma tra a e b è " << stato << endl;
        }
        if (c == "-") {
            stato = sottrazione(a, b);
            cout << "La differenza  tra a e b è " << stato << endl;
        }
        if (c == "*") {
            stato = moltiplicazione(a, b);
            cout << "Il prodotto tra a e b è " << stato << endl;
        }
        if (c == "/") {
            stato = divisione(a, b);
            cout << "Il quoziente tra a e b è " << stato << endl;
        }
        if (c == "R") {
            stato = 0;
        }
    } while (c != "x");
}

double divisione(double a, double b) {
    double d;
    
    d = a / b;
    
    return d;
}


double moltiplicazione(double a, double b) {
    double m;
    
    m = a * b;
    
    return m;
}

double somma(double a, double b) {
    double s;
    
    s = a + b;
    
    return s;
}

double sottrazione(double a, double b) {
    double st;
    
    st = a - b;
    
    return st;
}
}


