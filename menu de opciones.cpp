#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void opcion1() {
	//Area del rectangulo//
    int b,h,p,a;
	cout<<"ingrese la base"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	p=2*(h+b);
	a=b*h;
	cout<<"el area es: "<<a;
	cout<<endl<<"el perimetro es: "<<p;
}

void opcion2() {
	//hipotenusa//
    float A,B,H;
	cout<<"ingrese el primer cateto"<<endl;
	cin>>A;
	cout<<"ingrese el segundo cateto"<<endl;
	cin>>B;
	H=sqrt((A*A)+(B*B));
	cout<<"la hipotenusa es: "<<H;
}

void opcion3() {
    
    //area de un cuadrado
    int A,area;
	cout<<"ingrese el lado del cuadrado"<<endl;
	cin>>A;
	area=A*A;
	cout<<"El area es: "<<area;
}
void opcion4() {
    //area de un circulo
	int r;
	float area,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;;
	area=pi*r*r;
	cout<<"el area es: "<<area;
}
void opcion5() {
    // area de un trapecio
    float area,B,b,h;
	cout<<"ingrese la base mayor"<<endl;
	cin>>B;
	cout<<"ingrese la base menor"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	area=((B+b)/2*h);
	cout<<"el area es: "<<area;
}
void opcion6() {
    // area de un octagono
    float area,a,l;
	cout<<"ingrese el apotema"<<endl;
	cin>>a;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	area=4*a*l;
	cout<<"el area es: "<<area;
}
void opcion7() {
    // area y perimetro de un pentagono
    int a,l;
	float perimetro,area;
	cout<<"ingrese el apotema"<<endl;
	cin>>a;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	area=(5*a*l)/2;
	perimetro=5*l;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
}
void opcion8() {
	// area y perimetro de un hexagono 
	double l;
	double perimetro,area;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	area=(3*sqrt(3)/2)*l*l;
	perimetro=6*l;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
}
void opcion9() {
	// area y perimetro de un heptagono
	double a,l;
	double perimetro,area;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	cout<<"ingrese el apotema"<<endl;
	cin>>a;
	area=(7*a*l)/2;
	perimetro=6*7;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
}
void opcion10() {
    // area y perimetro de una elipse
    double a,b,pi;
	double perimetro,area;
	pi=3.14;
	cout<<"ingrese el radio mayor"<<endl;
	cin>>a;
	cout<<"ingrese el radio menor"<<endl;
	cin>>b;
	area=pi*a*b;
	perimetro=pi*(a+b);
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es aproximado es: "<<perimetro;
}
void opcion11() {
 	// Volumen de un paralelepipedo
 	double volumen,a,b,c;
	cout<<"ingrese la base"<<endl;
	cin>>a;
	cout<<"ingrese el ancho"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>c;
	volumen=a*b*c;
	cout<<"el volumen es: "<<volumen;
}
void opcion12() {
    // Volumen de un cilindro
    double volumen,r,h,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	volumen=pi*r*r*h;
	cout<<"el volumen es: "<<volumen;
}
void opcion13() {
    // Volumen de un cubo
    double volumen,a;
	cout<<"ingrese un lado "<<endl;
	cin>>a;
	volumen=pow(a,3);
	cout<<"el volumen es: "<<volumen;
}
void opcion14() {
    // Volumen de una esfera
    double volumen,r,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	volumen=(4*pi*pow(r,3))/3;
	cout<<"el volumen es: "<<volumen;
}
void opcion15() {
    // area sombreada problema 15
    double As,l;
	cout<<"ingrese el lado"<<endl;
	cin>>l;
	As=(l*l)/3;
	cout<<"el area sombreada es: "<<As;
}
void opcion16() {
    // area sombreada problema 16
    double As,l,pi;
	pi=3.14;
	cout<<"ingrese el lado"<<endl;
	cin>>l;
	As=(2*l*l)*(pi-2);
	cout<<"el area sombreada es: "<<As;
}
void opcion17() {
    // area sombreada problema 17
    double As,l,pi;
	pi=3.14;
	cout<<"ingrese el lado"<<endl;
	cin>>l;
	As=(pi*l*l)/(4);
	cout<<"el area sombreada es: "<<As;
}
void opcion18() {
    // problema 18
    double volumen,superficie,h,r,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	volumen=(((2*pi*r*r*r)/3)+(pi*r*r*h));
	superficie=(2*pi*r*(h+r))+(r*r*pi);
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
}
void opcion19() {
    //problema 19
    	float volumen,superficie;
	float h,H,l;
	cout<<"ingrese la base del paralelepipedo"<<endl;
	cin>>l;
	cout<<"ingrese la altura del paralelepipedo"<<endl;
	cin>>H;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>h;
	volumen=(((l*l*h)/3)+(l*l*H));
	superficie=((4*(l*h))+(l*l))+(4*(sqrt((h*h)+(l/2*l/2)))*(l/2));
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
}
void opcion20() {
	//problema 20
    float volumen,superficie;
	float a,h,H,p,l;
	cout<<"ingrese la base del paralelepipedo"<<endl;
	cin>>l;
	cout<<"ingrese la altura del paralelepipedo"<<endl;
	cin>>p;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>h;
	H=p-h;
	a=2*sqrt(2);
	volumen=((l*l*p)-((l*l*H)/3));
	superficie=((4*(p*l))+(2*a*l)+(l*l));
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
}
void opcion21() {
    //problema 21
    float volumen;
	float A,a,h,H,l,L;
	cout<<"ingrese la base del tronco "<<endl;
	cin>>L;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>H;
	cout<<"ingrese el apotema"<<endl;
	cin>>A;
	l=L/2;
	h=H/2;
	a=A/2;
	volumen=((L*A*H)-(3*(l*a*h)/2));
	cout<<"el volumen es: "<<volumen;
}
void opcion22() {
	// prooblema 22
	float volumen;
	float r,pi,R,h;
	cout<<"ingrese el radio mayor "<<endl;
	cin>>R;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	cout<<"ingrese el radio menor"<<endl;
	cin>>r;
	pi=3.14;
	volumen=((h*pi/3)*((r*r)+(R*R)+(r*R)));
	cout<<"el volumen es: "<<volumen;
}
void opcion23() {
    //problema 23
    float volumen;
	float r,h,pi;
	cout<<"ingrese el radio "<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	pi=3.14;
	volumen=((pi*r*r/3)*(2+h));
	cout<<"el volumen es: "<<volumen;
}
void opcion24() {
    //problema 24
     float volumen, litros;
    float a, b, c;
    cout << "ingrese la base : " << endl;
    cin >> a;
    cout << "ingrese la altura : " << endl;
    cin >> b;
    cout << "ingrese el ancho : " << endl;
    cin >> c;
    volumen = a * b * c;     
    litros = volumen * 1000 *4 / 5; 
    cout << "los litros son: " << litros;
}
void opcion25() {
    //problema 25
    float volumen;
    float h,l;
    cout << "ingrese la base : " << endl;
    cin >> l;
    cout << "ingrese la altura faltante : " << endl;
    cin >> h;
    volumen = ((4*(l*l*l))-(h*h*h))/3;      
    cout << "el volumen es: " << volumen;
}

