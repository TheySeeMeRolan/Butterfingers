 #include "Driver.h"
 
 Driver::Driver(): Personnel(){

 }


 Driver::Driver(Team* team): Personnel(team){

 }

 Driver::Driver(Team* team, int l, int s):Personnel(team){
     luck= l;
     skill= s;
 }