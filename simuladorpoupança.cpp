#include <stdio.h>
#define MESES 64
#define JUROS 0.0018
#define QUANTIDADEGUARDADAPORMES 3000
//0.0018

main()
{

      double saldo=0;
      int meses=0;
      while(meses<=MESES)
      {
                          printf("Mês %d: %.2lf Juro atual: %.2lf \n",meses,saldo,JUROS*saldo);
                          saldo+=QUANTIDADEGUARDADAPORMES;
                          meses++;
                          saldo*=(1.0+JUROS);
      }
      scanf("%d",&meses);
      return 0;
}
