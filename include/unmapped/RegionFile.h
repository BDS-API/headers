#pragma once

#include "../core/Path.h"
#include "../raknet/BitStream.h"


class RegionFile {

public:
    virtual ~RegionFile();

    RegionFile(Core::Path const&);
    void _close();
    void open();
    void readChunk(int, int, RakNet::BitStream **);
    void writeChunk(int, int, RakNet::BitStream &);
    void _write(int, RakNet::BitStream &);
};
