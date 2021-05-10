#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void calc();
void mult_table();
void speed_conv();
void distance_conv();
void temp_conv();
void mass_conv();
void time_conv();



int main(){

	string name;
	int option;
	cout<<"\nHy, Welcome to UNIVERSAL CONVERTER\n";
	cout<<"\nEnter your name: ";
	cin>>name;
	cout<<"\nHello "<<name<<"!";
	while (true)
	{
	
		cout<<"\n\nChoose your option:";
		cout<<"\n\n1.Calculator";
		cout<<"\n2.Multiplication Table";
		cout<<"\n3.Speed Convertor";
		cout<<"\n4.Distance Convertor";
		cout<<"\n5.Temperature Convertor";
		cout<<"\n6.Mass Convertor";
		cout<<"\n7.Time Convertor";
		cout<<"\n8.Exit\n";
		cin>>option;
		switch (option)
		{
		case 1:
			calc();
			break;

		case 2:
			mult_table();
			break;

		case 3:
			speed_conv();
			break;
		
		case 4:
			distance_conv();
			break;

		case 5:
			temp_conv();
			break;
		
		case 6:
			mass_conv();
			break;

		case 7:
			time_conv();
			break;

		case 8:
			exit(0);
			break;

		default:
			cout<<"\nInvalid Option";
			break;
		}
	}
}	
void calc()
{
	int choose,cont;
	float a,b,c;
	

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Addition";
	cout<<"\n2.Substraction";
	cout<<"\n3.Multiplication";
	cout<<"\n4.Division";
	cout<<"\n5.Sine Value";
	cout<<"\n6.Cosine Value";
	cout<<"\n7.Tangent Value";
	cout<<"\n8.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:
			cout<<"\nENTER TWO NUMBERS: ";
			cin>>a>>b;
			c = a+b;
			cout<<"\nAnswer is: "<<c<<"\n";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 2:
			cout<<"\nENTER TWO NUMBERS: ";
			cin>>a>>b;
			c = a-b;
			cout<<"\nAnswer is: "<<c<<"\n";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 3:
			cout<<"\nENTER TWO NUMBERS: ";
			cin>>a>>b;
			c = a*b;
			cout<<"\nAnswer is: "<<c<<"\n";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 4:
			cout<<"\nenter divident: ";
			cin>>a;
			cout<<"\nenter divider: ";
			cin>>b;
			c = a/b;
			cout<<"\nanswer is: "<<c<<"\n";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 5:
		    cout<<"Enter Degree: ";
			cin>>a;
			b = a*(3.14159/180);
			cout<<"sin("<<a<<") = "<<sin(b);
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 6:
		    cout<<"Enter Degree: ";
			cin>>a;
			b = a*(3.14159/180);
			cout<<"cos("<<a<<") = "<<cos(b);
			cout<<"\n1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;

		case 7:
		    cout<<"Enter Degree: ";
			cin>>a;
			b = a*(3.14159/180);
			cout<<"tan("<<a<<") = "<<tan(b);
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;

		case 8:
			break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}

   
}



void mult_table()
{
	int n,r,a,cont;
	jump:
	cout<<"\nEnter number: ";
	cin>>n;
	cout<<"\nEnter range: ";
	cin>>r;
	for (int i = 1; i <=r; i++)
	{
		a = n*i;
		cout<<"\n"<<n<<"*"<<i<<"="<<" "<<a;

	}
	cout<<"\nDo you wish to continue?: ";
	cout<<"1.Yes  2.No (choose option no.)\n";
	cin>>cont;
	if (cont==1)
	{
		goto jump;
	}
}


void speed_conv()
{
	int choose,cont;
	float km,m,miles;

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Km/h to Meter/s";
	cout<<"\n2.Km/h to Miles/h";
	cout<<"\n3.Meter/s to Km/h";
	cout<<"\n4.Meter/s to Miles/h";
	cout<<"\n5.Miles/h to Meter/s";
	cout<<"\n6.Miles/h to Km/h";
	cout<<"\n7.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:
		cout<<"\nEnter Km/h: ";
		cin>>km;
		m = km/3.6;
		cout<<"\n"<<m<<" Meter per second";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 2:
		cout<<"\nEnter Km/h: ";
		cin>>km;
		miles = km/1.609;
		cout<<"\n"<<miles<<" Mph";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 3:
		cout<<"\nEnter Meter/s: ";
		cin>>m;
		km = m*3.6;
		cout<<"\n"<<km<<" Km/h";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 4:
		cout<<"\nEnter Meter/s: ";
		cin>>m;
		miles = m*2.237;
		cout<<"\n"<<miles<<" Mph";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 5:
		cout<<"\nEnter Miles/h: ";
		cin>>miles;
		m= miles/2.237;
		cout<<"\n"<<m<<" Meter per second";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 6:
		cout<<"\nEnter Miles/h: ";
		cin>>miles;
		km= miles*1.609;
		cout<<"\n"<<km<<" Km/h";
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 7:
		break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}
}

