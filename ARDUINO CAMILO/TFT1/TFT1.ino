#include <Adafruit_GFX.h>    // Biblioteca gráfica
#include <Adafruit_TFTLCD.h> // Biblioteca de la pantalla TFT

// Define los pines utilizados
#define LCD_CS A3 // Pin Chip Select
#define LCD_CD A2 // Pin Command/Data
#define LCD_WR A1 // Pin Write
#define LCD_RD A0 // Pin Read
#define LCD_RST A4 // Pin Reset

// Crea el objeto de la pantalla
Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RST);

// Definición de colores
#define BLACK   0x0000
#define WHITE   0xFFFF

void setup() {
  // Inicializa la pantalla
  tft.begin(0x9341); // Asegúrate de que el ID coincida con tu pantalla
  tft.setRotation(1); // Configura la rotación si es necesario
  tft.fillScreen(BLACK); // Limpia la pantalla
  tft.setCursor(0, 0); // Establece el cursor al inicio
  tft.setTextColor(WHITE); // Color del texto
  tft.setTextSize(2); // Tamaño del texto
  tft.println("Hola Mundo!"); // Muestra el texto en la pantalla
}

void loop() {
  // Puedes agregar más código aquí para actualizar la pantalla
}