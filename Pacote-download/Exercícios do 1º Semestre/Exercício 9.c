#include <stdio.h>

int
main ()
{
  float nota_lab, nota_sem, nota_final, media;
  

  printf ("Digite a nota do trabalho de laboratC3rio: ");
  scanf ("%f", &nota_lab);

  printf ("Digite a nota da avaliaC'C#o semestral: ");
  scanf ("%f", &nota_sem);

  printf ("Digite a nota do exame final: ");
  scanf ("%f", &nota_final);

  media = (nota_lab + nota_sem + nota_final) / 3;

  if (media >= 0 && media < 5)
    {
      printf ("conceito E");
    }
  else if (media >= 5 && media < 6)
    {
      printf ("conceito D");
    }
  else if (media >= 6 && media < 7)
    {
      printf ("conceito C");
    }
  else if (media >= 7 && media < 8)
    {
      printf ("conceito B");
    }
  else
    {
      printf ("conceito A");
    }


  return 0;
}