void distance_conv()
{
	int choose,cont;
	float km,m,cm,mm,inch;

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Km to Meter";
	cout<<"\n2.Km to Cm";
	cout<<"\n3.Meter to Cm";
	cout<<"\n4.Meter to Millimeter";
	cout<<"\n5.Cm to Millimeter";
	cout<<"\n6.Cm to inch";
	cout<<"\n7.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:

		cout<<"\nEnter Kilometer Value: \n";
		cin>>km;
		m = km* 1000;
		cout<<"\nMeter Value: "<<m;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		break;

		case 2:
	
		cout<<"\nEnter Kilometer Value: \n";
		cin>>km;
		cm = km* 100000;
		cout<<"\nCentimeter Value: "<<cm;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		break;

		case 3:
		cout<<"\nEnter Meter Value: ";
		cin>>m;
		cm = m*100;
		cout<<"\nCm Value: "<<cm;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 4:
		cout<<"\nEnter Meter: ";
		cin>>m;
		mm = m*1000;
		cout<<"\nMillimeter Value: "<<mm;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 5:
		cout<<"\nEnter Cm: ";
		cin>>cm;
		mm= m*10;
		cout<<"\nMillimeter Value: "<<mm;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 6:
		cout<<"\nEnter Cm: ";
		cin>>cm;
		inch= cm/2.54;
		cout<<"\nInch value: "<<inch;
		cout<<"\nDo you wish to continue?: ";
		cout<<"1.Yes  2.No (choose option no.)\n";
		cin>>cont;
		if (cont==1)
		{
			goto jump;
		}
		else
		break;

		case 7:
		break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}


}

void temp_conv()
{
	int choose,cont;
	float c,f,k;

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Celsius to Fahrenheit";
	cout<<"\n2.Celsius to Kelvin";
	cout<<"\n3.Fahrenheit to Celsius";
	cout<<"\n4.Fahrenheit to Kelvin";
	cout<<"\n5.Kelvin to Celsius";
	cout<<"\n6.Kelvin to Fahrenheit";
	cout<<"\n7.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:
			cout<<"\nEnter Celsius: ";
			cin>>c;
			f = (c*(9/5))+32 ;
			cout<<"\nFahrenheit Value: "<<f;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 2:
			cout<<"\nEnter Celsius: ";
			cin>>c;
			k = c+273.15 ;
			cout<<"\nKelvin Value: "<<k;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 3:
			cout<<"\nEnter Fahrenheit : ";
			cin>>f;
			c = (f-32)*5/9 ;
			cout<<"\nCelsius Value: "<<c;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 4:
			cout<<"\nEnter Fahrenheit : ";
			cin>>f;
			k = (f-32)*(5/9)+273.15;
			cout<<"\nKelvin Value: "<<k;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;

		case 5:
			cout<<"\nEnter Kelvin : ";
			cin>>k;
			c = k-273.15;
			cout<<"\nCelsius Value: "<<k;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 6:
			cout<<"\nEnter Kelvin : ";
			cin>>k;
			f = (k-273.15)*(9/5)+32;
			cout<<"\nFahrenheit Value: "<<f;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 7:
			break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}

   
}

void mass_conv()
{
	int choose,cont;
	float kg,g,mg;

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Kilogram to gram";
	cout<<"\n2.Kilogram to milligram";
	cout<<"\n3.gram to Kilogram";
	cout<<"\n4.gram to milligram";
	cout<<"\n5.milligram to Kilogram";
	cout<<"\n6.milligram to gram";
	cout<<"\n7.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:
			cout<<"\nEnter Kilogram: ";
			cin>>kg;
			g = kg*1000 ;
			cout<<"\nGram Value: "<<g;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 2:
			cout<<"\nEnter Kilogram: ";
			cin>>kg;
			mg = kg*1e+6 ;
			cout<<"\nMilligram Value: "<<mg;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 3:
			cout<<"\nEnter gram: ";
			cin>>g;
			kg = g/1000 ;
			cout<<"\nKilogram Value: "<<kg;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 4:
			cout<<"\nEnter gram: ";
			cin>>g;
			mg = g*1000 ;
			cout<<"\nMilligram Value: "<<mg;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;

		case 5:
			cout<<"\nEnter Milligram: ";
			cin>>mg;
			kg = mg/1e+6 ;
			cout<<"\nKilogram Value: "<<kg;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 6:
			cout<<"\nEnter Milligram: ";
			cin>>g;
			g = mg/1000 ;
			cout<<"\ngram Value: "<<g;
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 7:
			break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}

   
}

void time_conv()
{
	int choose,cont;
	float s,m,h;

	jump:
	
	cout<<"\nMENU\n";
	cout<<"\n1.Seconds to Minutes ";
	cout<<"\n2.Seconds to Hours";
	cout<<"\n3.Minutes to Seconds";
	cout<<"\n4.Minutes to Hours";
	cout<<"\n5.Hours to Seconds";
	cout<<"\n6.Hours to Minutes";
	cout<<"\n7.Exit\n";

	cout<<"\nPlease choose your option: \n";
	cin>>choose;
	switch(choose)
	{
		case 1:
			cout<<"\nEnter Seconds: ";
			cin>>s;
			m = s/60 ;
			cout<<"\n"<<m<<" Min";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 2:
			cout<<"\nEnter Seconds: ";
			cin>>s;
			h = s/3600 ;
			cout<<"\n"<<m<<" hr";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 3:
			cout<<"\nEnter Minutes: ";
			cin>>m;
			s = m*60 ;
			cout<<"\n"<<s<<" s";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
			
		case 4:
			cout<<"\nEnter Minutes: ";
			cin>>m;
			h = m/60 ;
			cout<<"\n"<<h<<" hr";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;

		case 5:
			cout<<"\nEnter Hours: ";
			cin>>h;
			s = h*3600 ;
			cout<<"\n"<<s<<" s";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 6:
			cout<<"\nEnter Hours: ";
			cin>>h;
			m = h*60 ;
			cout<<"\n"<<m<<" min";
			cout<<"\nDo you wish to continue?: ";
			cout<<"1.Yes  2.No (choose option no.)\n";
			cin>>cont;
			if (cont==1)
			{
				goto jump;
			}
			else
			break;
		
		case 7:
			break;

		default:
			cout<<"\nINVALID OPTION. \nPLEASE TRY AGAIN"<<"\n";
			goto jump;
			break;
	}

   
}

