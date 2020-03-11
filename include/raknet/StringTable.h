#pragma once

#include "./BitStream.h"


namespace RakNet {

class StringTable {

public:

    StringTable();
    ~StringTable();
    void AddReference();
    void RemoveReference();
    void Instance();
    void AddString(char const*, bool);
    void EncodeString(char const*, int, RakNet::BitStream *);
    void LogStringNotFound(char const*);
    void DecodeString(char *, int, RakNet::BitStream *);
};

}