int main() {
    int opcion;

    do {
        // Mostrar el menú de opciones
        cout << "\n----- Menu de Opciones -----" << endl;
        cout << "[01]. Problema 1" << endl;
        cout << "[02]. Problema 2" << endl;
        cout << "[03]. Problema 3" << endl;
        cout << "[04]. Problema 4" << endl;
        cout << "[05]. Problema 5" << endl;
        cout << "[06]. Problema 6" << endl; 
		cout << "[07]. Problema 7" << endl;
		cout << "[08]. Problema 8" << endl;
		cout << "[09]. Problema 9" << endl;
		cout << "[10]. Problema 10" << endl;
		cout << "[11]. Problema 11" << endl;
		cout << "[12]. Problema 12" << endl;
		cout << "[13]. Problema 13" << endl;
		cout << "[14]. Problema 14" << endl;
		cout << "[15]. Problema 15" << endl;
		cout << "[16]. Problema 16" << endl;
		cout << "[17]. Problema 17" << endl;
		cout << "[18]. Problema 18" << endl;
		cout << "[19]. Problema 19" << endl;
		cout << "[20]. Problema 20" << endl;
		cout << "[21]. Problema 21" << endl;
		cout << "[22]. Problema 22" << endl;
		cout << "[23]. Problema 23" << endl;
		cout << "[24]. Problema 24" << endl;
		cout << "[25]. Problema 25" << endl;
        cout << "[26]. Salir" << endl;
        cout << "Selecciona un problema: ";
        cin >> opcion;

        // Evaluar la opción seleccionada
        switch(opcion) {
            case 1: opcion1(); break;
            case 2: opcion2(); break;
            case 3: opcion3(); break;
            case 4: opcion4(); break;
            case 5: opcion5(); break;
            case 6: opcion6(); break;
            case 7: opcion7(); break;
            case 8: opcion8(); break;
            case 9: opcion9(); break;
            case 10: opcion10(); break;
            case 11: opcion11(); break;
            case 12: opcion12(); break;
            case 13: opcion13(); break;
            case 14: opcion14(); break;
            case 15: opcion15(); break;
            case 16: opcion16(); break;
            case 17: opcion17(); break;
            case 18: opcion18(); break;
            case 19: opcion19(); break;
            case 20: opcion20(); break;
            case 21: opcion21(); break;
            case 22: opcion22(); break;
            case 23: opcion23(); break;
            case 24: opcion24(); break;
            case 25: opcion25(); break;
            case 26: cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opcion no valida. Intenta de nuevo." << endl;
        }

    } while(opcion != 26);

    return 0;
}