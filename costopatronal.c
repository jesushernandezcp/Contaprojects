#include<stdio.h>
#include<math.h>
int main()
{
 float uma;
 float primart;
 float dias;
 float sbc;
 float cuotaFija;
 float prestdin,gtosmedicos,riesgotrabajo,invalidez,guarderias;
 double costoPatTotal;
 int respuesta;
 char coment1[8];
 
 printf("SERVICIOS TECNOLOGICOS LEVIATAN\n -Creado por Jesus Hernandez-\n 24Ave 300 D4 Cumbres Monterrey Nuevo Leon\n CALCULO DE COSTO PATRONAL\n");
 printf("___________________________________________________________________________________\n");
 printf("\t \t\t Expresiones de Calculos\n\t\t\t\t COSTO PATRONAL \n");	
 printf("CUOTA FIJA---------------------------------------------------- UMA*dias*2.4%%| \n");
 printf("PRESTACIONES EN DINERO---------------------------------------- DIAS*SBC*0.7%% \n");
 printf("GASTOS MEDICOS PENSIONADOS Y BENEFICIARIOS-------------------- DIAS*SBC*1.05%%| \n");
 printf("RIESGO DE TRABAJO--------------------------------------------- DIAS*SBC*(PRIMA RT/100) \n");
 printf("INVALIDEZ Y VIDA---------------------------------------------- DIAS*SBC*1.75%% \n");
 printf("GUARDERIAS Y PRESTACIONES SOCIALES---------------------------- DIAS*SBC*1%% \n");
 printf("___________________________________________________________________________________\n");
 printf("\t \t\t Expresiones de Calculos\n\t\t\t\t COSTO EMPLEADO \n");
 printf("INVALIDEZ Y VIDA---------------------------------------------- DIAS*SBC*0.625%% \n");
 printf("PRESTACIONES EN DINERO---------------------------------------- DIAS*SBC*0.25%% \n");
 printf("GASTOS MEDICOS PENSIONADOS Y BENEFICIARIOS-------------------- DIAS*SBC*0.375%% \n");
 printf("CESANTIA Y VEJEZ---------------------------------------------- DIAS*SBC*1.125%% \n");
 printf("ENFERMEDADES Y MATERNIDAD------------------------------------- 0.4%% SOBRE EXCEDENTE DE:[(3UMA)-SBC)]*DIAS \n");
 
 printf("___________________________________________________________________________________\n");
 
 do
 {
 printf("----CALCULANDO COSTO PATRONAL DE CUOTAS IMSS---\n \n");
 printf("Capture la prima de riesgo de la empresa, si no la conoce capture 0.5:\n");
 scanf("%f",&primart);
 printf("Capture el valor de la UMA vigente:\n");
 scanf("%f",&uma);
 printf("Cuantos dias tiene el mes del calculo que desea realizar?:\n");
 scanf("%f",&dias);
 printf("Cual es el salario base de cotizacion del trabajador?:\n");
 scanf("%f",&sbc);
 
 //CALCULANDO COSTO PATRONAL
 
 cuotaFija=uma*dias*0.204; 
 prestdin=dias*sbc*0.007; 
 gtosmedicos=dias*sbc*0.0105; 
 riesgotrabajo=dias*sbc*(primart/100); 
 invalidez=dias*sbc*0.0175; 
 guarderias=dias*sbc*0.01;
 costoPatTotal=cuotaFija+prestdin+gtosmedicos+riesgotrabajo+invalidez+guarderias;
 
 printf("---------------------------------------RESULTADOS----------------------------------\n");
 printf("___________________________________________________________________________________\n");
 printf("El costo patronal es:\n Cuota Fija:%f\n Prestaciones en Dinero:%f\n Gastos Medicos:%f\n Riesgo de Trabajo:%f\n Invalidez y Vida:%f\n Guarderias y Prestaciones sociales:%f\n\n Costo Patronal Total:%lf\n\n",cuotaFija,prestdin,gtosmedicos,riesgotrabajo,invalidez,guarderias,costoPatTotal);
 
 //CALCULANDO COSTO TRABAJADOR
 
 float compar,invalobr,prestdinobr,gtosmedobr,costoObrTot,cesob,enfymat; 
 invalobr=dias*sbc*0.00625; 
 prestdinobr=dias*sbc*0.0025; 
 gtosmedobr=dias*sbc*0.00375;
 cesob=dias*sbc*.01125;
 compar=0.004*(sbc-(3*uma))*dias;
 if(compar<0){
 	enfymat=0;
 	
 }
 else{
 	enfymat=compar;
 }
 
 costoObrTot=invalobr+prestdinobr+gtosmedobr+cesob+enfymat;
 printf("___________________________________________________________________________________\n");
 printf("El costo para el trabajador es:\n Invalidez y Vida:%f\n Prestaciones en dinero:%f\n Gastos Medicos:%f\n Cesantia y Vejez:%f\n Enfermedades y Maternidad:%f\n\n Costo Total para el Trabajador:%f\n ",invalobr,prestdinobr,gtosmedobr,cesob,enfymat,costoObrTot);
 
 
 float costoTotal;
 
 costoTotal=costoPatTotal+costoObrTot;
 printf("___________________________________________________________________________________\n"); 
 printf("El Costo Total es de:%f\n\n",costoTotal); 
 printf("---AHORA CALCULAREMOS EL COSTO PATRONAL CORRESPONDIENTE A CUOTAS DE RCV E INFONAVIT---:\n\n");
printf("\n");
 
 //CALCULANDO COSTO BIMESTRAL
 
 float retiro,cesantia,infonavit,cesobr,ctopatbim;
 printf("Cuantos dias tiene el bimestre a calcular?:\n");
 scanf("%f",&dias);
 
 retiro=dias*sbc*.02;
 cesantia=dias*sbc*.0315;
 infonavit=dias*sbc*.05;
 ctopatbim=retiro+cesantia+infonavit;
 
 
 
 printf("El costo patronal bimestral es:\n Retiro:%f\n Cesantia en edad avanzada y vejez:%f\n Infonavit:%f\n Costo Patronal Total Bimestral:%f\n",retiro,cesantia,infonavit,ctopatbim);
 printf("\n \n");
 printf("***PRESIONE 1 PARA CONTINUAR, 2 PARA SALIR DEL PROGRAMA***:\n");
 scanf("%d",&respuesta);
 if(respuesta>=2)
{
 break;
               //exit(-1);
               }
               

}while(respuesta=1);




                  
system("PAUSE");
return 0;

} 
 
