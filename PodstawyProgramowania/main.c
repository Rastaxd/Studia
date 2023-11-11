#include <stdio.h>
#include <stdbool.h> // <- wymagane żeby bool działało

int main() {

    float prz = 2.05; //%f , nax 6 - 7 liczb, potem traci precyzje
    double d = 3.21232131221; //%lf, max 15 - 16 liczb
    printf("%.15lf\n",d); // <- aby wypisać nalezy wpisać ilość liczb, jaka chcemy wyswietlic

    int age = 20; //%D
    short int h = 32000; // 2 bytes, od -32,768 do 32,767 %d
    unsigned int i = 65545; // 2 bytes, od 0 do 65535;
    char name[] = "Kuba"; // %S
    char grade = 'C';   // %C
    char f = 100;  // 1 byte, od -128 do 127, %d jako cyfra lub %c jako character(ASCII)
    unsigned char g = 255; // 1 byte, od 0 do 255, %d lub %c

    bool e = true; // display %d

    printf("\"I like Pizza\" - Abraham Lincoln\n");
    printf("\nYou are %d years old and your name is %s\n", age,name);
    printf("Your average grade is %c\n",grade);
    printf("Twoja srednia wynosi %f\n",prz);
    return 0;
}
