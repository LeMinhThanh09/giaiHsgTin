#include <bits/stdc++.h>
#include<fstream>

using namespace std;
int n, tien = 50000, tienCanMuon=0, tienDuKhiChia;

int main(){
ifstream fileIn;
ofstream fileOut;
fileIn.open("DOITIEN.INP",ios_base::in);
fileOut.open("DOITIEN.OUT",ios_base::out);
fileIn >> n;
if(n > tien){
if(n % tien ==0){
    fileOut << tienCanMuon;
}
else{
tienCanMuon = 50000 -(n % tien) ;
fileOut << tienCanMuon;
}


}
else {
    tienCanMuon = tien - n;
    fileOut << tienCanMuon;

}
    fileIn.close();
    fileOut.close();
    system("pause");
    return 0;
}