#pragma once

class StructureTemplateData {

public:
    virtual ~StructureTemplateData();

    void StructureTemplateData(void);
    void load(CompoundTag const&);
    void _parseFormatVersion(CompoundTag const&);
    void _parseSize(CompoundTag const&);
    void _parseStructureWorldOrigin(CompoundTag const&);
    void _parseStructureTag(CompoundTag const&);
    void _parseBlockIndices(CompoundTag const&);
    void _validateSizeAndBlockIndicesSize(void)const;
    void _parsePalettes(CompoundTag const&);
    void _parseEntities(CompoundTag const&);
    void save(void)const;
    void _saveFormatVersion(CompoundTag &)const;
    void _saveSize(CompoundTag &)const;
    void _saveStructureWorldOrigin(CompoundTag &)const;
    void _saveStructureTag(CompoundTag &)const;
    void clear(void);
    void getFormatVersion(void)const;
    void getSize(void)const;
    void setSize(BlockPos const&);
    void getStructureWorldOrigin(void)const;
    void setStructureWorldOrigin(BlockPos const&);
    void getBlockIndices(void)const;
    void setBlockIndices(std::vector<int, std::allocator<int>>);
    void getExtraBlockIndices(void)const;
    void setExtraBlockIndices(std::vector<int, std::allocator<int>>);
    void addPalette(std::string const&, StructureBlockPalette);
    void getPalette(std::string const&)const;
    void getEntityData(void)const;
    void addEntityData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void _contentErrorMissingField(std::string const&)const;
    void _saveBlockIndices(CompoundTag &)const;
    void _savePalettes(CompoundTag &)const;
    void _saveEntities(CompoundTag &)const;
    void _setFormatVersion(int);
};
