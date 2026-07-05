/*Este programa realiza una factura*/
#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main() {
    // Defino los precios fijos de los tres productos
    int producto1=500, producto2=300, producto3=200; 
    
    // Creo las variables donde voy a guardar las cantidades que ingrese el cliente
    int cantproducto1, cantproducto2, cantproducto3;

    // Le pido al usuario la cantidad de cada producto y la guardo en su respectiva variable
    cout<<"Digite la cantidad del producto Nro1 ($500) = ";
    cin>>cantproducto1;
    cout<<"Digite la cantidad del producto Nro2 ($300) = ";
    cin>>cantproducto2;
    cout<<"Digite la cantidad del producto Nro3 ($200) = ";
    cin>>cantproducto3;

    // Multiplico la cantidad pedida por su precio para sacar el costo por producto
    int operacion1=cantproducto1*producto1;
    int operacion2=cantproducto2*producto2;
    int operacion3=cantproducto3*producto3;

    // Sumo los tres costos para sacar el valor de la compra antes de impuestos
    int subtotal=operacion1+operacion2+operacion3;
    
    // Calculo el impuesto multiplicando el subtotal por el 19% (0.19)
    int iva=subtotal*0.19;
    
    // Sumo el subtotal mas el impuesto para obtener el valor final a pagar
    int total=subtotal+iva;

    // Imprimo en pantalla el recibo mostrando todos los valores detallados
    cout<<endl<<"Factura de su compra"<<endl;
    cout<<endl<<"Subtotal Producto1 = $"<<operacion1<<endl;
    cout<<"Subtotal Producto2 = $"<<operacion2<<endl;
    cout<<"Subtotal Producto3 = $"<<operacion3<<endl;
    cout<<endl<<"IVA aplicado a la factura = $"<<iva<<endl;
    cout<<"Total de la compra = $"<<total;
}
