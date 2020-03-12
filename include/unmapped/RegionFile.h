#pragma once



class RegionFile {

public:
    ~RegionFile();
    void readChunk(int, int, RakNet::BitStream **);
    void _close();
    RegionFile(Core::Path const&);
    void _write(int, RakNet::BitStream &);
    void writeChunk(int, int, RakNet::BitStream &);
    void open();
};
