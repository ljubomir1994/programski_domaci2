#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

/*
int poissonRandom(double expectedValue) {
  int n = 0; //counter of iteration
  double limit;
  double x;  //pseudo random number
  limit = exp(-expectedValue);
  x = rand() / INT_MAX;
  while (x > limit) {
    n++;
    x *= rand() / INT_MAX;
  }
  return n;
}
*/

int Factorial(int k){
    int i = 0;
    int sum = 1;
    for(i = 1; i <= k; i++){
        sum *= i;
    }
return sum;
}

int randomBr(double lambda){

  double L = exp(-lambda);
  double p = 1.0;
  int k = 0;

  do {
    k++;
    p *= rand()%6;
  } while (p > L);
    if(k-1 < 18)
        return k - 1;
    else
        return 17;
}

int skup(n){

    int elementi[n];
    int i = 1;
    for(i = 1; i <= n; i++){
        elementi[i] = i;
        printf("%d ", elementi[i]);
    }
return elementi;
}

int podskupovi(d, n){

    int i, j, k, rnd2;

    for(i = 0; i < d; i++){
        int random = randomBr(1.0);
        int podniz[random];
        printf("\nPodniz %d: ", i+1 );
        for(j = 0; j < random; j++){
            int rnd = 1 + rand()%n;
            for(k = 0; k < random; k++){
                if(podniz[k] == rnd)
                    rnd2 = 1 + rand()%n-1;
                else
                    rnd2 = rnd;
            }
            podniz[j] = rnd2;
            printf("%d ", podniz[j]);
        }

    }

}


int main()
{
    int n = 18;
    int d = 3;
    double mi = 1.0;
    int k = 1;
    //printf("%f\n", podskupovi(3));
    skup(n);
    podskupovi(5, n);

    //printf("%d", skup(n));


    return 0;
}
