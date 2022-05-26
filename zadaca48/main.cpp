#include<iostream>
//posebna bibloteka za rabota
#include <bits/stdc++.h>
#include<cstring>
#include<cstring>
#include<fstream>
#include<vector>
using namespace std;
//sortiranje na elementite
	bool smeni(int x,int y){ return x>y;}
int main()
{
	//deklaracija na promenlivi
	string str1;
	string str2;
	string zedno;
	//deklracija na vektor i iterator
	vector<int> StringVek(80);
	vector<int>::iterator iterString;
	//vnesuvanje na dvata stringovi
	cout<<"\n Vnesete INKIBrIndex.Ime.Prezime => ";
	cin>>str1;
	cout<<"\n Vnesete mail za komunikacija so fax => ";
	cin>>str2;
    //deklariranje na promenlivi
	int nstr1,nstr2;
	//odreduvanje na dolzinite na dvata stingovi
	nstr1=str1.length();
	nstr2=str2.length();
	//dopolnuvanje na prviot string so prazno mesto
	str1.append(" ");
	//i dopolnuvanje na prviot string so vtor string
	str1.append(str2);

	cout<<"\n Spoeni string => "<<str1;

	int dolZaedno=str1.length();
	//polnenje na stekot so vrednosti od spoeniot string
	for(int i=0;i<dolZaedno;i++)
		StringVek.push_back((int)str1[i]);

	//dodeluvanje vo stekot data na raganje
	StringVek.push_back(16);
	//dodleuvanje na stekot mesec na raganje
	StringVek.push_back(9);
	//dodlevanje na stek godina na raganje
	StringVek.push_back(2);
	//pecatenje na stekot preku iterator
	cout<<"\n\n Vektor - Int  ";
	cout<<endl;
	cout<<"  ";
    for(iterString=StringVek.begin();iterString<StringVek.end();++iterString)
	{
		if((*iterString)!=0)
		cout<<*iterString<<" ";
	}
	//pristap do datotekata

	ofstream Simona("INKI895.Proekt03.txt");
	Simona<<"\n Spoeni string => "<<str1<<endl;
	Simona<<"\n Vektor - Int  "<<endl<<endl;
	//zapisuvanje na podatocite vo datoteka preku iterator
	//prevzemeni vrendosti od vektor
	for(iterString=StringVek.begin();iterString<StringVek.end();++iterString)
	{
		if((*iterString)!=0)
		Simona<<*iterString<<" ";
	}
}


