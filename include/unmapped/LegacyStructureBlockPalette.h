#pragma once



class LegacyStructureBlockPalette {

public:
    ~LegacyStructureBlockPalette(); // _ZN27LegacyStructureBlockPaletteD2Ev
    LegacyStructureBlockPalette(); // _ZN27LegacyStructureBlockPaletteC2Ev
    void clearMap(); // _ZN27LegacyStructureBlockPalette8clearMapEv
    void getSize(); // _ZN27LegacyStructureBlockPalette7getSizeEv
    void addMapping(int, Block const&); // _ZN27LegacyStructureBlockPalette10addMappingEiRK5Block
    void getBlock(int); // _ZN27LegacyStructureBlockPalette8getBlockEi
    void getId(Block const&); // _ZN27LegacyStructureBlockPalette5getIdERK5Block
};
