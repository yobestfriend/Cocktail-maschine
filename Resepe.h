  const int flascheamount = 8;
  const int mixamount = 4;
  const int maxzutaten = flascheamount;
  const int cl = 2;



  const char* mixes[mixamount][maxzutaten][cl];//array für mixes



int buildlist(){

    char* flasche[flascheamount];    //array für flaschen
    
    char bottle1[]= "rum";             //getrenke nahmen werden definiert
    char bottle2[]= "tekila";
    char bottle3[]= "vodka";
    char bottle4[]= "gin";
    char bottle5[]= "cola";
    char bottle6[]= "mate";
    char bottle7[]= "limete";
    char bottle8[]= "syrup";
    
//    flasche[0] = bottle1;              //getränke weden ins array plaziert
//    flasche[1] = bottle2;              //wirt hinzugefügt fals ich ein multy array brauche(leichter flachenort zu wechseln?)
//    flasche[2] = bottle3;              //fileicht benötige ich es auch um leichter dran zu kom im haupt?
//    flasche[3] = bottle4;
//    flasche[4] = bottle5;
//    flasche[5] = bottle6;
//    flasche[6] = bottle7;
//    flasche[7] = bottle8;
                                      
    //char* mixes[mixamount][maxzutaten][cl];//array für mixes
    
    char drink1[]= "fuck me up";             //mix nahmen xerden definiert
    char drink2[]= "tekila shot";
    char drink3[]= "cuba libre";
    char drink4[]= "tschunk";
    
    mixes[0][0][0]=drink1;    mixes[0][0][1]= "4";            // der fuck me up; anzahl der getränke
      mixes[0][1][0]=bottle1; mixes[0][1][1]="2";             // 1 von jedem alkehol; 2 cl
      mixes[0][2][0]=bottle2; mixes[0][2][1]="2";
      mixes[0][3][0]=bottle3; mixes[0][3][1]="2";
      mixes[0][4][0]=bottle4; mixes[0][4][1]="2";
      
    mixes[1][0][0]=drink2;    mixes[1][0][1]= "1";            // ein tekila shot; anzahl der getränke
      mixes[1][1][0]=bottle2; mixes[1][1][1]="2";             // tekila;2cl
      
    mixes[2][0][0]=drink3;    mixes[2][0][1]= "3";            // cuba libre; anzahl der getränke
      mixes[2][1][0]=bottle1; mixes[2][1][1]="5";             //rum;5cl
      mixes[2][2][0]=bottle5; mixes[2][2][1]="12";            //cola;12cl
      mixes[2][2][0]=bottle7; mixes[2][2][1]="1";             //limete;1cl

    mixes[0][0][0]=drink1;    mixes[0][0][1]= "4";            // tschunk; anzahl der getränke
      mixes[0][1][0]=bottle1; mixes[0][1][1]="5";             //rum;5cl
      mixes[0][2][0]=bottle6; mixes[0][2][1]="12";            //mate;12cl
      mixes[0][3][0]=bottle7; mixes[0][3][1]="1";             //limete;1cl
      mixes[0][4][0]=bottle8; mixes[0][4][1]="1";


}
