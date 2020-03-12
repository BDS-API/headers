#pragma once

#include "BitStream.h"


namespace RakNet {

    class StringTable {

    public:
        ~StringTable();
        void Instance();
        void LogStringNotFound(char const*);
        void AddReference();
        StringTable();
        void AddString(char const*, bool);
        void EncodeString(char const*, int, RakNet::BitStream *);
        void DecodeString(char *, int, RakNet::BitStream *);
        void RemoveReference();
    };
}
