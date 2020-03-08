#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"


class StructureTemplateData {

public:
    static long DEFAULT_PALETTE_NAME[abi:cxx11];

    virtual StructureTemplateData::~StructureTemplateData()

    StructureTemplateData(void);
    void load(CompoundTag const&);
    void _parseFormatVersion(CompoundTag const&);
    void _parseSize(CompoundTag const&);
    void _parseStructureWorldOrigin(CompoundTag const&);
    void _parseStructureTag(CompoundTag const&);
    void _parseBlockIndices(CompoundTag const&);
    void _validateSizeAndBlockIndicesSize()const;
    void _parsePalettes(CompoundTag const&);
    void _parseEntities(CompoundTag const&);
    void save()const;
    void _saveFormatVersion(CompoundTag &)const;
    void _saveSize(CompoundTag &)const;
    void _saveStructureWorldOrigin(CompoundTag &)const;
    void _saveStructureTag(CompoundTag &)const;
    void clear();
    void getFormatVersion()const;
    void getSize()const;
    void setSize(BlockPos const&);
    void getStructureWorldOrigin()const;
    void setStructureWorldOrigin(BlockPos const&);
    void getBlockIndices()const;
    void setBlockIndices(std::vector<int, std::allocator<int>>);
    void getExtraBlockIndices()const;
    void setExtraBlockIndices(std::vector<int, std::allocator<int>>);
    void addPalette(std::string const&, StructureBlockPalette);
    void getPalette(std::string const&)const;
    void getEntityData()const;
    void addEntityData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void _contentErrorMissingField(std::string const&)const;
    void _saveBlockIndices(CompoundTag &)const;
    void _savePalettes(CompoundTag &)const;
    void _saveEntities(CompoundTag &)const;
    void _setFormatVersion(int);
};
