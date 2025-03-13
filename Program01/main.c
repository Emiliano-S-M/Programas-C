#include <stdio.h>  // Incluye la librería estándar de entrada/salida, que proporciona funciones como printf() para imprimir en la consola.
#include <stdlib.h> // Incluye la librería estándar que permite el uso de funciones como system() para ejecutar comandos del sistema operativo.
#define _USE_MATH_DEFINES  // Activa la definición de constantes matemáticas, como M_PI para el valor de pi, al usar la librería math.h.
#include <math.h>  // Incluye la librería matemática que proporciona funciones matemáticas como pow() para calcular potencias y constantes como M_PI.
#include <windows.h>  // Incluye la librería de la API de Windows, que proporciona acceso a funciones específicas del sistema operativo Windows, 
                     // como manejo de ventanas, control de procesos y otras funcionalidades relacionadas con Windows. En este caso, para modificar la
                     // salida de la consola para que permita caracteres acentuados.


// Función para limpiar la consola según el sistema operativo
// Usa "cls" en Windows y "clear" en sistemas basados en Unix como Linux y macOS.
void limpiarConsola() {
    #ifdef _WIN32  
        system("cls");  // "cls" es el comando para limpiar la consola en Windows
    #else  
        system("clear"); // "clear" es el comando para limpiar la consola en Linux/macOS
    #endif  
}

// Función que muestra el menú de opciones en la consola
// Muestra las opciones disponibles para calcular áreas de diferentes figuras geométricas.
void menu() {
    limpiarConsola();
    printf("\tSeleccione una opcion del menu:\n");

    // Se imprimen las opciones del menú, cada una con un número correspondiente
    printf("\t1.\tArea de un circulo\n");        // Opción para calcular el área de un círculo
    printf("\t2.\tArea de un cuadrado\n");       // Opción para calcular el área de un cuadrado
    printf("\t3.\tArea de un rectangulo\n");     // Opción para calcular el área de un rectángulo
    printf("\t4.\tArea de un triangulo\n");      // Opción para calcular el área de un triángulo
    printf("\t5.\tArea de un rombo\n");          // Opción para calcular el área de un rombo
    printf("\t6.\tArea de un romboide\n");       // Opción para calcular el área de un romboide
    printf("\t7.\tArea de un trapecio\n");       // Opción para calcular el área de un trapecio
    printf("\t8.\tArea de un paralelogramo\n");  // Opción para calcular el área de un paralelogramo
    printf("\t9.\tArea de un elipse\n");         // Opción para calcular el área de una elipse
    printf("\t10.\tArea de un poligono regular\n"); // Opción para calcular el área de un polígono regular
    printf("\t11.\tSalir\n");                    // Opción para salir del programa
}


// Función para calcular el área de un círculo
void areaCirculo() {
    double radio;
    printf("Introduce el radio del círculo: ");
    scanf("%lf", &radio);
    double area = M_PI * pow(radio, 2);  // Área = pi * r^2
    printf("El área del círculo es: %.2lf\n", area);
}

// Función para calcular el área de un cuadrado
void areaCuadrado() {
    double lado;
    printf("Introduce el lado del cuadrado: ");
    scanf("%lf", &lado);
    double area = pow(lado, 2);  // Área = lado^2
    printf("El área del cuadrado es: %.2lf\n", area);
}

// Función para calcular el área de un rectángulo
void areaRectangulo() {
    double largo, ancho;
    printf("Introduce el largo del rectángulo: ");
    scanf("%lf", &largo);
    printf("Introduce el ancho del rectángulo: ");
    scanf("%lf", &ancho);
    double area = largo * ancho;  // Área = largo * ancho
    printf("El área del rectángulo es: %.2lf\n", area);
}

// Función para calcular el área de un triángulo
void areaTriangulo() {
    double base, altura;
    printf("Introduce la base del triángulo: ");
    scanf("%lf", &base);
    printf("Introduce la altura del triángulo: ");
    scanf("%lf", &altura);
    double area = (base * altura) / 2;  // Área = (base * altura) / 2
    printf("El área del triángulo es: %.2lf\n", area);
}

// Función para calcular el área de un rombo
void areaRombo() {
    double diagonalMayor, diagonalMenor;
    printf("Introduce la diagonal mayor del rombo: ");
    scanf("%lf", &diagonalMayor);
    printf("Introduce la diagonal menor del rombo: ");
    scanf("%lf", &diagonalMenor);
    double area = (diagonalMayor * diagonalMenor) / 2;  // Área = (d1 * d2) / 2
    printf("El área del rombo es: %.2lf\n", area);
}

// Función para calcular el área de un romboide
void areaRomboide() {
    double base, altura;
    printf("Introduce la base del romboide: ");
    scanf("%lf", &base);
    printf("Introduce la altura del romboide: ");
    scanf("%lf", &altura);
    double area = base * altura;  // Área = base * altura
    printf("El área del romboide es: %.2lf\n", area);
}

