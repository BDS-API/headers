#pragma once



class LegacyStructureBlockPalette {

public:

    LegacyStructureBlockPalette(void);
    void clearMap();
    void getSize();
    void addMapping(int, Block const&);
    void getBlock(int);
    void getId(Block const&);
};
