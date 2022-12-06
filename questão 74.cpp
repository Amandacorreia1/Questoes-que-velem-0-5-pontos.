#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Potuguese_Brazil");
	printf("\n\nCalcular a tabuada para os números de 1 a 10\n\n");
	
	int tab, mult, r;

	for(tab = 1; tab <= 10; tab++){
		
		for(mult = 1; mult<= 10; mult++){
			r = tab * mult;
		    printf("%2d * %2d = %2d\n", tab, mult, r);	
		}
		printf("\n");
	}
	

	return 0;
}
