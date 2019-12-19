#pragma once

class RegionFile {

public:
    virtual RegionFile::~RegionFile();

    RegionFile(Core::Path const&);
    void _close(void);
    void open(void);
    void readChunk(int, int, RakNet::BitStream **);
    void writeChunk(int, int, RakNet::BitStream &);
    void _write(int, RakNet::BitStream &);
};
