#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include <string>
#include "../bedrock/util/BlockPos.h"
#include <vector>
#include "StructureBlockPalette.h"
#include <memory>


class StructureTemplateData {

public:
    static std::string DEFAULT_PALETTE_NAME;

    ~StructureTemplateData();
    void setStructureWorldOrigin(BlockPos const&);
    void _saveStructureTag(CompoundTag &)const;
    void getStructureWorldOrigin()const;
    void getBlockIndices()const;
    void getFormatVersion()const;
    void _parseStructureWorldOrigin(CompoundTag const&);
    void _parsePalettes(CompoundTag const&);
    void addPalette(std::string const&, StructureBlockPalette);
    void _contentErrorMissingField(std::string const&)const;
    void _saveFormatVersion(CompoundTag &)const;
    void getEntityData()const;
    void setExtraBlockIndices(std::vector<int>);
    void getExtraBlockIndices()const;
    void load(CompoundTag const&);
    void setBlockIndices(std::vector<int>);
    void _savePalettes(CompoundTag &)const;
    void _saveBlockIndices(CompoundTag &)const;
    void _parseFormatVersion(CompoundTag const&);
    void save()const;
    void _validateSizeAndBlockIndicesSize()const;
    void _saveSize(CompoundTag &)const;
    void _parseEntities(CompoundTag const&);
    void _parseBlockIndices(CompoundTag const&);
    void _parseStructureTag(CompoundTag const&);
    void _saveStructureWorldOrigin(CompoundTag &)const;
    void getPalette(std::string const&)const;
    void clear();
    void _saveEntities(CompoundTag &)const;
    void setSize(BlockPos const&);
    StructureTemplateData();
    void _parseSize(CompoundTag const&);
    void addEntityData(std::unique_ptr<CompoundTag>);
    void getSize()const;
    void _setFormatVersion(int);
};
