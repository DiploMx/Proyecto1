#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
    int opcion;
	int vida = 100;
	int ki = 0;
    int decisiones = 0;
    
    srand(time(0));
    

    
    while (decisiones < 5) {
    	
    	do {
    	
        cout << " Juego Interactivo Dragon Ball" <<endl <<endl;
        cout << "Eres un Guerrero Sayayin que puede participar en el Torneo Mundial de la Artes Marciales contra otros peleadores" << endl <<endl;
        cout << "1. Explorar el Planeta M2 en busca de las Esferas del Dragon" <<endl;
        cout << "2. Investigar la Cueva de las Sombras en busca de pistas" <<endl;
        cout << "3. Entrenar con el Anciano Kaio-Sama para fortalecer tus habilidades" <<endl;
        cout << "4. Recuperarte en la Casa de Dende" <<endl;
        cout << "5. Salir del programa" <<endl <<endl;
        cout << " Elige una opcion de las 5 que se muestran : ";

        cin >> opcion;
		
		if (opcion < 1 || opcion > 5) {
		cout << endl;
		cout << endl << "Opcion no valida. Elige un numero del 1 al 5." << endl << endl;}

        } while (opcion < 1 || opcion > 5);

        switch (opcion) {
            case 1:
            	cout << endl <<endl;
                cout << "Exploras el Planeta M2 en busca de las Esferas del Dragon." <<endl <<endl;
                vida += rand() % 30 + 10;
                ki += rand() % 20 + 10;
                break;
            case 2:
            	cout << endl <<endl;
                cout << "Dentro de la cueva, encuentras un tesoro pero pierdes algo de vida al salir." <<endl <<endl;
                vida -= rand() % 20 + 10;
                ki -= rand() % 30 + 20;
                break;
            case 3:
            	cout << endl <<endl;
                cout << "Entrenas con el Anciano Kaio-Sama y perfeccionas tu tecnica Kaio-Ken." <<endl <<endl;
                vida -= rand() % 20 + 10;
                ki += rand() % 40 + 20;
                break;
            case 4:
            	cout << endl <<endl;
                cout << "Te recuperas en la Casa de Dende y obtienes el poder de la regeneracion." <<endl <<endl;
                vida += rand() % 30 + 20;
                ki += rand() % 20 + 10;
                break;
            case 5:
            	cout << endl <<endl;
                cout << "Regresa pronto. Tu vida final fue de: " << vida << " y tu ki final fue de: " << ki <<endl;
                exit(0);
            default:
            	cout << endl <<endl;
                cout << "No valido." <<endl <<endl;
                continue;
        }

        cout << "Tu vida actual es: " << vida << " y tu ki actual es: " << ki <<endl <<endl;

        // Primera decision
        
        do {
        
        cout << " ¿Que deseas hacer? " <<endl;
        cout << "1. Continuar la busqueda de las Esferas del Dragon" <<endl;
        cout << "2. Volver atras y explorar otra area" <<endl;
        cout << "3. Salir de namekusein hacia una region desconocida" <<endl <<endl;
        cout << " Elige una opcion de las 3 que se muestran : ";

        cin >> opcion;
		
		if (opcion < 1 || opcion > 3) {
		cout << endl;
        cout << endl << "Opcion no valida. Elige un numero del 1 al 3." << endl << endl;}

        } while (opcion < 1 || opcion > 3);
        

        switch (opcion) {
            case 1:
            	cout << endl <<endl;
                cout << "Sigues explorando y te encuentras con un grupo de enemigos. Sin embargo, encuentras otra Esfera del Dragon." <<endl <<endl;
                vida += rand() % 20 + 15;
                ki += rand() % 20 + 10;
                break;
            case 2:
            	cout << endl <<endl;
                cout << "Encuentras un atajo que te lleva a un antiguo templo Saiyan." <<endl <<endl;
                vida += rand() % 15 + 10;
                ki -= rand() % 30 + 20;
                break;
            case 3:
            	cout << endl <<endl;
                cout << "Al salir de namekusein, te enfrentas contra freezer. Logras derrotarlo, pero sufres da�os en el proceso." <<endl <<endl;
                vida -= rand() % 20 + 10;
                ki -= rand() % 40 + 10;
                break;
            default:
                cout << endl <<endl;
                cout << "No valido." <<endl <<endl;
                break;
        }

        cout << "Tu vida actual es: " << vida << " y tu ki actual es: " << ki <<endl <<endl;

        // Segunda decision
        
        do {
        
        cout << " ¿Que deseas hacer? " <<endl;
        cout << "1. Continuar en busca de mas Esferas del Dragon" <<endl;
        cout << "2. Explorar namekusein en busca de pistas adicionales" <<endl;
        cout << "3. Volver a casa para obtener informacion" <<endl;
        cout << " Elige una opcion de las 3 que se muestran : ";

        cin >> opcion;
        
        if (opcion < 1 || opcion > 3) {
        cout << endl;
        cout << endl << "Opcion no valida. Elige un numero del 1 al 3." << endl << endl;}

        } while (opcion < 1 || opcion > 3);

        switch (opcion) {
            case 1:
            	cout << endl <<endl;
                cout << "Encuentras una Esfera del Dragon escondida en la capsula." <<endl <<endl;
                vida += rand() % 15 + 10;
                ki += rand() % 15 + 10;
                break;
            case 2:
            	cout << endl <<endl;
                cout << "Dentro de namekusein, encuentras un antiguo artefacto Saiyan que mejora tus habilidades de combate." <<endl <<endl;
                vida += rand() % 20 + 15;
                ki += rand() % 20 + 10;
                break;
            case 3:
            	cout << endl <<endl;
                cout << "Vuelves a casa y te encuentras con Bulma, quien te proporciona una Esfera del Dragon y mejoras para tu traje de combate." <<endl <<endl;
                vida += rand() % 25 + 15;
                ki += rand() % 15 + 10;
                break;
            default:
                cout << endl <<endl;
                cout << "No valido." <<endl <<endl;
                break;
        }

        cout << "Tu vida actual es: " << vida << " y tu ki actual es: " << ki <<endl <<endl;
        


    // Tercera decisi�n
    
    do {
    
    cout << " �Que deseas hacer? " <<endl;
    cout << "1. Explorar el camino de la serpiente en busca de pistas sobre las Esferas del Dragon" <<endl;
    cout << "2. Te dirijes a Ciudad Satan en busca de la proxima Esfera del Dragon" <<endl;
    cout << "3. Volver a Kame House para entrenar en el Torneo de las Artes Marciales" <<endl;
    cout << " Elige una opcion de las 3 que se muestran : ";

    cin >> opcion;
    
        if (opcion < 1 || opcion > 3) {
        cout << endl;
        cout << endl << "Opcion no valida. Elige un numero del 1 al 3." << endl << endl;}

        } while (opcion < 1 || opcion > 3);

    switch (opcion) {
        case 1:
        	cout << endl <<endl;
            cout << "Explorando el camino de la serpiente, encuentras un objeto magico que aumenta tu resistencia." <<endl <<endl;
            vida += rand() % 15 + 10;
            ki -= rand() % 15 + 10;
            break;
        case 2:
        	cout << endl <<endl;
            cout << "Al dirijirte a Ciudad Satan, te encuentras a Mr Satan el cual te ayuda a encontrar una Esfera del Dragon." <<endl <<endl;
            vida += rand() % 20 + 15;
            ki += rand() % 20 + 10;
            break;
        case 3:
        	cout << endl <<endl;
            cout << "Vuelves a Kame House y participas en un torneo que mejora tus habilidades de combate y pasas a la final." <<endl <<endl;
            vida -= rand() % 25 + 15;
            ki += rand() % 15 + 10;
            break;
        default:
            cout << endl <<endl;
            cout << "No valido." <<endl <<endl;
            break;
    }

    cout << "Tu vida actual es: " << vida << " y tu ki actual es: " << ki <<endl <<endl;

    // Cuarta decisi�n
    
    do {
    
    cout << " �Que deseas hacer? " <<endl;
    cout << "1. Volar por el Monte Frypan en busca de la ultima Esfera del Dragon" <<endl;
    cout << "2. Entrenar para aumentar tu ki para la batalla final" <<endl;
    cout << "3. Descansar para prepararte para la batalla final" <<endl;
    cout << " Elige una opcion de las 3 que se muestran : ";

    cin >> opcion;
    
        if (opcion < 1 || opcion > 3) {
        cout << endl;
        cout << endl << "Opcion no valida. Elige un numero del 1 al 3." << endl << endl;}

        } while (opcion < 1 || opcion > 3);

    switch (opcion) {
        case 1:
        	cout << endl <<endl;
            cout << "Vuelas por el Monte Frypan  y encuentras un lugar seguro para descansar. Tambi�n encuentras la �ltima Esfera del Drag�n." <<endl <<endl;
            vida += rand() % 10 + 5;
            ki += rand() % 30 + 20;
            break;
        case 2:
        	cout << endl <<endl;
            cout << "Entrenas con Gohan dentro de la capsula del tiempo durante 1 dia entero y aumentas tu fuerza." <<endl <<endl;
            vida -= rand() % 25 + 15;
            ki -= rand() % 30 + 20;
            break;
        case 3:
        	cout << endl <<endl;
            cout << "Descansando te encuentras a Dende quien que mejora tu salud y ki para la batalla final." <<endl <<endl;
            vida += rand() % 15 + 10;
            ki += rand() % 20 + 15;
            break;
        default:
            cout << endl <<endl;
            cout << "No valido." <<endl <<endl;
            break;
    }

    cout << "Tu vida actual es: " << vida << " y tu ki actual es: " << ki <<endl <<endl;

    // Quinta decisi�n
    
    do {
    
    cout << " �Que deseas hacer? " <<endl;
    cout << "1. No peleaas en el Torneo de Artes Marciales" <<endl;
    cout << "2. Usas las esferas del Dragon" <<endl;
    cout << "3. Peleas en el Torneo de Artes Marciales para decidir el ganador" <<endl;
    cout << " Elige una opcion de las 3 que se muestran : ";

    cin >> opcion;
    
        if (opcion < 1 || opcion > 3) {
        cout << endl;
        cout << endl << "Opcion no valida. Elige un numero del 1 al 3." << endl << endl;}

        } while (opcion < 1 || opcion > 3);

    switch (opcion) {
        case 1:
        	cout << endl <<endl;
            cout << "Decides pasar el dia con tu familia, no te importa asistir al Torneo porque sabes que alguien mas le daria mas importancia a ganar ." <<endl <<endl;
            vida += rand() % 20 + 15;
            ki += rand() % 30 + 25;
            break;
        case 2:
        	cout << endl <<endl;
            cout << "Invocas a Shenlong y le pides que reviva a todos los inocentes que murieron de manera injusta." <<endl <<endl;
            vida -= rand() % 30 + 20;
            ki -= rand() % 15 + 10;
            break;
        case 3:
        	cout << endl <<endl;
            cout << "Peleas contra Cell y ganas el Torneo de Artes Marciales. Comes una semilla para curarte y Bulma te festeja con un delicioso ramen." <<endl <<endl;
            vida += rand() % 10 + 5;
            ki -= rand() % 30 + 20;
            break;
        default:
            cout << endl <<endl;
            cout << "No valido." <<endl <<endl;
            break;
    }

    decisiones++;

	cout << endl;
	cout << "Tu vida final fue de " << vida << " y tu ki final fue de " << ki <<endl <<endl;
	cout << endl;
	cout << "Has llegado al final. Completaste tu mision como guerrero en el Universo Dragon Ball" <<endl; 


    return 0;
}
}
