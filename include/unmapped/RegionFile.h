#pragma once

#include "../raknet/BitStream.h"
#include "../core/Path.h"


class RegionFile {

public:
    ~RegionFile();
    void _write(int, RakNet::BitStream &);
    RegionFile(Core::Path const&);
    void readChunk(int, int, RakNet::BitStream **);
    void writeChunk(int, int, RakNet::BitStream &);
    void _close();
    void open();
};
