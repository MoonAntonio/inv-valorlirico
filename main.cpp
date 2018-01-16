#include <iostream>

using namespace std;

int main()
{
    int valorMax = 0;
    char valores[11];
    int suma = 0;
    float valorProcesado = 0;
    string total = "";

    cout<<"Ingresa el numero maximo de valores (Max 10):";
    cin>>valorMax;

    if(valorMax > 10)
    {
        cout<<"[Error] El numero es superior a 10";
        return 0;
    }

    for(int n = 0;n < valorMax;n ++)
    {
        cout<<"Ingresa el valor (S,A,B,C,D):";
        cin>>valores[n];

        switch(valores[n])
        {
            case 'S':
                suma = suma + 1;
                break;

            case 'A':
                suma = suma + 2;
                break;

            case 'B':
                suma = suma + 3;
                break;

            case 'C':
                suma = suma + 4;
                break;

            case 'D':
                suma = suma + 5;
                break;

            default:
                cout<<"Error de valor"<<endl;
                break;
        }
    }

    valorProcesado = suma/valorMax;

    if(valorProcesado >= 0 && valorProcesado < 0.2f)
    {
        total = "S";
    }

    if(valorProcesado >= 0.2f && valorProcesado < 0.4f)
    {
        total = "A";
    }

    if(valorProcesado >= 0.4f && valorProcesado < 0.6f)
    {
        total = "B";
    }

    if(valorProcesado >= 0.6f && valorProcesado < 0.8f)
    {
        total = "C";
    }

    if(valorProcesado >= 0.8f && valorProcesado <= 1.0f)
    {
        total = "D";
    }

    cout<<"El valor es: "<<total<<endl;

    return 0;
}
