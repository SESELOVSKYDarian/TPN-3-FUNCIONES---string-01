#include <bits/stdc++.h>
using namespace std;
int ContarLetraA(string f);
int main ()
{
	string frase;
	cout<<"Ingresar la frase: ";
	getline(cin, frase);
	cout<<"La cantidad de a son: "<<ContarLetraA(frase)<<endl;
}
int ContarLetraA(string f)
{
	int a = 0;
	for (int i = 0; i < f.size(); i++)
	{
		if (f[i] == 'A' || f[i] == 'a')
		{
			a++;
		}
	}
	return a;
}