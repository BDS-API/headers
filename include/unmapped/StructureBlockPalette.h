#pragma once

#include <string>
#include <memory>


class StructureBlockPalette {

public:
    class BlockPositionData;

    StructureBlockPalette(); // _ZN21StructureBlockPaletteC2Ev
    StructureBlockPalette(StructureBlockPalette &&); // _ZN21StructureBlockPaletteC2EOS_
    ~StructureBlockPalette(); // _ZN21StructureBlockPaletteD2Ev
    void load(CompoundTag const&, int); // _ZN21StructureBlockPalette4loadERK11CompoundTagi
    void _parseBlockPalette(CompoundTag const&); // _ZN21StructureBlockPalette18_parseBlockPaletteERK11CompoundTag
    void _parseBlockPositionDataList(CompoundTag const&); // _ZN21StructureBlockPalette27_parseBlockPositionDataListERK11CompoundTag
    void save()const; // _ZNK21StructureBlockPalette4saveEv
    void _saveBlockPalette(CompoundTag &)const; // _ZNK21StructureBlockPalette17_saveBlockPaletteER11CompoundTag
    void _saveBlockPositionDataList(CompoundTag &)const; // _ZNK21StructureBlockPalette26_saveBlockPositionDataListER11CompoundTag
    void getBlock(BlockPalette const&, unsigned long)const; // _ZNK21StructureBlockPalette8getBlockERK12BlockPalettem
    void _getSerializationId(unsigned long)const; // _ZNK21StructureBlockPalette19_getSerializationIdEm
    void getBlockPositionData(unsigned long)const; // _ZNK21StructureBlockPalette20getBlockPositionDataEm
    void addMapping(std::unique_ptr<CompoundTag>); // _ZN21StructureBlockPalette10addMappingESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void addBlockPositionData(unsigned long, StructureBlockPalette::BlockPositionData); // _ZN21StructureBlockPalette20addBlockPositionDataEmNS_17BlockPositionDataE
    void clear(); // _ZN21StructureBlockPalette5clearEv
    void getSize()const; // _ZNK21StructureBlockPalette7getSizeEv
    void _contentErrorMissingField(std::string const&)const; // _ZNK21StructureBlockPalette25_contentErrorMissingFieldERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _parseBlockPositionData(CompoundTag const&, int); // _ZN21StructureBlockPalette23_parseBlockPositionDataERK11CompoundTagi
    class BlockPositionData {

    public:
        BlockPositionData(); // _ZN21StructureBlockPalette17BlockPositionDataC2Ev
        BlockPositionData(StructureBlockPalette::BlockPositionData &&); // _ZN21StructureBlockPalette17BlockPositionDataC2EOS0_
        ~BlockPositionData(); // _ZN21StructureBlockPalette17BlockPositionDataD2Ev
        bool isValid()const; // _ZNK21StructureBlockPalette17BlockPositionData7isValidEv
    };
};
