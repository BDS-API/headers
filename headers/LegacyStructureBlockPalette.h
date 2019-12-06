#pragma once

class LegacyStructureBlockPalette {

public:

    void LegacyStructureBlockPalette(void);
    void clearMap(void);
    void getSize(void);
    void addMapping(int, Block const&);
    void getBlock(int);
    void getId(Block const&);
};
