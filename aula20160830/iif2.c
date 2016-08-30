#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main()
{
  uint64_t fatorial=1;
  int N;
  printf("Digite um valor para o fatorial: ");
  scanf("%d",&N);
  int i;
  for(i=2;i<=N;i++){
  
  fatorial=fatorial*i;
}
  printf("\n O valor do fatorial e %" PRIu64 ".\n", fatorial);
  return 0;
}

