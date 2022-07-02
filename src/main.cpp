#include <Arduino.h>
#include <SPI.h> //导入库
#include <TFT_eSPI.h> 
#include "MyFont.h"

TFT_eSPI tft = TFT_eSPI(); 

/*******************单个汉字显示****************/
void showMyFont(int32_t x, int32_t y, const char c[3], uint32_t color) { 
  for (int k = 0; k < 25; k++)// 根据字库的字数调节循环的次数
    if (hanzi[k].Index[0] == c[0] && hanzi[k].Index[1] == c[1] && hanzi[k].Index[2] == c[2])
    { 
        tft.drawBitmap(x, y, hanzi[k].hz_Id, hanzi[k].hz_width, 16, color);
    }
}
/*******************整句汉字显示****************/
void showMyFonts(int32_t x, int32_t y, const char str[], uint32_t color) { //显示整句汉字，字库比较简单，上下、左右输出是在函数内实现
  int x0 = x;
  for (int i = 0; i < strlen(str); i += 3) {
    showMyFont(x0, y, str+i, color);
    x0 += 17;
    if (x0 > 112){
      x0 = 40;
      y += 20;
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.fillScreen(TFT_BLACK);
  showMyFonts(40, 50, "周一二三四五六日", TFT_YELLOW);
}
void loop() {
  // put your main code here, to run repeatedly:
}