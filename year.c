#include <stdio.h>
#include <string.h>
#include "year.h"

void init_tab(Annee *tab){
  for (int i=0;i<20;i++){
      tab[i].accidents=0;
      tab[i].nb_morts=0;
      tab[i].nb_indemnes=0;
      tab[i].nb_bgraves=0;
      tab[i].nb_blegers=0;
  }
}
