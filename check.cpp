#include <bits/stdc++.h>
using namespace std;
string check( double h , int w)
{
    if ( h < 1.48 || h > 1.7 || w < 40 || w > 65)
        return "input khong hop le";
    else{
        if ( (h >= 1.48 && h <= 1.55) && (w >= 40 && w <= 46))
            return "S";
        if ( (h >= 1.56 && h <= 1.59) && (w >= 47 && w <= 52))
            return "M";           
        if ( (h >= 1.60 && h <= 1.63) && (w >= 53 && w <= 57))
            return "L";
        if ( (h >= 1.64 && h <= 1.7) && (w >= 58 && w <= 65))
            return "XL";
                      
    }
    return "khong xac dinh";    
    
}
int main(){
    double h; 
    int w;
    cout<<"nhap so chieu cao cua ban (don vi m) : "; cin>>h;
    cout<< "\nnhap so can nang cua ban: "; cin>>w;
    cout<<"\n size ao cua ban la : "<<check(h,w);
    return 0;
}
