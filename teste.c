#include <stdio.h>

int main()
{
	int c;
	int M;
	

	system("clear");

	scanf("%d", &c);
	scanf("%d", &M);

			while(c < 1 || c > 16 || M < 1 || M > 16 || c == M){
				system("clear");
				printf("Numeros Invalidos\n");
				scanf("%d", &c);
				scanf("%d", &M);
			}
	
				if ((M-1)/2 == (c-1)/2)
				{
		


				printf("oitavas\n");
	
				}
	


			else if ((M-1)/4 == (c-1)/4)
			{
				printf("quartas\n");	
			}
	


			else if ((M-1)/8 == (c-1)/8)
			{
				printf("semifinais\n");
			}
	


			else{
				printf("finais\n");
	
			}



	return 0;
}