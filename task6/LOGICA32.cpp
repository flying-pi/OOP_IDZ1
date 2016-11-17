//
// Created by Yura Braiko on 17.11.16.
//

#include <iostream>
#include <locale>

void otvet(const char *, const unsigned int &, const unsigned int &, const unsigned int & = 0);

void instruction();

using  namespace std;



void read2ArgFromTerminal(unsigned int &V1, unsigned int &V2){
    cout << "Введите два операнда из [0,4294967295]: ";
    cin >> V1 >> V2;
}
void read1ArgFromTerminal(unsigned int &V1){
    cout << "Введите один операнд из [0,4294967295]: ";
    cin >> V1 ;
}

int main() {
    setlocale(LC_ALL, "Russian");
    char and[10] = "\nAND     ";
    char or[10] = "\nOR      ";
    char xor[10] = "\nXOR     ";
    char shl[10] = "\n<<      ";
    char shr[10] = "\n>>      ";
    char inv[10] = "INV      ";
    unsigned int operation, V1, V2, V3;
    instruction();
    do{
        cout << "\n\nОперация? ";
        cin >> operation;
        switch (operation){
            case 1:
                read2ArgFromTerminal(V1,V2);
                V3 = V1&V2;
                otvet(and,V3,V1,V2);
                break;
            case 2:
                read2ArgFromTerminal(V1,V2);
                V3 = V1|V2;
                otvet(or,V3,V1,V2);
                break;
            case 3:
                read2ArgFromTerminal(V1,V2);
                V3 = V1^V2;
                otvet(xor,V3,V1,V2);
                break;
            case 4:
                read2ArgFromTerminal(V1,V2);
                V3 = V1<<V2;
                otvet(shl,V3,V1,V2);
                break;
            case 5:
                read2ArgFromTerminal(V1,V2);
                V3 = V1>>V2;
                otvet(shr,V3,V1,V2);
                break;
            case 6:
                read1ArgFromTerminal(V1);
                V3 = ~V1;
                otvet(inv,V3,V1,V2);
                break;
            default:
                if(operation!=7)
                    cout << ("Введеное число, не соответсвует пункту меню.") << endl;

        }
    }while (operation!=7);
    return 0;
}