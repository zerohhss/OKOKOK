#include <stdio.h>
int main(void){
  int N;
  scanf("%d" , &N);

  int maxN = -1000001;
  int minN = 1000001;

  int k;
  for(int i = 0; i < N; i++){
    scanf("%d" , &k);
    if (k > maxN) {maxN = k;}
    if (k < minN) {minN = k;}
  }
  
  printf("%d %d" , minN, maxN);
  return 0;
}
