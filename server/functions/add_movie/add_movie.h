#ifndef ADD_MOVIE_TO_DB_H
#define ADD_MOVIE_TO_DB_H

#include "../packet.h"

void add_movie(char *db_path, packet *packet, int packet_size);

#endif