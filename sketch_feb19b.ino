#define pinmode_1 6
#define pinmode_2 8
#define pinmode_3 12
#define pinmode_4 10
#define pinmode_5 4
#define pinmode_6 2

void setup()
{
Serial.begin(9600);
pinMode(pinmode_1, OUTPUT);
pinMode(pinmode_2, OUTPUT);
pinMode(pinmode_3, OUTPUT);
pinMode(pinmode_4, OUTPUT);
pinMode(pinmode_5, OUTPUT);
pinMode(pinmode_6, OUTPUT);

}
String leds;
void loop() 
{
  while (Serial.available() > 0){
    low();
    leds = Serial.readString();
    Serial.println(leds);
   
  }
  if (leds == "12345678"){
      all();
    }
    if (leds == "1"){
      first();
    }
    if (leds == "2"){
      second();
    }
    if (leds == "3"){
      third();
    }
    if (leds == "4"){
      fourth();
    }
    if (leds == "5"){
      fifth();
    }
    if (leds == "6"){
      sixth();
    }
    if (leds == "7"){
      seventh();
    }
    if (leds == "8"){
      eighth();
    }
    if (leds == "12"){
      first_second();
    }
    if (leds == "13"){
      first_third();
    }
    if (leds == "14"){
      first_fourth();
    }
    if (leds == "23"){
      second_third();
    }
    if (leds == "24"){
      second_fourth();
    }
    if (leds == "34"){
      third_fourth();
    }
    if (leds == "56"){
      fifth_sixth();
    }
    if (leds == "57"){
      fifth_seventh();
    }
    if (leds == "58"){
      fifth_eighth();
      sixth_seventh();
    }
    if (leds == "68"){
      sixth_eighth();
    }
    if (leds == "78"){
      seventh_eighth();
    }
    if (leds == "15"){
      first_fifth();
    }
    if (leds == "26"){
      second_sixth();
    }
    if (leds == "37"){
      third_seventh();
    }
    if (leds == "48"){
      fourth_eighth();
    }
    if (leds == "16"){
      first_sixth();
    }
    if (leds == "17"){
      first_seventh();
    }
    if (leds == "18"){
      first_eighth();
    }
    if (leds == "25"){
      second_fifth();
    }
    if (leds == "27"){
      second_seventh();
    }
    if (leds == "28"){
      second_eighth();
    }
    if (leds == "35"){
      third_fifth();
    }
    if (leds == "36"){
      third_sixth();
    }
    if (leds == "38"){
      third_eighth();
    }
    if (leds == "45"){
      fourth_fifth();
    }
    if (leds == "46"){
      fourth_sixth();
    }
    if (leds == "47"){
      fourth_seventh();
    }
    if (leds == "123"){
      first_second_third();
    }
    if (leds == "124"){
      first_second_fourth();
    }
    if (leds == "125"){
      first_second_fifth();
    }
    if (leds == "126"){
      first_second_sixth();
    }
    if (leds == "127"){
      first_second_seventh();
    }
    if (leds == "128"){
      first_second_eighth();
    }
    if (leds == "134"){
      first_third_fourth();
    }
    if (leds == "135"){
      first_third_fifth();
    }
    if (leds == "136"){
      first_third_sixth();
    }
    if (leds == "137"){
      first_third_seventh();
    }
    if (leds == "138"){
      first_third_eighth();
    }
    if (leds == "145"){
      first_fourth_fifth();
    }
    if (leds == "146"){
      first_fourth_sixth();
    }
    if (leds == "147"){
      first_fourth_seventh();
    }
    if (leds == "148"){
      first_fourth_eighth();
    }
    if (leds == "156"){
      first_fifth_sixth();
    }
    if (leds == "157"){
      first_fifth_seventh();
    }
    if (leds == "158"){
      first_fifth_eighth();
    }
    if (leds == "167"){
      first_sixth_seventh();
    }
    if (leds == "168"){
      first_sixth_eighth();
    }
    if (leds == "178"){
      first_seventh_eighth();
    }
    if (leds == "234"){
      second_third_fourth();
    }
    if (leds == "235"){
      second_third_fifth();
    }
    if (leds == "236"){
      second_third_sixth();
    }
    if (leds == "237"){
      second_third_seventh();
    }
    if (leds == "238"){
      second_third_eighth();
    }
    if (leds == "245"){
      second_fourth_fifth();
    }
    if (leds == "246"){
      second_fourth_sixth();
    }
    if (leds == "247"){
      second_fourth_seventh();
    }
    if (leds == "248"){
      second_fourth_eighth();
    }
    if (leds == "256"){
      second_fifth_sixth();
    }
    if (leds == "257"){
      second_fifth_seventh();
    }
    if (leds == "258"){
      second_fifth_eighth();
    }
    if (leds == "267"){
      second_sixth_seventh();
    }
    if (leds == "268"){
      second_sixth_eighth();
    }
    if (leds == "278"){
      second_seventh_eighth();
    }
    if (leds == "345"){
      third_fourth_fifth();
    }
    if (leds == "346"){
      third_fourth_sixth();
    }
    if (leds == "347"){
      third_fourth_seventh();
    }
    if (leds == "348"){
      third_fourth_eighth();
    }
    if (leds == "356"){
      third_fifth_sixth();
    }
    if (leds == "357"){
      third_fifth_seventh();
    }
    if (leds == "358"){
      third_fifth_eighth();
    }
    if (leds == "367"){
      third_sixth_seventh();
    }
    if (leds == "368"){
      third_sixth_eighth();
    }
    if (leds == "378"){
      third_seventh_eighth();
    }
    if (leds == "456"){
      fourth_fifth_sixth();
    }
    if (leds == "457"){
      fourth_fifth_seventh();
    }
    if (leds == "458"){
      fourth_fifth_eighth();
    }
    if (leds == "467"){
      fourth_sixth_seventh();
    }
    if (leds == "468"){
      fourth_sixth_eighth();
    }
    if (leds == "478"){
      fourth_seventh_eighth();
    }
    if (leds == "567"){
      fifth_sixth_seventh();
    }
    if (leds == "568"){
      fifth_sixth_eighth();
    }
    if (leds == "578"){
      fifth_seventh_eighth();
    }
    if (leds == "678"){
      sixth_seventh_eighth();
    }
    if (leds == "1234"){
      first_second_third_fourth();
    }
    if (leds == "1235"){
      first_second_third_fifth();
    }
    if (leds == "1236"){
      first_second_third_sixth();
    }
    if (leds == "1237"){
      first_second_third_seventh();
    }
    if (leds == "1238"){
      first_second_third_eighth();
    }
    if (leds == "1245"){
      first_second_fourth_fifth();
    }
    if (leds == "1246"){
      first_second_fourth_sixth();
    }
    if (leds == "1247"){
      first_second_fourth_seventh();
    }
    if (leds == "1248"){
      first_second_fourth_eighth();
    }
    if (leds == "1256"){
      first_second_fifth_sixth();
    }
    if (leds == "1257"){
      first_second_fifth_seventh();
    }
    if (leds == "1258"){
      first_second_fifth_eighth();
    }
    if (leds == "1267"){
      first_second_sixth_seventh();
    }
    if (leds == "1268"){
      first_second_sixth_eighth();
    }
    if (leds == "1278"){
      first_second_seventh_eighth();
    }
    if (leds == "1345"){
      first_third_fourth_fifth();
    }
    if (leds == "1346"){
      first_third_fourth_sixth();
    }
    if (leds == "1347"){
      first_third_fourth_seventh();
    }
    if (leds == "1348"){
      first_third_fourth_eighth();
    }
    if (leds == "1356"){
      first_third_fifth_sixth();
    }
    if (leds == "1357"){
      first_third_fifth_seventh();
    }
    if (leds == "1358"){
      first_third_fifth_eighth();
    }
    if (leds == "1367"){
      first_third_sixth_seventh();
    }
    if (leds == "1368"){
      first_third_sixth_eighth();
    }
    if (leds == "1378"){
      first_third_seventh_eighth();
    }
    if (leds == "1456"){
      first_fourth_fifth_sixth();
    }
    if (leds == "1457"){
      first_fourth_fifth_seventh();
    }
    if (leds == "1458"){
      first_fourth_fifth_eighth();
    }
    if (leds == "1467"){
      first_fourth_sixth_seventh();
    }
    if (leds == "1468"){
      first_fourth_sixth_eighth();
    }
    if (leds == "1478"){
      first_fourth_seventh_eighth();
    }
    if (leds == "1567"){
      first_fifth_sixth_seventh();
    }
    if (leds == "1568"){
      first_fifth_sixth_eighth();
    }
    if (leds == "1578"){
      first_fifth_seventh_eighth();
    }
    if (leds == "1678"){
      first_sixth_seventh_eighth();
    }
    if (leds == "2345"){
      second_third_fourth_fifth();
    }
    if (leds == "2346"){
      second_third_fourth_sixth();
    }
    if (leds == "2347"){
      second_third_fourth_seventh();
    }
    if (leds == "2348"){
      second_third_fourth_eighth();
    }
    if (leds == "2356"){
      second_third_fifth_sixth();
    }
    if (leds == "2357"){
      second_third_fifth_seventh();
    }
    if (leds == "2358"){
      second_third_fifth_eighth();
    }
    if (leds == "2367"){
      second_third_sixth_seventh();
    }
    if (leds == "2368"){
      second_third_sixth_eighth();
    }
    if (leds == "2378"){
      second_third_seventh_eighth();
    }
    if (leds == "2456"){
      second_fourth_fifth_sixth();
    }
    if (leds == "2457"){
      second_fourth_fifth_seventh();
    }
    if (leds == "2458"){
      second_fourth_fifth_eighth();
    }
    if (leds == "2467"){
      second_fourth_sixth_seventh();
    }
    if (leds == "2468"){
      second_fourth_sixth_eighth();
    }
    if (leds == "2478"){
      second_fourth_seventh_eighth();
    }
    if (leds == "2567"){
      second_fifth_sixth_seventh();
    }
    if (leds == "2568"){
      second_fifth_sixth_eighth();
    }
    if (leds == "2578"){
      second_fifth_seventh_eighth();
    }
    if (leds == "2678"){
      second_sixth_seventh_eighth();
    }
    if (leds == "3456"){
      third_fourth_fifth_sixth();
    }
    if (leds == "3457"){
      third_fourth_fifth_seventh();
    }
    if (leds == "3458"){
      third_fourth_fifth_eighth();
    }
    if (leds == "3467"){
      third_fourth_sixth_seventh();
    }
    if (leds == "3468"){
      third_fourth_sixth_eighth();
    }
    if (leds == "3478"){
      third_fourth_seventh_eighth();
    }
    if (leds == "3567"){
      third_fifth_sixth_seventh();
    }
    if (leds == "3568"){
      third_fifth_sixth_eighth();
    }
    if (leds == "3578"){
      third_fifth_seventh_eighth();
    }
    if (leds == "3678"){
      third_sixth_seventh_eighth();
    }
    if (leds == "4567"){
      fourth_fifth_sixth_seventh();
    }
    if (leds == "4568"){
      fourth_fifth_sixth_eighth();
    }
    if (leds == "4578"){
      fourth_fifth_seventh_eighth();
    }
    if (leds == "4678"){
      fourth_sixth_seventh_eighth();
    }
    if (leds == "5678"){
      fifth_sixth_seventh_eighth();
    }
    if (leds == "12345"){
      first_second_third_fourth_fifth();
    }
    if (leds == "12346"){
      first_second_third_fourth_sixth();
    }
    if (leds == "12347"){
      first_second_third_fourth_seventh();
    }
    if (leds == "12348"){
      first_second_third_fourth_eighth();
    }
    if (leds == "12356"){
      first_second_third_fifth_sixth();
    }
    if (leds == "12357"){
      first_second_third_fifth_seventh();
    }
    if (leds == "12358"){
      first_second_third_fifth_eighth();
    }
    if (leds == "12367"){
      first_second_third_sixth_seventh();
    }
    if (leds == "12368"){
      first_second_third_sixth_eighth();
    }
    if (leds == "12378"){
      first_second_third_seventh_eighth();
    }
    if (leds == "12456"){
      first_second_fourth_fifth_sixth();
    }
    if (leds == "12457"){
      first_second_fourth_fifth_seventh();
    }
    if (leds == "12458"){
      first_second_fourth_fifth_eighth();
    }
    if (leds == "12467"){
      first_second_fourth_sixth_seventh();
    }
    if (leds == "12468"){
      first_second_fourth_sixth_eighth();
    }
    if (leds == "12478"){
      first_second_fourth_seventh_eighth();
    }
    if (leds == "12567"){
      first_second_fifth_sixth_seventh();
    }
    if (leds == "12568"){
      first_second_fifth_sixth_eighth();
    }
    if (leds == "12578"){
      first_second_fifth_seventh_eighth();
    }
    if (leds == "12678"){
      first_second_sixth_seventh_eighth();
    }
    if (leds == "13456"){
      first_third_fourth_fifth_sixth();
    }
    if (leds == "13457"){
      first_third_fourth_fifth_seventh();
    }
    if (leds == "13458"){
      first_third_fourth_fifth_eighth();
    }
    if (leds == "13467"){
      first_third_fourth_sixth_seventh();
    }
    if (leds == "13468"){
      first_third_fourth_sixth_eighth();
    }
    if (leds == "13478"){
      first_third_fourth_seventh_eighth();
    }
    if (leds == "13567"){
      first_third_fifth_sixth_seventh();
    }
    if (leds == "13568"){
      first_third_fifth_sixth_eighth();
    }
    if (leds == "13578"){
      first_third_fifth_seventh_eighth();
    }
    if (leds == "13678"){
      first_third_sixth_seventh_eighth();
    }
    if (leds == "14567"){
      first_fourth_fifth_sixth_seventh();
    }
    if (leds == "14568"){
      first_fourth_fifth_sixth_eighth();
    }
    if (leds == "14578"){
      first_fourth_fifth_seventh_eighth();
    }
    if (leds == "14678"){
      first_fourth_sixth_seventh_eighth();
    }
    if (leds == "15678"){
      first_fifth_sixth_seventh_eighth();
    }
    if (leds == "23456"){
      second_third_fourth_fifth_sixth();
    }
    if (leds == "23457"){
      second_third_fourth_fifth_seventh();
    }
    if (leds == "23458"){
      second_third_fourth_fifth_eighth();
    }
    if (leds == "23467"){
      second_third_fourth_sixth_seventh();
    }
    if (leds == "23468"){
      second_third_fourth_sixth_eighth();
    }
    if (leds == "23478"){
      second_third_fourth_seventh_eighth();
    }
    if (leds == "23567"){
      second_third_fifth_sixth_seventh();
    }
    if (leds == "23568"){
      second_third_fifth_sixth_eighth();
    }
    if (leds == "23578"){
      second_third_fifth_seventh_eighth();
    }
    if (leds == "23678"){
      second_third_sixth_seventh_eighth();
    }
    if (leds == "24567"){
      second_fourth_fifth_sixth_seventh();
    }
    if (leds == "24568"){
      second_fourth_fifth_sixth_eighth();
    }
    if (leds == "24578"){
      second_fourth_fifth_seventh_eighth();
    }
    if (leds == "24678"){
      second_fourth_sixth_seventh_eighth();
    }
    if (leds == "25678"){
      second_fifth_sixth_seventh_eighth();
    }
    if (leds == "34567"){
      third_fourth_fifth_sixth_seventh();
    }
    if (leds == "34568"){
      third_fourth_fifth_sixth_eighth();
    }
    if (leds == "34578"){
      third_fourth_fifth_seventh_eighth();
    }
    if (leds == "34678"){
      third_fourth_sixth_seventh_eighth();
    }
    if (leds == "35678"){
      third_fifth_sixth_seventh_eighth();
    }
    if (leds == "45678"){
      fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "123456"){
      first_second_third_fourth_fifth_sixth();
    }
    if (leds == "123457"){
      first_second_third_fourth_fifth_seventh();
    }
    if (leds == "123458"){
      first_second_third_fourth_fifth_eighth();
    }
    if (leds == "123467"){
      first_second_third_fourth_sixth_seventh();
    }
    if (leds == "123468"){
      first_second_third_fourth_sixth_eighth();
    }
    if (leds == "123478"){
      first_second_third_fourth_seventh_eighth();
    }
    if (leds == "123567"){
      first_second_third_fifth_sixth_seventh();
    }
    if (leds == "123568"){
      first_second_third_fifth_sixth_eighth();
    }
    if (leds == "123578"){
      first_second_third_fifth_seventh_eighth();
    }
    if (leds == "123678"){
      first_second_third_sixth_seventh_eighth();
    }
    if (leds == "124567"){
      first_second_fourth_fifth_sixth_seventh();
    }
    if (leds == "124568"){
      first_second_fourth_fifth_sixth_eighth();
    }
    if (leds == "124578"){
      first_second_fourth_fifth_seventh_eighth();
    }
    if (leds == "124678"){
      first_second_fourth_sixth_seventh_eighth();
    }
    if (leds == "125678"){
      first_second_fifth_sixth_seventh_eighth();
    }
    if (leds == "134567"){
      first_third_fourth_fifth_sixth_seventh();
    }
    if (leds == "134568"){
      first_third_fourth_fifth_sixth_eighth();
    }
    if (leds == "134578"){
      first_third_fourth_fifth_seventh_eighth();
    }
    if (leds == "134678"){
      first_third_fourth_sixth_seventh_eighth();
    }
    if (leds == "135678"){
      first_third_fifth_sixth_seventh_eighth();
    }
    if (leds == "145678"){
      first_fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "234567"){
      second_third_fourth_fifth_sixth_seventh();
    }
    if (leds == "234568"){
      second_third_fourth_fifth_sixth_eighth();
    }
    if (leds == "234578"){
      second_third_fourth_fifth_seventh_eighth();
    }
    if (leds == "234678"){
      second_third_fourth_sixth_seventh_eighth();
    }
    if (leds == "235678"){
      second_third_fifth_sixth_seventh_eighth();
    }
    if (leds == "245678"){
      second_fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "345678"){
      third_fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "1234567"){
      first_second_third_fourth_fifth_sixth_seventh();
    }
    if (leds == "1234568"){
      first_second_third_fourth_fifth_sixth_eighth();
    }
    if (leds == "1234578"){
      first_second_third_fourth_fifth_seventh_eighth();
    }
    if (leds == "1234678"){
      first_second_third_fourth_sixth_seventh_eighth();
    }
    if (leds == "1235678"){
      first_second_third_fifth_sixth_seventh_eighth();
    }
    if (leds == "1245678"){
      first_second_fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "1345678"){
      first_third_fourth_fifth_sixth_seventh_eighth();
    }
    if (leds == "2345678"){
      second_third_fourth_fifth_sixth_seventh_eighth();
    }
    
}
void low(){
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, LOW);
}
void all(){
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, LOW);
}
void first(){
      //верхний ряд первый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void second() {
  //верхний ряд второй светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void third(){
  //верхний ряд третий светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void fourth(){
  //верхний ряд четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void fifth(){
  //нижний ряд первый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void sixth(){
  //нижний ряд второй светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void seventh (){
  //нижний ряд третий светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void eighth (){
  //нижний ряд четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void first_second(){
//верхний ряд первый и второй светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void first_third(){
  //верхний ряд первый и третий светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void first_fourth(){
  //верхний ряд первый и четвертый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void second_third(){
  //верхний ряд второй и третий светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void second_fourth(){
  //верхний ряд второй и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void third_fourth(){
  //верхний ряд третий и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void fifth_sixth(){
  //нижний ряд первый и второй светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void fifth_seventh(){
  //нижний ряд первый и третий светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void fifth_eighth(){
  //нижний ряд первый и четвертый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void sixth_seventh(){
  //нижний ряд второй и третий светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void sixth_eighth(){
//нижний ряд второй и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void seventh_eighth(){
  //нижний ряд третий и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void first_fifth(){
  //нижний ряд первый верхний ряд первый
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, HIGH);
}
void second_sixth(){
  //нижний ряд второй верхний ряд второй
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, HIGH);
}
void third_seventh(){
//нижний ряд третий верхний ряд третий
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, HIGH);
}
void fourth_eighth(){
  //нижний ряд четвертый верхний ряд четвертый
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, HIGH);
}
void first_sixth(){
  //верхний ряд первый и нижний второй  
first();
delay(5);
sixth();
delay(5);
}
void first_seventh(){
   //верхний ряд первый и нижний третий 
first();
delay(5);
seventh();
delay(5);
}
void first_eighth(){
  //верхний ряд первый и нижний четвертый  
first();
delay(5);
eighth();
delay(5);
}
void second_fifth(){
 //верхний ряд второй и нижний первый 
second();
delay(5);
fifth();
delay(5);
}
void second_seventh(){
  //верхний ряд второй и нижний третий  
second();
delay(5);
seventh();
delay(5);
}
void second_eighth(){
  //верхний ряд второй и нижний третий  
second();
delay(5);
eighth();
delay(5);
}
void third_fifth(){ 
third();
delay(5);
fifth();
delay(5);
}
void third_sixth(){ 
third();
delay(5);
sixth();
delay(5);
}
void third_eighth(){ 
third();
delay(5);
eighth();
delay(5);
}
void fourth_fifth(){ 
fourth();
delay(5);
fifth();
delay(5);
}
void fourth_sixth(){ 
fourth();
delay(5);
sixth();
delay(5);
}
void fourth_seventh(){ 
fourth();
delay(5);
seventh();
delay(5);
}
void first_second_third(){
  //верхний ряд первый, второй и третий светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
delay(500);
}
void first_second_fourth(){
  //верхний ряд первый, второй и 4 светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
delay(500);
}
void first_second_fifth(){
first_second();
delay(5);
fifth();
delay(5);
}
void first_second_sixth(){
first_second();
delay(5);
sixth();
delay(5);
}
void first_second_seventh(){
first_second();
delay(5);
seventh();
delay(5);
}
void first_second_eighth(){
first_second();
delay(5);
eighth();
delay(5);
}
void first_third_fourth(){
    //верхний ряд первый, третий и четвертый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void first_third_fifth(){
first_third();
delay(5);
fifth();
delay(5);
} 
void first_third_sixth(){
first_third();
delay(5);
sixth();
delay(5);
}  
void first_third_seventh(){
first_third();
delay(5);
seventh();
delay(5);
}  
void first_third_eighth(){
first_third();
delay(5);
eighth();
delay(5);
}  
void first_fourth_fifth(){
first_fourth();
delay(5);
fifth();
delay(5);  
}
void first_fourth_sixth(){
first_fourth();
delay(5);
sixth();
delay(5);  
}
void first_fourth_seventh(){
first_fourth();
delay(5);
seventh();
delay(5);  
}
void first_fourth_eighth(){
first_fourth();
delay(5);
eighth();
delay(5);  
}
void first_fifth_sixth(){
first();
delay(5);
fifth_sixth();
delay(5);
}
void first_fifth_seventh(){
first();
delay(5);
fifth_seventh();
delay(5);
}
void first_fifth_eighth(){
first();
delay(5);
fifth_eighth();
delay(5);
}
void first_sixth_seventh(){
first();
delay(5);
sixth_seventh();
delay(5);
}  
void first_sixth_eighth(){
first();
delay(5);
sixth_eighth();
delay(5);
}  
void first_seventh_eighth(){
first();
delay(5);
seventh_eighth();
delay(5);
}  
void second_third_fourth(){
  //верхний ряд второй, третий и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}  
void second_third_fifth(){
second_third();
delay(5);
fifth();
delay(5);  
} 
void second_third_sixth(){
second_third();
delay(5);
sixth();
delay(5);  
} 
void second_third_seventh(){
second_third();
delay(5);
seventh();
delay(5);  
} 
void second_third_eighth(){
second_third();
delay(5);
eighth();
delay(5);  
} 
void second_fourth_fifth(){
second_fourth();
delay(5);
fifth();
delay(5);  
} 
void second_fourth_sixth(){
second_fourth();
delay(5);
sixth();
delay(5);  
} 
void second_fourth_seventh(){
second_fourth();
delay(5);
seventh();
delay(5);  
} 
void second_fourth_eighth(){
second_fourth();
delay(5);
eighth();
delay(5);  
} 
void second_fifth_sixth(){
second();
delay(5);
fifth_sixth();
delay(5);  
} 
void second_fifth_seventh(){
second();
delay(5);
fifth_seventh();
delay(5);  
} 
void second_fifth_eighth(){
second();
delay(5);
fifth_eighth();
delay(5);  
} 
void second_sixth_seventh(){
second();
delay(5);
sixth_seventh();
delay(5);  
} 
void second_sixth_eighth(){
second();
delay(5);
sixth_eighth();
delay(5);  
} 
void second_seventh_eighth(){
second();
delay(5);
seventh_eighth();
delay(5);  
} 
void third_fourth_fifth(){
third_fourth();
delay(5);
fifth();
delay(5);  
}
void third_fourth_sixth(){
third_fourth();
delay(5);
sixth();
delay(5);  
}
void third_fourth_seventh(){
third_fourth();
delay(5);
seventh();
delay(5);  
}
void third_fourth_eighth(){
third_fourth();
delay(5);
eighth();
delay(5);  
}
void third_fifth_sixth(){
third();
delay(5);
fifth_sixth();
delay(5);  
}
void third_fifth_seventh(){
third();
delay(5);
fifth_seventh();
delay(5);  
}
void third_fifth_eighth(){
third();
delay(5);
fifth_eighth();
delay(5);  
}
void third_sixth_seventh(){
third();
delay(5);
sixth_seventh();
delay(5);  
}
void third_sixth_eighth(){
third();
delay(5);
sixth_eighth();
delay(5);  
}
void third_seventh_eighth(){
third();
delay(5);
seventh_eighth();
delay(5);  
}
void fourth_fifth_sixth(){
fourth();
delay(5);
fifth_sixth();
delay(5);  
}
void fourth_fifth_seventh(){
fourth();
delay(5);
fifth_seventh();
delay(5);  
}
void fourth_fifth_eighth(){
fourth();
delay(5);
fifth_eighth();
delay(5);  
}
void fourth_sixth_seventh(){
fourth();
delay(5);
sixth_seventh();
delay(5);  
}
void fourth_sixth_eighth(){
fourth();
delay(5);
sixth_eighth();
delay(5);  
}
void fourth_seventh_eighth(){
fourth();
delay(5);
seventh_eighth();
delay(5);  
}
void fifth_sixth_seventh(){
    //нижний ряд первый, второй и третий светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, LOW);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void fifth_sixth_eighth(){
    //нижний ряд первый, второй и 4 светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, LOW);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void fifth_seventh_eighth(){
  //нижний ряд первый, третий и четвертый светодиод
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, LOW);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void sixth_seventh_eighth(){
   //нижний ряд второй, третий и четвертый светодиод
digitalWrite(pinmode_1, LOW);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void first_second_third_fourth(){
  //верхний ряд все
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, LOW);
digitalWrite(pinmode_6, HIGH);
}
void first_second_third_fifth(){
first_second_third();
delay(5);
fifth();
delay(5); 
}
void first_second_third_sixth(){
first_second_third();
delay(5);
sixth();
delay(5); 
}
void first_second_third_seventh(){
first_second_third();
delay(5);
seventh();
delay(5); 
}
void first_second_third_eighth(){
first_second_third();
delay(5);
eighth();
delay(5); 
}
void first_second_fourth_fifth(){
first_second_fourth();
delay(5);
fifth();
delay(5); 
}
void first_second_fourth_sixth(){
first_second_fourth();
delay(5);
sixth();
delay(5); 
}
void first_second_fourth_seventh(){
first_second_fourth();
delay(5);
seventh();
delay(5); 
}
void first_second_fourth_eighth(){
first_second_fourth();
delay(5);
eighth();
delay(5); 
}
void first_second_fifth_sixth(){
first_second();
delay(5);
fifth_sixth();
delay(5); 
}
void first_second_fifth_seventh(){
first_second();
delay(5);
fifth_seventh();
delay(5); 
}
void first_second_fifth_eighth(){
first_second();
delay(5);
fifth_eighth();
delay(5); 
}
void first_second_sixth_seventh(){
first_second();
delay(5);
sixth_seventh();
delay(5); 
}
void first_second_sixth_eighth(){
first_second();
delay(5);
sixth_eighth();
delay(5); 
}
void first_second_seventh_eighth(){
first_second();
delay(5);
seventh_eighth();
delay(5); 
}
void first_third_fourth_fifth(){
first_third_fourth();
delay(5);
fifth();
delay(5); 
}
void first_third_fourth_sixth(){
first_third_fourth();
delay(5);
sixth();
delay(5); 
}
void first_third_fourth_seventh(){
first_third_fourth();
delay(5);
seventh();
delay(5); 
}
void first_third_fourth_eighth(){
first_third_fourth();
delay(5);
eighth();
delay(5); 
}
void first_third_fifth_sixth(){
first_third();
delay(5);
fifth_sixth();
delay(5); 
}
void first_third_fifth_seventh(){
first_third();
delay(5);
fifth_seventh();
delay(5); 
}
void first_third_fifth_eighth(){
first_third();
delay(5);
fifth_eighth();
delay(5); 
}
void first_third_sixth_seventh(){
first_third();
delay(5);
sixth_seventh();
delay(5); 
}
void first_third_sixth_eighth(){
first_third();
delay(5);
sixth_eighth();
delay(5); 
}
void first_third_seventh_eighth(){
first_third();
delay(5);
seventh_eighth();
delay(5); 
}
void first_fourth_fifth_sixth(){
first_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void first_fourth_fifth_seventh(){
first_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void first_fourth_fifth_eighth(){
first_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void first_fourth_sixth_seventh(){
first_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void first_fourth_sixth_eighth(){
first_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void first_fourth_seventh_eighth(){
first_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void first_fifth_sixth_seventh(){
first();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_fifth_sixth_eighth(){
first();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_fifth_seventh_eighth(){
first();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_sixth_seventh_eighth(){
first();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void second_third_fourth_fifth(){
second_third_fourth();
delay(5);
fifth();
delay(5);
}
void second_third_fourth_sixth(){
second_third_fourth();
delay(5);
sixth();
delay(5);
}
void second_third_fourth_seventh(){
second_third_fourth();
delay(5);
seventh();
delay(5);
}
void second_third_fourth_eighth(){
second_third_fourth();
delay(5);
eighth();
delay(5);
}
void second_third_fifth_sixth(){
second_third();
delay(5);
fifth_sixth();
delay(5);
}
void second_third_fifth_seventh(){
second_third();
delay(5);
fifth_seventh();
delay(5);
}
void second_third_fifth_eighth(){
second_third();
delay(5);
fifth_eighth();
delay(5);
}
void second_third_sixth_seventh(){
second_third();
delay(5);
sixth_seventh();
delay(5);
}
void second_third_sixth_eighth(){
second_third();
delay(5);
sixth_eighth();
delay(5);
}
void second_third_seventh_eighth(){
second_third();
delay(5);
seventh_eighth();
delay(5);
}
void second_fourth_fifth_sixth(){
second_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void second_fourth_fifth_seventh(){
second_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void second_fourth_fifth_eighth(){
second_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void second_fourth_sixth_seventh(){
second_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void second_fourth_sixth_eighth(){
second_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void second_fourth_seventh_eighth(){
second_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void second_fifth_sixth_seventh(){
second();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void second_fifth_sixth_eighth(){
second();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void second_fifth_seventh_eighth(){
second();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void second_sixth_seventh_eighth(){
second();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void third_fourth_fifth_sixth(){
third_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void third_fourth_fifth_seventh(){
third_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void third_fourth_fifth_eighth(){
third_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void third_fourth_sixth_seventh(){
third_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void third_fourth_sixth_eighth(){
third_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void third_fourth_seventh_eighth(){
third_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void third_fifth_sixth_seventh(){
third();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void third_fifth_sixth_eighth(){
third();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void third_fifth_seventh_eighth(){
third();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void third_sixth_seventh_eighth(){
third();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void fourth_fifth_sixth_seventh(){
fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void fourth_fifth_sixth_eighth(){
fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void fourth_fifth_seventh_eighth(){
fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void fourth_sixth_seventh_eighth(){
fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void fifth_sixth_seventh_eighth(){
  //нижний ряд все
digitalWrite(pinmode_1, HIGH);
digitalWrite(pinmode_2, HIGH);
digitalWrite(pinmode_3, HIGH);
digitalWrite(pinmode_4, HIGH);
digitalWrite(pinmode_5, HIGH);
digitalWrite(pinmode_6, LOW);
}
void first_second_third_fourth_fifth(){
first_second_third_fourth();
delay(5);
fifth();
delay(5);
}
void first_second_third_fourth_sixth(){
first_second_third_fourth();
delay(5);
sixth();
delay(5);
}
void first_second_third_fourth_seventh(){
first_second_third_fourth();
delay(5);
seventh();
delay(5);
}
void first_second_third_fourth_eighth(){
first_second_third_fourth();
delay(5);
eighth();
delay(5);
}
void first_second_third_fifth_sixth(){
first_second_third();
delay(5);
fifth_sixth();
delay(5);
}
void first_second_third_fifth_seventh(){
first_second_third();
delay(5);
fifth_seventh();
delay(5);
}
void first_second_third_fifth_eighth(){
first_second_third();
delay(5);
fifth_eighth();
delay(5);
}
void first_second_third_sixth_seventh(){
first_second_third();
delay(5);
sixth_seventh();
delay(5);
}
void first_second_third_sixth_eighth(){
first_second_third();
delay(5);
sixth_eighth();
delay(5);
}
void first_second_third_seventh_eighth(){
first_second_third();
delay(5);
seventh_eighth();
delay(5);
}
void first_second_fourth_fifth_sixth(){
first_second_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void first_second_fourth_fifth_seventh(){
first_second_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void first_second_fourth_fifth_eighth(){
first_second_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void first_second_fourth_sixth_seventh(){
first_second_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void first_second_fourth_sixth_eighth(){
first_second_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void first_second_fourth_seventh_eighth(){
first_second_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void first_second_fifth_sixth_seventh(){
first_second();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_second_fifth_sixth_eighth(){
first_second();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_second_fifth_seventh_eighth(){
first_second();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_second_sixth_seventh_eighth(){
first_second();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_third_fourth_fifth_sixth(){
first_third_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void first_third_fourth_fifth_seventh(){
first_third_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void first_third_fourth_fifth_eighth(){
first_third_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void first_third_fourth_sixth_seventh(){
first_third_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void first_third_fourth_sixth_eighth(){
first_third_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void first_third_fourth_seventh_eighth(){
first_third_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void first_third_fifth_sixth_seventh(){
first_third();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_third_fifth_sixth_eighth(){
first_third();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_third_fifth_seventh_eighth(){
first_third();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_third_sixth_seventh_eighth(){
first_third();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_fourth_fifth_sixth_seventh(){
first_third();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_fourth_fifth_sixth_eighth(){
first_third();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_fourth_fifth_seventh_eighth(){
first_third();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_fourth_sixth_seventh_eighth(){
first_third();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_fifth_sixth_seventh_eighth(){
first();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void second_third_fourth_fifth_sixth(){
second_third_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void second_third_fourth_fifth_seventh(){
second_third_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void second_third_fourth_fifth_eighth(){
second_third_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void second_third_fourth_sixth_seventh(){
second_third_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void second_third_fourth_sixth_eighth(){
second_third_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void second_third_fourth_seventh_eighth(){
second_third_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void second_third_fifth_sixth_seventh(){
second_third();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void second_third_fifth_sixth_eighth(){
second_third();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void second_third_fifth_seventh_eighth(){
second_third();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void second_third_sixth_seventh_eighth(){
second_third();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void second_fourth_fifth_sixth_seventh(){
second_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void second_fourth_fifth_sixth_eighth(){
second_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void second_fourth_fifth_seventh_eighth(){
second_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void second_fourth_sixth_seventh_eighth(){
second_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void second_fifth_sixth_seventh_eighth(){
second();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void third_fourth_fifth_sixth_seventh(){
third_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void third_fourth_fifth_sixth_eighth(){
third_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void third_fourth_fifth_seventh_eighth(){
third_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void third_fourth_sixth_seventh_eighth(){
third_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void third_fifth_sixth_seventh_eighth(){
third();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void fourth_fifth_sixth_seventh_eighth(){
fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void first_second_third_fourth_fifth_sixth(){ 
first_second_third_fourth();
delay(5);
fifth_sixth();
delay(5);
}
void first_second_third_fourth_fifth_seventh(){ 
first_second_third_fourth();
delay(5);
fifth_seventh();
delay(5);
}
void first_second_third_fourth_fifth_eighth(){ 
first_second_third_fourth();
delay(5);
fifth_eighth();
delay(5);
}
void first_second_third_fourth_sixth_seventh(){ 
first_second_third_fourth();
delay(5);
sixth_seventh();
delay(5);
}
void first_second_third_fourth_sixth_eighth(){ 
first_second_third_fourth();
delay(5);
sixth_eighth();
delay(5);
}
void first_second_third_fourth_seventh_eighth(){ 
first_second_third_fourth();
delay(5);
seventh_eighth();
delay(5);
}
void first_second_third_fifth_sixth_seventh(){ 
first_second_third();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_second_third_fifth_sixth_eighth(){ 
first_second_third();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_second_third_fifth_seventh_eighth(){ 
first_second_third();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_second_third_sixth_seventh_eighth(){ 
first_second_third();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_second_fourth_fifth_sixth_seventh(){ 
first_second_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_second_fourth_fifth_sixth_eighth(){ 
first_second_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_second_fourth_fifth_seventh_eighth(){ 
first_second_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_second_fourth_sixth_seventh_eighth(){ 
first_second_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_second_fifth_sixth_seventh_eighth(){ 
first_second();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void first_third_fourth_fifth_sixth_seventh(){ 
first_third_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_third_fourth_fifth_sixth_eighth(){ 
first_third_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_third_fourth_fifth_seventh_eighth(){ 
first_third_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_third_fourth_sixth_seventh_eighth(){ 
first_third_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_third_fifth_sixth_seventh_eighth(){ 
first_third();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void first_fourth_fifth_sixth_seventh_eighth(){ 
first_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void second_third_fourth_fifth_sixth_seventh(){ 
second_third_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void second_third_fourth_fifth_sixth_eighth(){ 
second_third_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void second_third_fourth_fifth_seventh_eighth(){ 
second_third_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void second_third_fourth_sixth_seventh_eighth(){ 
second_third_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void second_third_fifth_sixth_seventh_eighth(){ 
second_third();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void second_fourth_fifth_sixth_seventh_eighth(){ 
second_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void third_fourth_fifth_sixth_seventh_eighth(){ 
third_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}

void first_second_third_fourth_fifth_sixth_seventh(){ 
first_second_third_fourth();
delay(5);
fifth_sixth_seventh();
delay(5);
}
void first_second_third_fourth_fifth_sixth_eighth(){ 
first_second_third_fourth();
delay(5);
fifth_sixth_eighth();
delay(5);
}
void first_second_third_fourth_fifth_seventh_eighth(){ 
first_second_third_fourth();
delay(5);
fifth_seventh_eighth();
delay(5);
}
void first_second_third_fourth_sixth_seventh_eighth(){ 
first_second_third_fourth();
delay(5);
sixth_seventh_eighth();
delay(5);
}
void first_second_third_fifth_sixth_seventh_eighth(){ 
first_second_third();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void first_second_fourth_fifth_sixth_seventh_eighth(){ 
first_second_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void first_third_fourth_fifth_sixth_seventh_eighth(){ 
first_third_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
void second_third_fourth_fifth_sixth_seventh_eighth(){ 
second_third_fourth();
delay(5);
fifth_sixth_seventh_eighth();
delay(5);
}
