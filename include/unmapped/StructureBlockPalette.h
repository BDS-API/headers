#pragma once

#include <memory>
#include "../bedrock/block/unmapped/BlockPalette.h"
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class StructureBlockPalette {

public:
    class BlockPositionData;

    void getBlockPositionData(unsigned long)const;
    StructureBlockPalette();
    ~StructureBlockPalette();
    void getBlock(BlockPalette const&, unsigned long)const;
    void addBlockPositionData(unsigned long, StructureBlockPalette::BlockPositionData);
    StructureBlockPalette(StructureBlockPalette &&);
    void getSize()const;
    void clear();
    void _contentErrorMissingField(std::string const&)const;
    void load(CompoundTag const&, int);
    void save()const;
    void _getSerializationId(unsigned long)const;
    void _saveBlockPositionDataList(CompoundTag &)const;
    void _saveBlockPalette(CompoundTag &)const;
    void _parseBlockPositionDataList(CompoundTag const&);
    void addMapping(std::unique_ptr<CompoundTag>);
    void _parseBlockPositionData(CompoundTag const&, int);
    void _parseBlockPalette(CompoundTag const&);
    class BlockPositionData {

    public:
        ~BlockPositionData();
        bool isValid()const;
        BlockPositionData();
        BlockPositionData(StructureBlockPalette::BlockPositionData &&);
    };
};
