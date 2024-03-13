   #include<stdio.h>
   main()
{
    //m=Milage//
    //amt1=cost of fuel per liter and amt2=amount u played to buy fuel//
    float fuel_in_liters,d,amt1,amt2,m;
    printf("enter the price of fuel per liter ,amount u paid, and milage\n");
    scanf("%f%f%f",&amt1,&amt2,&m);
    fuel_in_liters=amt2/amt1;
    d=fuel_in_liters*m;
    printf("fuel_in_liters=%f Liter\ndistance traveled=%fkm",fuel_in_liters,d);
}
