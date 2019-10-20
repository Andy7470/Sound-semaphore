void intensity(){
   if (vol > 34){
   db += 100;
 }
 if (vol <= 32 && db > 0){
   db -= 10;
 }
}
