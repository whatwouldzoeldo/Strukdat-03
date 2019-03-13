/*
Author      : Muhammad Zulfikar Ali
NPM         : 140810180064
Deskripsi   : Menghitung keliling, luas, dan diagonal segiempat
Tahun       : 2019
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
    float panjang;
    float lebar;
} segiempat;

void input (segiempat * s) {
    cout<<"Panjang  : ";cin>>s->panjang;
    cout<<"Lebar    : ";cin>>s->lebar;
}
float keliling (segiempat s) {
    float keliling;
    keliling = 2*s.panjang + 2*s.lebar;
    return keliling;
}
float luas (segiempat s) {
    float luas;
    luas = s.panjang*s.lebar;
    return luas;
}
float diagonal (segiempat s) {
    float diag;
    diag=sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
    return diag;
}
void print (segiempat s) {
    cout<<endl;
    cout<<"Panjang  : "<<s.panjang<<endl;
    cout<<"Lebar    : "<<s.lebar<<endl;
    cout<<"Keliling : "<<keliling(s)<<endl;
    cout<<"Luas     : "<<luas(s)<<endl;
    cout<<"Diagonal : "<<diagonal(s)<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}
