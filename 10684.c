/*-------------------------------------------------------
 * Tarea de Analisis de Algoritmos: 10684 - The jackpot
 * Fecha: 20-04-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdio.h>

int n, i, ans, sum;

int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) && n) {

		int set[n];
		sum = 0;
		ans = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &set[i]);
			sum += set[i];

			if (sum < 0)
				sum = 0;

			if (sum > ans)
				ans = sum;
		}

		if (ans > 0) {
			printf("The maximum winning streak is %d.\n", ans);
		}
		else {
			printf("Losing streak.\n");
		}
	}
    return 0;
}
