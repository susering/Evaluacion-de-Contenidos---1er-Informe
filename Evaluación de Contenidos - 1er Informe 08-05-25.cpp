#include <iostream> //libreria
using namespace std; //espacio de nombre estanadar
int main() //inicio de la funcion principal
{
    //variables
    float edad;
    int diaSemana;
    float precio;
	float desc12;
    float desc60;
    float descMJ;
    float preciofinal12;
    float preciofinal60;
    float preciofinalMJ;

	cout<<"********************************************************************"<<endl;
	cout<<endl;
	cout<<"Evaluacion de Contenidos - 1er Informe"<<endl; //titulo
	cout<<"(EVALUACION REALIZADA POR JOAQUIN SANSOLINI Y JOAQUIN CEJAS MOLINA)"<<endl;
	cout<<endl;
	cout<<"********************************************************************"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Ingrese su edad: "; //salida de informacion pidiendo al usuario que ingrese su edad
	cin>>edad;					//entrada de informacion para ingresar la edad
	cout<<"Ingrese el dia de la semana (1 es lunes y el domingo es 7): ";	//salida de informacion pidiendo que se ingrese el dia de la semana
	cin>>diaSemana; 
	cout<<endl;
	
	//valores
	desc12 = 0.15;       preciofinal12 = 59.5;
	desc60 = 0.1;		 preciofinal60 = 63;
	descMJ = 0.05;		 preciofinalMJ = 66.5;
	precio = 70;
	
	
	if(edad< 12) //evaluacion para que se cumpla el descuento de la edad
	{
		if(diaSemana == 2||4) //re-evaluacion para calcular si se agrega el descuento de los martes y jueves
		{
			cout<<"Precio original: "<<precio<<endl;  //salida de informacion
			cout<<"Decuentos aplicados:"<<endl;	//salida de informacion
			cout<<"-Descuento por ser menor de 12 años (15%)"<<endl;	//salida de informacion
			cout<<"-Descuento por dia de la semana (Martes y Jueves) (5%)";	//salida de informacion
			cout<<"Descuento total aplicado: 20%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<precio - 0.2 * 70;	//salida de informacion
		}
		else 
		{
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion
			cout<<"Decuentos aplicados:"<<endl;	//salida de informacion
			cout<<"-Descuento por ser menor de 12 años (15%)"<<endl; //salida de informacion
			cout<<"Descuento total aplicado: 15%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<preciofinal12;	//salida de informacion
		}
	}
	else if(edad>=60) //evaluacion para que se cumpla el descuento de la edad
	{	
		if(diaSemana == 2||4) //re-evaluacion para calcular si se agrega el descuento de los martes y jueves
		{
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion
			cout<<"Descuentos aplicados:"<<endl;
			cout<<"-Descuento por tener 60 años o mas (10%)"<<endl;
			cout<<"-Descuento por dia de la semana (Martes y Jueves) (5%)"<<endl;
			cout<<"Descuento total aplicado: 15%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<precio - (desc60 + descMJ * 70);	//salida de informacion
		}
		else //respuesta en caso que no se cumpla el descuento de los martes y jueves
		{
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion
			cout<<"Descuentos aplicados: "<<endl;
			cout<<"-Descuento por tener 60 años o mas (10%)"<<endl;
			cout<<"Descuento total aplicado: 10%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<preciofinal60;	//salida de informacion
		}
	}
	else if(edad>= 12 & edad <60) //evaluacion para que se cumpla el descuento de la edad
	{
		if(diaSemana == 2) //re-evaluacion para calcular si se agrega el descuento de los martes y jueves
		{	
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion
			cout<<"Descuentos aplicados:"<<endl;
			cout<<"-Descuento por dia de la semana (Martes y Jueves) (5%)"<<endl;
			cout<<"Descuento total aplicado: 5%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<preciofinalMJ;	//salida de informacion
		}
		else if(diaSemana == 4) //re-evaluacion para calcular si se agrega el descuento de los martes y jueves
		{
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion
			cout<<"Descuentos aplicados:"<<endl;
			cout<<"-Descuento por dia de la semana (Martes y Jueves) (5%)"<<endl;
			cout<<"Descuento total aplicado: 5%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<preciofinalMJ;	//salida de informacion
		}
		else //respuesta en caso que no se cumpla el descuento de los martes y jueves
		{	
			cout<<"Precio original: "<<precio<<endl;	//salida de informacion	
			cout<<"Descuentos aplicados:"<<endl;
			cout<<"-Ninguno"<<endl;
			cout<<"Descuento aplicado: 0%"<<endl;	//salida de informacion
			cout<<"Precio final: "<<precio;	//salida de informacion
		}
	}
	return 0; //fin del código
}
