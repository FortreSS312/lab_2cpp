#include <iostream>
using namespace std;

int main() {
    double V1, V2, S, T;

    cout << "Vvedit V1 (km/h): ";
    cin >> V1;

    cout << "Vvedit V2 (km/h): ";
    cin >> V2;

    cout << "Vvedit S (km): ";
    cin >> S;

    cout << "Vvedit T (god): ";
    cin >> T;

    double distance = S + T * (V1 + V2);

    cout << "Vidstan cherez " << T << " god: "
         << distance << " km" << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double R;
    const double PI = 3.14;

    cout << "Vvedit radius R: ";
    cin >> R;

    double L = 2 * PI * R;
    double S = PI * R * R;

    cout << "Dovzhyna kola L = " << L << endl;
    cout << "Ploshcha kruha S = " << S << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double V, U, T1, T2;

    cout << "Vvedit V (km/h): ";
    cin >> V;

    cout << "Vvedit U (km/h): ";
    cin >> U;

    cout << "Vvedit T1 (god): ";
    cin >> T1;

    cout << "Vvedit T2 (god): ";
    cin >> T2;

    double S1 = V * T1;
    double S2 = (V - U) * T2;
    double S = S1 + S2;

    cout << "Zahalnyi shlyah S = " << S << " km" << endl;

    return 0;
}
