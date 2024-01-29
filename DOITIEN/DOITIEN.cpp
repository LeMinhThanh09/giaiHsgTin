#include <bits/stdc++.h>
#include<fstream>

using namespace std;
int n, moneyToBeExchanged = 50000, moneyToBrr=0;

int main(){
ifstream fileIn;
ofstream fileOut;
fileIn.open("DOITIEN.INP.txt",ios_base::in);
fileOut.open("DOITIEN.OUT.txt",ios_base::out);
fileIn >> n;
if(n >= moneyToBeExchanged){

    if(n % moneyToBeExchanged ==0){
     fileOut << moneyToBrr;
    }

    else{
    moneyToBrr = 50000 -(n % moneyToBeExchanged) ;
    fileOut << moneyToBrr;
    }

}

else {
    moneyToBrr = moneyToBeExchanged - n;
    fileOut << moneyToBrr;
}
    fileIn.close();
    fileOut.close();
    system("pause");
    return 0;
}
/*Thay doi so tien (dau vao) trong file DOITIEN.INP.txt.
                Made by MinhThanhLe*/