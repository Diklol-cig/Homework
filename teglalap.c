#include <stdio.h>

int main()
{
	int szelesseg,magassag;
	
	printf("Kerlek add meg a szelesseget(cm): ");
		scanf("%d", &szelesseg);
	
	printf("Es most a magassagot is(cm): ");
		scanf("%d", &magassag);
	
	printf("Kerulet: %d cm\n", 2*(szelesseg+magassag));
	printf("Terulet: %d cm\n", magassag*szelesseg);
	
	return 0;
}
