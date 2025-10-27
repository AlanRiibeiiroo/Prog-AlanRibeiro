#include <stdio.h>

#include <stdio.h>

    // Movimento Torre
void moverTorre (int casas){
    if (casas > 0){
    printf("Direita\n");
    moverTorre(casas - 1); 
    printf("\n");
     
   } 
  }
    // Movimento Bispo
    
  void moverBispo (int casas){
    if (casas > 0){
    printf("Cima, Direita\n");
    moverBispo(casas - 1);   
    printf("\n");
   } 
  }

    // Movimento Rainha
  void moverRainha (int casas){
    if (casas > 0){
    printf("Esquerda\n");
    moverRainha(casas - 1); 
      }
    }


int main(){
  moverTorre(5);
  moverBispo(5);
  moverRainha(8);
}

int main() {
    int passov = 0, passot = 0, passoh = 0;
    while(passot < 3){
    	if(passov < 2){
		printf("Cima \n");
    	passov++;
    	passot++;
    	} else{
    		while(passot < 3 && passoh < 1){
    			if(passoh >= 1){
					break;
				} else{
					printf("Baixo \n");
    				passoh++;
    				passot++;
    			}
			}
		}
		continue;
	}
    return 0;
}