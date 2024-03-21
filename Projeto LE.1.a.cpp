#include<string.h>
#include<stdio.h>

    float l1,l2,v,a,la,l;
    char n[10];
    int c,vt,ct,d,m2;

main(){
    printf("Qual o nome do comodo?\n");   
    scanf("%s", &n);
    printf("Qual a largura do comodo?\n");
    scanf("%f", &l1);
    printf("Qual o comprimento do comodo?\n");
    scanf("%f", &l2);
    printf("Qual o valor de cada Lampada?\n");
    scanf("%f", &v);
    a=l1*l2;

    if( strcmp(n,"quarto")==0 ) {
        l=(a*15)/60;
        m2= m2+15;
    }else{
         if(strcmp(n,"sala de tv")==0){
         	l=(a*15)/60;
            m2=m2+15;
		}else{
		 	if(strcmp(n,"sala")==0){
		 		l=(a*18)/60;
                m2= m2+18;		
			}else{
			 	if(strcmp(n,"cozinha")==0){
			 		l=(a*18)/60;
                    m2=m2+18	;	
				}else{
				 	if(strcmp(n,"varanda")==0){
				 		l=(a*18)/60;
                        m2=m2+18;	
					}else{
					 	if(strcmp(n,"escritorio")==0){
                             	l=(a*20)/60;
                                m2= m2+20;
				        }else{
				        	if(strcmp(n,"banheiro")==0){
                                l=(a*20)/60;
                                m2=m2+20;		
							}
					    }         	
				    }     	
			    }    
            }
        }
    }

    c=l;

     if((l-c)==0){
    	printf(" ");
	}else{
		c=c+1;
		printf(" ");
	}

    vt=c*v;
    ct=c*5;

    printf("Nome do comodo: %s\n",n);
    //"\n" pula uma linha
    printf("Area total do comodo em metros quadrados: %f\n",a);
    printf("Potencia de Iluminacao por metro quadrado: %d\n",m2);
    printf("Numero de lampadas necessarias: %d\n",c);
    printf("Valor total a pagar, em cima do total de lampadas: RS%d\n",vt);
    printf("Custo total da mao de obra de instalacao: RS%d\n",ct);
}
