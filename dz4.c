#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file; // создаем указатель на файл
    int first = 0, second = 0, c, k = 0;

    file = fopen("dz4.gv", "w"); // начиная поток,возвращаем значение указателя, w-создает файл для записи
    fputs("graph{\n", file); // сует в файл граф, вводимый дальше

    c = scanf("%d-%d\n", &first, &second); // ввод вершин

    if (c != 0) { // если , пока ненулевой ввод
        while (c != 0) {

            if (c == 1) {    
                fprintf(file, "\t%d\n", first); // то же принтф, но для файлов
            }

            if (c == 2) 
			fprintf(file, "\t%d--%d\n", first, second); // если как полагается числа два разные - записывают для чтения графа
            c = scanf("%d-%d\n", &first, &second);
        }

       
            fclose(file); // закрываем поток и сохраняем файл
            return 0; //без ошибок
        
    } 
}