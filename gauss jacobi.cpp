#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
cout<<"Enter 3 variable 3 equations in diagonal dominant form:";
int a=3,b=3;

double ar[a][b];
for(int i=0 ;i<a;i++){
    for(int j=0;j<b;j++){
            cout<<endl<<"ar["<<i<<"]["<<j<<"] =";
        cin>>ar[i][j];
    }
}
cout<<"\n enter the values with are in the other side of equations:";
double p[a];
for(int i=0;i<a;i++){
    cout<<"\nequation " <<i<<":";
    cin>>p[i];
}
cout<<"enter the errors:\n Eax \t,Eay \t,Eaz:";
double erx,ery,erz;
cin>>erx>>ery>>erz;

double x,y,z,l;
x=p[0]/ar[0][0];
y=p[1]/ar[1][1];
z=p[2]/ar[2][2];

cout <<endl<<x<<endl<<y<<endl<<z;

cout<<"\n no. of iter you want:";

double o,u,e,errorx,errory,errorz;

cin>>l;
for(int i=1;i<=l;i++){
o=(p[0]-(ar[0][1]*y+ar[0][2]*z))/ar[0][0];
u=(p[1]-(ar[1][0]*x+ar[1][2]*z))/ar[1][1];
e=(p[2]-(ar[2][0]*x+ar[2][1]*y))/ar[2][2];
cout<<"\niter"<<i<<":";
cout <<endl<<o<<"\t,"<<u<<"\t,"<<e;
errorx=(abs((o-x)/o))*100;
errory=(abs((u-y)/u))*100;
errorz=(abs((e-z)/e))*100;
cout<<"\ncurrent errors:";
cout <<endl<<"Eax:"<<errorx<<"\t,"<<"Eay:"<<errory<<"\t,"<<"Eaz:"<<errorz;

if(errorx<=erx && errory<=ery && errorz<=erz ){
    cout<<endl<<"solution in iter"<<i<<"is:"<<endl<<o<<"\t,"<<u<<"\t,"<<e;
    break;
}
else{
x=o;
y=u;
z=e;}

}











}
