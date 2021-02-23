// Lab1v26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int proverka(int a)
{
    int i = 10;
    while(i < a) 
    {
        i = i * 10;
    }
    return i;
}
 
int main()
{    
    for(int i = 1; i < 1000; i++)
    {
        if(i == (i*i) % proverka(i)) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
