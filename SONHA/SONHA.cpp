#include <bits/stdc++.h>
using namespace std;
int result = 0;
int numberOfNumber = 0,n;

int main(){
cin >> n;
int a[n];
for(int i = 1; i<=n; i++){
    a[i]=i;
/*vong lap dem so neu
be hon 10 thi cong 1, lon hon 10 thi dem 2*/
    if(a[i]<10){
        numberOfNumber+=1;
    }
    else{
        while(a[i]>=10){
		a[i]/=10;
		numberOfNumber+=1;
    }
    numberOfNumber+=1;
}
}
result = numberOfNumber*80000;
cout<<"Tong cac chu so la:  "<< numberOfNumber << endl;
cout<<"So tien phai tra: "<<result<<endl;
system("pause");  
return 0;
}