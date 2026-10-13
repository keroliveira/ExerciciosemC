// Calculadora de operações básicas

#include <stdio.h>

int main() {
  int operacao, numeroa, numerob;
  scanf("%d", &operacao);
  scanf("%d", &numeroa);
  scanf("%d", &numerob);

  if(operacao==1) { 
    printf("%d", numeroa + numerob);
  }
  else if(operacao==2) { 
    printf("%d", numeroa - numerob);
  }
  else if(operacao==3) { 
    printf("%d", numeroa / numerob);
  }
  else if(operacao==4) { 
    printf("%d", numeroa * numerob);
  }
}