#pragma once

#include "RakString.h"
#include "BitStream.h"


namespace RakNet {

    class StringCompressor {

    public:
        void EncodeString(RakNet::RakString const*, int, RakNet::BitStream *, unsigned char);
        void GenerateTreeFromStrings(unsigned char *, unsigned int, unsigned char);
        ~StringCompressor();
        void DecodeString(char *, int, RakNet::BitStream *, unsigned char);
        StringCompressor();
        void EncodeString(char const*, int, RakNet::BitStream *, unsigned char);
        void AddReference();
        void DecodeString(RakNet::RakString *, int, RakNet::BitStream *, unsigned char);
        void Instance();
        void RemoveReference();
    };
}
