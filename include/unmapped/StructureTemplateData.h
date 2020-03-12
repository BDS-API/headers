#pragma once

#include <string>
#include "StructureBlockPalette.h"
#include <vector>
#include <memory>


class StructureTemplateData {

public:
    static std::string DEFAULT_PALETTE_NAME;

    ~StructureTemplateData();
    void _setFormatVersion(int);
    void _saveFormatVersion(CompoundTag &)const;
    void getExtraBlockIndices()const;
    void _saveStructureTag(CompoundTag &)const;
    void getPalette(std::string const&)const;
    void _saveStructureWorldOrigin(CompoundTag &)const;
    void _parseBlockIndices(CompoundTag const&);
    void setExtraBlockIndices(std::vector<int>);
    void setSize(BlockPos const&);
    void _parseStructureWorldOrigin(CompoundTag const&);
    void addEntityData(std::unique_ptr<CompoundTag>);
    void _parseStructureTag(CompoundTag const&);
    void _parseSize(CompoundTag const&);
    void _parseEntities(CompoundTag const&);
    void addPalette(std::string const&, StructureBlockPalette);
    void _parsePalettes(CompoundTag const&);
    void _saveSize(CompoundTag &)const;
    void load(CompoundTag const&);
    void getSize()const;
    void _validateSizeAndBlockIndicesSize()const;
    void _saveBlockIndices(CompoundTag &)const;
    void getStructureWorldOrigin()const;
    void clear();
    StructureTemplateData();
    void _contentErrorMissingField(std::string const&)const;
    void _parseFormatVersion(CompoundTag const&);
    void _saveEntities(CompoundTag &)const;
    void setStructureWorldOrigin(BlockPos const&);
    void _savePalettes(CompoundTag &)const;
    void setBlockIndices(std::vector<int>);
    void getFormatVersion()const;
    void getEntityData()const;
    void save()const;
    void getBlockIndices()const;
};
