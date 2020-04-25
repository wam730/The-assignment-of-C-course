#include<stdio.h>
#include<time.h>
#include<process.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
    int ret = 0;
    int guess = 0;
    int left = 0;
    int right = 10000000;
    srand((unsigned int)time(NULL));
    ret = rand() % 10000000;
    printf("提供的答案数是->%d\n",ret);
    guess = 50;
    while (1)
    {
        if (guess > ret)
        {
            printf("猜大了->%d\n", guess);
            right = guess;
            guess = (right + left) / 2;
            Sleep(1000);
        }
        else if (guess < ret)
        {
            printf("猜小了->%d\n", guess);
            left = guess;
            guess = (right + left) / 2;
            Sleep(1000);
        }
        if (guess == ret)
        {
            printf("猜到了是%d", guess);
            break;
        }
    }
    system("pause ");
    return 0;
}
