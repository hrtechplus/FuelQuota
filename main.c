#include <stdio.h>
//implement  functions
float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost(int vehicleType,float usedFuelQuota );
void displayDetails(int vType,float usedFuelQuota, float remainingQuota,float cost );
int main(void) {
  float usedFuelQuota,cost,remainingQuota;
  int vehicleType;
  printf("Enter Your Vehicle Type:\n");
  scanf("%d",&vehicleType);
  printf("Enter Your Used Fuel Quota:\n");
  scanf("%f",&usedFuelQuota);
  //remaining qouta print and call function
  remainingQuota = calcRemainingFuel(vehicleType,usedFuelQuota);
  printf("You have %.2f liters left",remainingQuota); // callusedFuelQuota function
  cost=calcFuelcost(vehicleType,usedFuelQuota);
  printf("Your cost is Rs.%.2f\n",cost); // call calcFuelcost function 

  // call displayDetails to display chart
  displayDetails(vehicleType, usedFuelQuota,remainingQuota, cost );
  return 0;
}

//funtion  declare
float calcRemainingFuel(int vehicleType, float usedFuelQuota){
  int allowQouta;
  float remainingQoute;
   switch (vehicleType){
     case 1:allowQouta = 5 ;  break;
     case 2:allowQouta = 20 ; break;
     case 3:allowQouta = 20 ; break;
     case 4:allowQouta = 30 ; break;
     default:printf("you have enter a wrong vehical type\n");
     break;
   }
     remainingQoute = allowQouta - usedFuelQuota;
     return remainingQoute;
}
// implement fuelCost
float calcFuelcost(int vehicleType,float usedFuelQuota ){
  float fuelCost,fuelPrice;
     switch (vehicleType){
     case 1:fuelPrice = 370 ;  break;
     case 2:fuelPrice = 370 ; break;
     case 3:fuelPrice = 510 ; break;
     case 4:fuelPrice = 370 ; break;
     default:printf("you have enter a wrong vehical type\n");
     break;
   }
  fuelCost= fuelPrice *usedFuelQuota; // usedFuelQuota from parameter
  return fuelCost;
  }
//display deatils function delcare
void displayDetails(int vType,float usedFuelQuota, float remainingQuota,float cost ){
  printf("Vehicle typ \t Quotause \t QuotaRemaining \t Fuel cos\n");
  printf("\t\t%d \t\t\t %.2f \t\t\t %.2f \t\t\t %.2f  ",vType,usedFuelQuota,remainingQuota,cost);
  return 0;
}