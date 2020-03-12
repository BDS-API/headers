#pragma once



class LegacyStructureBlockPalette {

public:
    void getId(Block const&);
    void clearMap();
    void getBlock(int);
    ~LegacyStructureBlockPalette();
    void getSize();
    void addMapping(int, Block const&);
    LegacyStructureBlockPalette();
};
