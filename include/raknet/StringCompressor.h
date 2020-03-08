#pragma once



using namespace RakNet;

class StringCompressor {

public:

    void AddReference();
    void RemoveReference();
    void Instance();
    StringCompressor(void);
    void GenerateTreeFromStrings(unsigned char *, unsigned int, unsigned char);
    void EncodeString(char const*, int, RakNet::BitStream *, unsigned char);
    void DecodeString(char *, int, RakNet::BitStream *, unsigned char);
    void EncodeString(RakNet::RakString const*, int, RakNet::BitStream *, unsigned char);
    void DecodeString(RakNet::RakString *, int, RakNet::BitStream *, unsigned char);
};
