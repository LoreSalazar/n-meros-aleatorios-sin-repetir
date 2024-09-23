#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	const int cantidad_aleatorios = 10;
	int num_aleatorios[cantidad_aleatorios], flag = 0, t = 0;

	srand(time(NULL)); //Generación de números aleatorios

	for (int i = 0; i < cantidad_aleatorios; i++) {
		num_aleatorios[i] = rand() % cantidad_aleatorios + 1;

		//if (i >= 1) {
		for (int j = 0; j < i; j++) {

			if (num_aleatorios[i] == num_aleatorios[j]) {
				num_aleatorios[i] = rand() % cantidad_aleatorios + 1;
				j = -1;
			}
		}
		cout << num_aleatorios[i] << "\n";
	}


}