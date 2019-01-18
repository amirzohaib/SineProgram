/***************
Name:Zohaib Amir	
Inhalt:Sinus
Aufgabe: 3 - 5 
Tests:
1.5708 = 1

****************/
#include <stdio.h>
#include <math.h>

  
int Fakultaet(int);  //Fakultaet Funktion Declare (nimmt ein int wert, gibt ein int wert)
	
int main()
{
	double x,y,z = 0; //variable
	int i,n = 0; //counter	n=Genauigkeit
	
	printf("Sinus Funktion, x eingeben\n");
	scanf("%lf",&x);
	printf("mit was fuer ein Genauigkeit soll es gerechnet werden? (Ganzzahlig))\n");
	scanf("%lf",&n);
	
	z = sin(x);		//Math Library function
	printf("sin(%lf) von math.h ist %lf \n" ,x,z);
	
	for(i=0;i<n;i++)
	{
		y = y + pow(-1,i)*(pow(x,2*i+1)/Fakultaet(i));
	}
	printf("sin(%lf) von manuellen Berechnung ist %lf\n" ,x,y);
	return 0;
}

int Fakultaet(int i)
	{
		int a,fak = 1;
		for(a=1;a<=2*i;a++)
		{
			fak=fak*a;
    	}
    	fak = fak * (2*i+1);
		
		return fak;

	}
