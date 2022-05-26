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
//Deklariranje na promenlivi
	int nstr1,nstr2;
	//odreduvanje na dolzinite na dvata stingovi
	nstr1=str1.length();
	nstr2=str2.length();


