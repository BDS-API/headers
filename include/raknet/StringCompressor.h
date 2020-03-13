#pragma once



namespace RakNet {

    class StringCompressor {

    public:
        void AddReference(); // _ZN6RakNet16StringCompressor12AddReferenceEv
        void RemoveReference(); // _ZN6RakNet16StringCompressor15RemoveReferenceEv
        void Instance(); // _ZN6RakNet16StringCompressor8InstanceEv
        StringCompressor(); // _ZN6RakNet16StringCompressorC2Ev
        void GenerateTreeFromStrings(unsigned char *, unsigned int, unsigned char); // _ZN6RakNet16StringCompressor23GenerateTreeFromStringsEPhjh
        ~StringCompressor(); // _ZN6RakNet16StringCompressorD2Ev
        void EncodeString(char const*, int, RakNet::BitStream *, unsigned char); // _ZN6RakNet16StringCompressor12EncodeStringEPKciPNS_9BitStreamEh
        void DecodeString(char *, int, RakNet::BitStream *, unsigned char); // _ZN6RakNet16StringCompressor12DecodeStringEPciPNS_9BitStreamEh
        void EncodeString(RakNet::RakString const*, int, RakNet::BitStream *, unsigned char); // _ZN6RakNet16StringCompressor12EncodeStringEPKNS_9RakStringEiPNS_9BitStreamEh
        void DecodeString(RakNet::RakString *, int, RakNet::BitStream *, unsigned char); // _ZN6RakNet16StringCompressor12DecodeStringEPNS_9RakStringEiPNS_9BitStreamEh
    };
}
