#pragma once



class RegionFile {

public:
    virtual ~RegionFile(); // _ZN10RegionFileD2Ev
    virtual void __fake_function0(); // fake
    RegionFile(Core::Path const&); // _ZN10RegionFileC2ERKN4Core4PathE
    void _close(); // _ZN10RegionFile6_closeEv
    void open(); // _ZN10RegionFile4openEv
    void readChunk(int, int, RakNet::BitStream **); // _ZN10RegionFile9readChunkEiiPPN6RakNet9BitStreamE
    void writeChunk(int, int, RakNet::BitStream &); // _ZN10RegionFile10writeChunkEiiRN6RakNet9BitStreamE
    void _write(int, RakNet::BitStream &); // _ZN10RegionFile6_writeEiRN6RakNet9BitStreamE
};
