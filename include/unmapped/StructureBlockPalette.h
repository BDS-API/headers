#pragma once

#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/block/unmapped/BlockPositionData.h"
#include "../bedrock/block/unmapped/BlockPalette.h"
#include "./StructureBlockPalette.h"
#include <string>


class StructureBlockPalette {

public:

    StructureBlockPalette();
    StructureBlockPalette(StructureBlockPalette &&);
    ~StructureBlockPalette();
    void load(CompoundTag const&, int);
    void _parseBlockPalette(CompoundTag const&);
    void _parseBlockPositionDataList(CompoundTag const&);
    void save()const;
    void _saveBlockPalette(CompoundTag &)const;
    void _saveBlockPositionDataList(CompoundTag &)const;
    void getBlock(BlockPalette const&, unsigned long)const;
    void _getSerializationId(unsigned long)const;
    void getBlockPositionData(unsigned long)const;
    void addMapping(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void addBlockPositionData(unsigned long, StructureBlockPalette::BlockPositionData);
    void clear();
    void getSize()const;
    void _contentErrorMissingField(std::string const&)const;
    void _parseBlockPositionData(CompoundTag const&, int);
};
