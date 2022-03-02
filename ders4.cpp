#include<iostream>


using namespace std;
int main(){

//Merve adlý öðrenci 1’den 20’ye kadar olan tek sayýlarý bulan bir program yazýp ekranda göstermek istemektedir.Merve bunun için sizce  nasýl bir kod yazmalý?

//for ile yapýmý;
cout<<"FOR YAPIMI"<<endl;
for(int i=1; i<=20;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
}

//while ile yapýmý;
cout<<"WHILE YAPIMI"<<endl;
int sayi=1;
while(sayi<21){
    if(sayi%2==1){
        cout<<sayi<<endl;
    }
sayi++;
}

//do while ile yapýmý;
cout<<"DO WHILE YAPIMI"<<endl;
int sayi1=1;
do{
    if(sayi1%2==1){
        cout<<sayi1<<endl;
    }
sayi1++;
}while(sayi1<21);







}
