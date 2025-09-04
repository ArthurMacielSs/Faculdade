#include <iostream>
using namespace std;int g;
struct Ponto3D {
int x, y, z;
void Imprime(){
cout << "Ponto: " << x << " " << y << " " << z << endl; }
};
int main() {
Ponto3D p1;
int x;
cout << "Global: "<< g << endl;cout << "Local: "<< x << endl;p1.Imprime();
}