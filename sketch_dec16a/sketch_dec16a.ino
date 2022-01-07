#include<LiquidCrystal.h>
 
// 创建lcd控制对象,并指定其引脚与Arduino控制板对应关系
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
 
void setup()
{
  lcd.begin(16,2);
  lcd.print("zhangyan,（可爱的小燕子）");
}
 
void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Happy birthday!!!");
}
 
 
