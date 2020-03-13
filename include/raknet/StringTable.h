#pragma once



namespace RakNet {

    class StringTable {

    public:
        StringTable(); // _ZN6RakNet11StringTableC2Ev
        ~StringTable(); // _ZN6RakNet11StringTableD2Ev
        void AddReference(); // _ZN6RakNet11StringTable12AddReferenceEv
        void RemoveReference(); // _ZN6RakNet11StringTable15RemoveReferenceEv
        void Instance(); // _ZN6RakNet11StringTable8InstanceEv
        void AddString(char const*, bool); // _ZN6RakNet11StringTable9AddStringEPKcb
        void EncodeString(char const*, int, RakNet::BitStream *); // _ZN6RakNet11StringTable12EncodeStringEPKciPNS_9BitStreamE
        void LogStringNotFound(char const*); // _ZN6RakNet11StringTable17LogStringNotFoundEPKc
        void DecodeString(char *, int, RakNet::BitStream *); // _ZN6RakNet11StringTable12DecodeStringEPciPNS_9BitStreamE
    };
}
