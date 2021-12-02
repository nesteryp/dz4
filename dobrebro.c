#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file; // создаем указатель на файл
    int first = 0, second = 0, c, k = 0, yesno;

    file = fopen("dz4.gv", "a"); // начиная поток,возвращаем значение указателя, 
    
        printf("введите необходимые вершины\n");
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

      
                fputc('}', file); // дописываем файл с графом
                fclose(file); // закрываем поток и сохраняем файл
                system("dot -Tpng dz4.gv -o dz4.png"); //многоур граф с изображением
                return 0; //без ошибок
            
        }
                fputc('}', file); // дописываем файл с графом
                fclose(file); // закрываем поток и сохраняем файл
                system("dot -Tpng dz4.gv -o dz4.png"); //многоур граф с изображением
                return 0; //без ошибок 
    

}