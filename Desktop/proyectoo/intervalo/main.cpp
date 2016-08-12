#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main ()
{
    int numero;

    cout << "Ingrese el valor de numero: ";
    cin >> numero;
    if(numero>=-3&&numero<=27)
        cout << "verdadero" << endl;
    else
        cout << "falso" << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