// Función para calcular el área de un trapecio
void areaTrapecio() {
    double baseMayor, baseMenor, altura;
    printf("Introduce la base mayor del trapecio: ");
    scanf("%lf", &baseMayor);
    printf("Introduce la base menor del trapecio: ");
    scanf("%lf", &baseMenor);
    printf("Introduce la altura del trapecio: ");
    scanf("%lf", &altura);
    double area = ((baseMayor + baseMenor) * altura) / 2;  // Área = ((b1 + b2) * h) / 2
    printf("El área del trapecio es: %.2lf\n", area);
}

// Función para calcular el área de un paralelogramo
void areaParalelogramo() {
    double base, altura;
    printf("Introduce la base del paralelogramo: ");
    scanf("%lf", &base);
    printf("Introduce la altura del paralelogramo: ");
    scanf("%lf", &altura);
    double area = base * altura;  // Área = base * altura
    printf("El área del paralelogramo es: %.2lf\n", area);
}

// Función para calcular el área de una elipse
void areaElipse() {
    double semiEjeMayor, semiEjeMenor;
    printf("Introduce el semi-eje mayor de la elipse: ");
    scanf("%lf", &semiEjeMayor);
    printf("Introduce el semi-eje menor de la elipse: ");
    scanf("%lf", &semiEjeMenor);
    double area = M_PI * semiEjeMayor * semiEjeMenor;  // Área = pi * a * b
    printf("El área de la elipse es: %.2lf\n", area);
}

// Función para calcular el área de un polígono regular
void areaPoligonoRegular() {
    int lados;
    double longitud, apotema;
    printf("Introduce el número de lados del polígono: ");
    scanf("%d", &lados);
    printf("Introduce la longitud de un lado del polígono: ");
    scanf("%lf", &longitud);
    printf("Introduce el apotema del polígono: ");
    scanf("%lf", &apotema);
    double area = (lados * longitud * apotema) / 2;  // Área = (n * a * p) / 2
    printf("El área del polígono regular es: %.2lf\n", area);
}

// Función que ejecuta la opción seleccionada por el usuario
// Usa un switch para llamar a la función correspondiente según la opción seleccionada por el usuario.
void opcionSeleccionada(){
    int opcion;
    // Verifica si el valor ingresado es un número
    // Usamos un bucle para seguir pidiendo la opción hasta que se ingrese un valor válido
    while (1) {
        printf("Selecciona una opción: ");
        
        if (scanf("%d", &opcion) != 1) {
            // Si el valor no es un número, mostramos un mensaje de error
            printf("Error: Por favor, ingrese un número válido.\n");
            // Limpiar el buffer de entrada para evitar que se queden caracteres no válidos
            while (getchar() != '\n'); // Lee y descarta los caracteres sobrantes en el buffer
        } else {
            // Si la entrada es válida, salimos del bucle
            break;
        }
    }

    limpiarConsola();
    // Si la entrada es válida, se ejecuta el switch
    switch(opcion) {
        case 1:
            areaCirculo();
            break;
        case 2:
            areaCuadrado();
            break;
        case 3:
            areaRectangulo();
            break;
        case 4:
            areaTriangulo();
            break;
        case 5:
            areaRombo();
            break;
        case 6:
            areaRomboide();
            break;
        case 7:
            areaTrapecio();
            break;
        case 8:
            areaParalelogramo();
            break;
        case 9:
            areaElipse();
            break;
        case 10:
            areaPoligonoRegular();
            break;
        case 11:
            printf("Saliendo...\n");
            exit(0); // 0 indica que el programa terminó exitosamente
            break;
        default:
            menu();
            opcionSeleccionada();
            break;
    }
}


// Función que controla la continuidad del programa
// Permite al usuario realizar cálculos múltiples antes de salir del programa.
void continuidad() {
    int continuar = 1;
    while (continuar) {
        menu();  // Muestra el menú
        opcionSeleccionada();  // Llama a la función que maneja la opción seleccionada por el usuario
        
        // Preguntar al usuario si desea realizar otro cálculo
        while (1) {  // Bucle para verificar que la entrada sea 1 o 0
            printf("\n¿Deseas hacer otro cálculo? (1=Sí, 0=No): ");
            if (scanf("%d", &continuar) != 1 || (continuar != 1 && continuar != 0)) {
                // Si la entrada no es un número o no es 1 o 0, muestra un mensaje de error
                printf("Opción no válida. Por favor, ingrese 1 para continuar o 0 para salir.\n");
                
                // Limpiar el buffer de entrada para evitar que se queden caracteres no válidos
                while (getchar() != '\n');  // Lee y descarta los caracteres sobrantes en el buffer
            } else {
                break;  // Si la entrada es válida (1 o 0), salimos del bucle
            }
        }

        if (continuar != 1) {
            printf("Gracias por usar el programa. ¡Adiós!\n");
            break;  // Si la respuesta no es 1, el programa termina
        }
    }
}


int main(void) {
    // Configurar la salida de la consola para usar UTF-8
    SetConsoleOutputCP(CP_UTF8);
    continuidad();  // Llama a la función que gestiona el flujo del programa
    return 0;
}