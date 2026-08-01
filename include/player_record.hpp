#ifndef PLAYER_RECORD_HPP
#define PLAYER_RECORD_HPP

#include <cstdint>

#pragma pack(push,1)

struct PlayerRecord
{
    uint32_t id;

    char username[32];

    char email[255];
};

#pragma pack(pop)

static_assert(sizeof(PlayerRecord) == 291);

#endif

