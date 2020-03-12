#pragma once

#include <memory>
#include <string>


class StructureBlockPalette {

public:
    class BlockPositionData;

    void _parseBlockPositionDataList(CompoundTag const&);
    void addMapping(std::unique_ptr<CompoundTag>);
    void addBlockPositionData(unsigned long, StructureBlockPalette::BlockPositionData);
    void _parseBlockPositionData(CompoundTag const&, int);
    void getBlock(BlockPalette const&, unsigned long)const;
    void _saveBlockPositionDataList(CompoundTag &)const;
    StructureBlockPalette(StructureBlockPalette &&);
    void load(CompoundTag const&, int);
    void _parseBlockPalette(CompoundTag const&);
    void _saveBlockPalette(CompoundTag &)const;
    void _getSerializationId(unsigned long)const;
    void getSize()const;
    void _contentErrorMissingField(std::string const&)const;
    ~StructureBlockPalette();
    void clear();
    void getBlockPositionData(unsigned long)const;
    StructureBlockPalette();
    void save()const;
    class BlockPositionData {

    public:
        bool isValid()const;
        ~BlockPositionData();
        BlockPositionData(StructureBlockPalette::BlockPositionData &&);
        BlockPositionData();
    };
};
