#include<iostream>


using namespace std;
int main(){

//Merve adl� ��renci 1�den 20�ye kadar olan tek say�lar� bulan bir program yaz�p ekranda g�stermek istemektedir.Merve bunun i�in sizce� nas�l bir kod yazmal�?

//for ile yap�m�;
cout<<"FOR YAPIMI"<<endl;
for(int i=1; i<=20;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
}

//while ile yap�m�;
cout<<"WHILE YAPIMI"<<endl;
int sayi=1;
while(sayi<21){
    if(sayi%2==1){
        cout<<sayi<<endl;
    }
sayi++;
}

//do while ile yap�m�;
cout<<"DO WHILE YAPIMI"<<endl;
int sayi1=1;
do{
    if(sayi1%2==1){
        cout<<sayi1<<endl;
    }
sayi1++;
}while(sayi1<21);







}
