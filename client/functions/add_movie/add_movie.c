#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../serializers/packet.h"

void add_movie(FILE *fp, packet *packet, int field_size)
{
    char *input = (char *)calloc(field_size, sizeof(char));

    packet->movie_id = 0;

    printf("Entre com o título do filme:\n");
    fgets(input, field_size, fp);
    strcpy(packet->movie_title, input);

    printf("Entre com o gênero do filme:\n");
    fgets(input, field_size, fp);
    strcpy(packet->movie_genre, input);

    printf("Entre com a sinopse do filme:\n");
    fgets(input, field_size, fp);
    strcpy(packet->movie_sinopsis, input);

    printf("Entre com as salas de exibição do filme (inteiros separados por espaço):\n");
    fgets(input, field_size, fp);
    strcpy(packet->rooms, input);

    free(input);

    return;
}