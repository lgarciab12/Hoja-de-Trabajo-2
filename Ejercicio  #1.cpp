#include <iostream>
#include <fstream>

using namespace std;

int main(){	
	string codigo;
	string minimo;
	string actual;
	string proveedor;
	string precio;
	string dif;	

	ofstream registros ("Registros.txt");
	
	int op1, op2;
	
	
	do{		
		cout<<"1. Nuevo Registro \n2. Mostrar \n3. Salir\n";		
		cin>>op1;		
		cin.ignore();		
		
		if (op1==1){												
			if (!registros.is_open())			
			{
				registros.open("Registros.txt", ios::app);
			}
			
			cout<<"Codigo del Articulo: "<<endl;
			getline(cin,codigo);
			cout<<"Proveedor: "<<endl;
			getline(cin, proveedor);
			cout<<"Precio: "<<endl;
			getline(cin, precio);
			cout<<"Nivel Actual: "<<endl;
			getline(cin, actual);
			cout<<"Nivel Minimo: "<<endl;
			getline(cin, minimo);						
			
			cout<<"1. Guardar Registro"<<endl;
			cout<<"2. Regresar"<<endl;
			cin>>op2;			
			
			if (op2 == 1){
				
				if (actual<=minimo){
				dif = "Si";
				}	
				else {
				dif = "No";
				}
					
				registros<<"Codigo del Articulo: "<<codigo<<endl;
				registros<<"Proveedor: "<<proveedor<<endl;
				registros<<"Precio: "<<precio<<endl;
				registros<<"Nivel Actual: "<<actual<<endl;
				registros<<"Nivel Minimo: "<<minimo<<endl;
				registros<<"Hacer Pedido: "<<dif<<endl;
								
				system("cls");
				
				cout<<"Registro Guardado"<<endl;
				system("pause");
				
				system("cls");
			}
			
			}
			
		if (op1 == 2){
			
			ifstream registros;
			registros.open("Registros.txt", ios::in);
		}
				
		registros.close();	
		
		}while(op1 !=3);
return 0;
}


