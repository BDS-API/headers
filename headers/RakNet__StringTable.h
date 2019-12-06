#pragma once

class RakNet::StringTable {

public:

    void StringTable(void);
    void AddReference(void);
    void RemoveReference(void);
    void Instance(void);
    void AddString(char const*, bool);
    void EncodeString(char const*, int, RakNet::BitStream *);
    void LogStringNotFound(char const*);
    void DecodeString(char *, int, RakNet::BitStream *);
};
