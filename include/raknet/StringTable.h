#pragma once



namespace RakNet {

    class StringTable {

    public:
        void DecodeString(char *, int, RakNet::BitStream *);
        StringTable();
        void RemoveReference();
        void AddString(char const*, bool);
        void EncodeString(char const*, int, RakNet::BitStream *);
        void Instance();
        void AddReference();
        ~StringTable();
        void LogStringNotFound(char const*);
    };
}
