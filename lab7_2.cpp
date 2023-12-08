#include <iostream>
#include <string>
using namespace std;
int main() {
cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
cout << "?????: ";
string N;
getline(cin,N);
cout << "Fahsai: Wow!!! " << N <<" is a really cool name." << "\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
cout << N << ": ";
int A;
cin >> A;
cout << "Fahsai: I think you may be GEAR " << (A/10000000)-12 <<". I have a free movie ticket for you."<<"\n";
cout << "Fahsai: Let's go to the cinema together!!!"<< "\n";
cout << "Fahsai: What movie do you want to watch?"<< "\n";
cout << N << ": ";
cin.ignore();
string Banana;
getline(cin,Banana);
cout<<"Fahsai: So....which day are you free to go with me?"<<"\n";
cout << N << ": ";
string Code;
getline(cin,Code);
cout<<"Fahsai: " << Code <<"....that is OK!!! I'm looking forward to watching " << Banana <<" with you."<<"\n";
cout << N << ": ";
cin.ignore();
cout << "Fahsai: 555+ see you "<< Code <<". Bye Bye \\(^ ^)/"<<"\n";
}