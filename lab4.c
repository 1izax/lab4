#include <stdio.h>
#include <locale.h>

int road()
{
	setlocale(LC_CTYPE, "RUS");

    int A, B, condition;
    printf("=== СИСТЕМА ВЫБОРА МАРШРУТА ===\n");
    printf("Введите два целых числа (датчик A и датчик B): ");
    scanf("%d %d", &A, &B);

    condition = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));

    printf("Направление НАЛЕВО (1 - да, 0 - нет): %d\n", condition);
}

int main()
{
	road();
	getchar();
	return 0;
}
