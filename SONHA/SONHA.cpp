#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int n, bienTam;
int result = 0;

int main(){ 
ifstream fileIn;
ofstream fileOut;
fileIn.open("SONHA.INP.txt",ios_base::in);
fileOut.open("SONHA.OUT.txt",ios_base::out);
fileIn >> n;
bienTam=n;


if (bienTam < 9){          //1
    result += n*1;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=9;
result += 9*1;


if(bienTam<99){             //2
    result += n*2;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=90;
result += 90*2;



if(bienTam<999){            //3
    result += n*3;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=900;
result += 900*3;



if(bienTam<9999){           //4
    result += n*4;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=9000;
result += 9000*4;


if(bienTam<99999){          //5
    result +=  n*5;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=90000;
result += 90000*5;



if(bienTam<999999){         //6
    result += n*6;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=9000000;
result += 900000*6;



if(bienTam<9999999){             //7
    result += n*7;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=9000000;
result += 9000000*7;




if(bienTam < 99999999){             //8
    result += n*8;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=900000000;
result += 90000000*8;




if(bienTam<999999999){             //9
    result += n*9;
    fileOut << result;
    fileIn.close();
    fileOut.close();
    return 0;
}


n-=90000000;
result += 90000000*9;

fileIn.close();
fileOut.close();
    return 0;
}