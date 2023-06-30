#include <iostream>
using namespace std;

struct Boletim
{
 string nome;
float *nota;
int matricula;
void preenche(Boletim&){


cout <<"Informe seu nome:"<< endl;
cin >>nome;
cout << "Informe sua matricula:" << endl;
cin >>matricula;
}
void preenchernot(Boletim&){
    int quant=0;
    cout<<"Informe a quantidade de notas:"<< endl;
    cin>> quant;
    float *nota= new float[quant];
    for(int i = 0; i<quant; i++){
        cout<<"Informe suas notas:"<< endl;
        cin>> nota[i];
    }

int media=0;
int soma=0;
for(int i=0; i<quant; i++){
soma=nota[i]+ soma;
}
media=soma/quant;
if(media>60){
    cout<<"APROVADO!"<< endl;
}else{
    cout<<"REPROVADO!"<< endl;
}

   

}
};

int main(){

    Boletim boletim;
    boletim.preenche(boletim);
    boletim.preenchernot(boletim);


    return 0;
}