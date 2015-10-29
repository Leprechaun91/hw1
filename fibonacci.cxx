

#include <iostream>

using namespace std;

int fibo (int n){
//falls n = 0
if (n == 0) {
return 0;
}
//falls n = 1
if (n == 1){
return 1;
}
//sonst benutze die Formel und gebe aus
return fibo(n-1) + fibo(n-2);

}

int main(){

int n=0;

cout << "Bitte Zahl eingeben:"  ;
cin >> n;
cout << "Die Fibonacci-Zahl von " << n << " lautet "<<fibo(n)<< endl;

return 0;







}






























