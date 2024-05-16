#define buzzz 6
#define rele_module 7 
const int a = 2;
const int b = 3;
const int c = 4;            //variables constantes
const int d = 5;
const int X = 4;
const int pines_display[X] = {a, b, c, d};
const int binario_numeros [10] [X]={
  
 {0, 0, 0, 0},//0
 {1, 0, 0, 0},//1
 {0, 1, 0, 0},//2
 {1, 1, 0, 0},//3
 {0, 0, 1, 0},//4   
 {1, 0, 1, 0},//5
 {0, 1, 1, 0},//6
 {1, 1, 1, 0},//7
 {0, 0, 0, 1},//8
 {1, 0, 0, 1} //9  
 }; 

   int finalizar = false;
    void setup() {
     pinMode(buzzz, OUTPUT);
      pinMode(rele_module, OUTPUT);
       digitalWrite(rele_module, LOW);
        for (int y = 0; y < X; y++){
         pinMode(pines_display[X], OUTPUT);
          digitalWrite(pines_display[X], HIGH);
 }
}
void print(int A) {
 for (int y = 0; y < X; y++) {
  digitalWrite(pines_display[X], binario_numeros[A][X]);
    }
} 
void loop() {
 if(!finalizar){ 
        for (int y = 9; y >= 0; y--) {
            print(y);
            delay(1000);
        }
   tone(buzzz, 250);
   digitalWrite(rele_module, HIGH);
   delay(500);
   noTone(buzzz);
   delay(500);
   digitalWrite(rele_module, LOW);
    finalizar = true;
   } 
  else{
   finalizar = false;
 }
}