#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    printf("Welcome, please enter the option you want to see\n");
    printf("The options are: 1, 2 or 3\n");
    scanf("%i", &option);

    switch(option)
    {
        case 1:
            printf("An old man lived in the village. He was one of the most unfortunate people in the world. The whole village was tired of him; he was always gloomy, he constantly complained and was always in a bad mood.\n");
        break;

        case 2:
            printf("People have been coming to the wise man, complaining about the same problems every time. One day he told them a joke and everyone roared in laughter.\n");
        break;

        case 3:
            printf("A salt seller used to carry the salt bag on his donkey to the market every day. On the way they had to cross a stream. One day the donkey suddenly tumbled down the stream and the salt bag also fell into the water.\n");
        break;
    }
    return 0;
}
