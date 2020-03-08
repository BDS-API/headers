#pragma once

#include "../raknet/BitStream"
#include "../core/Path"


class RegionFile {

public:
    virtual RegionFile::~RegionFile()

    RegionFile(Core::Path const&);
    void _close();
    void open();
    void readChunk(int, int, RakNet::BitStream **);
    void writeChunk(int, int, RakNet::BitStream &);
    void _write(int, RakNet::BitStream &);
};
