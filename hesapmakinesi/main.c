#include <main.h>
#define LCD_ENABLE_PIN PIN_B2
#define LCD_RS_PIN PIN_B0
#define LCD_RW_PIN PIN_B1
#define LCD_DATA4 PIN_B3
#define LCD_DATA5 PIN_B4
#define LCD_DATA6 PIN_B5
#define LCD_DATA7 PIN_B6

#include <lcd.c>


int tus;


 int SayiYazdir(){
     tus=-1;
     delay_ms(50);
     
     output_high(pin_d0);
     if(input(pin_c0)){
     delay_ms(50);
     tus=3;
     }
     if(input(pin_c1)){
     delay_ms(50);
     tus=6;
     }
     if(input(pin_c2)){
     delay_ms(50);
     tus=9;
     }
     if(input(pin_c3)){
     delay_ms(50);
     tus=10;
     }
     output_low(pin_d0);
      
     delay_ms(50);
     output_high(pin_d1);
     if(input(pin_c0)){
     delay_ms(50);
     tus=8;
     }
     if(input(pin_c1)){
     delay_ms(50);
     tus=5;
     }
     if(input(pin_c2)){
     delay_ms(50);
     tus=2;
     }
     if(input(pin_c3)){
     delay_ms(50);
     tus=0;
     }
     
      output_low(pin_d1);
      delay_ms(50);

     output_high(pin_d2);
     
     if(input(pin_c0)){
     delay_ms(50);
     tus=1;
     }
     if(input(pin_c1)){
     delay_ms(20);
     tus=4;
     }
     if(input(pin_c2)){
     delay_ms(50);
     tus=7;
     }
     if(input(pin_c3)){
     delay_ms(50);
     tus=11;
     }
     output_low(pin_d2);
     delay_ms(50);
     

     output_high(pin_d3);
     
     if(input(pin_c0)){
     delay_ms(50);
     tus=12;
     }
     if(input(pin_c1)){
     delay_ms(20);
     tus=13;
     }
     if(input(pin_c2)){
     delay_ms(50);
     tus=14;
     }
     if(input(pin_c3)){
     delay_ms(50);
     tus=15;
     }
     output_low(pin_d3);
     delay_ms(50);
   return tus;  
     }

void main()
{
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_d(0xf0);

   lcd_init();

   lcd_putc("\fi�lem yap");

  while(TRUE)
   {
   int donentus=sayiYazdir();
   lcd_putc("\n");
   if(donentus!=-1){
   
   printf(lcd_putc,"%u" , donentus);
   }
   
   }


}
