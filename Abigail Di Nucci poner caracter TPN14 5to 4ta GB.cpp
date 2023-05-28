#include<bits/stdc++.h>
using namespace std;
string CambiarCaracter(string palabra, string caracter);
int main()
{
string palabra,caracter;
cout<<"Ingrese una palabra"<<endl;
cin>>palabra;
cout<<"Ingrese un tipo de caracter"<<endl;
cin>>caracter;
string c=CambiarCaracter(palabra,caracter);
cout<<c<<endl;
return 0;
}
string CambiarCaracter(string palabra, string caracter)
{
	int i;
	for(i=0; i<palabra.size(); i++){
		caracter+=palabra[i];
		caracter+=" ";
	}
	return palabra[i];
}
}