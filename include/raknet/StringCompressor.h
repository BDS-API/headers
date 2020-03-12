#pragma once



namespace RakNet {

    class StringCompressor {

    public:
        void RemoveReference();
        StringCompressor();
        void DecodeString(RakNet::RakString *, int, RakNet::BitStream *, unsigned char);
        void Instance();
        void EncodeString(char const*, int, RakNet::BitStream *, unsigned char);
        void GenerateTreeFromStrings(unsigned char *, unsigned int, unsigned char);
        ~StringCompressor();
        void DecodeString(char *, int, RakNet::BitStream *, unsigned char);
        void AddReference();
        void EncodeString(RakNet::RakString const*, int, RakNet::BitStream *, unsigned char);
    };
}
