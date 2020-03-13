#pragma once

#include <string>
#include <memory>
#include "StructureBlockPalette.h"
#include <vector>


class StructureTemplateData {

public:
    static std::string DEFAULT_PALETTE_NAME;

    ~StructureTemplateData(); // _ZN21StructureTemplateDataD2Ev
    StructureTemplateData(); // _ZN21StructureTemplateDataC2Ev
    void load(CompoundTag const&); // _ZN21StructureTemplateData4loadERK11CompoundTag
    void _parseFormatVersion(CompoundTag const&); // _ZN21StructureTemplateData19_parseFormatVersionERK11CompoundTag
    void _parseSize(CompoundTag const&); // _ZN21StructureTemplateData10_parseSizeERK11CompoundTag
    void _parseStructureWorldOrigin(CompoundTag const&); // _ZN21StructureTemplateData26_parseStructureWorldOriginERK11CompoundTag
    void _parseStructureTag(CompoundTag const&); // _ZN21StructureTemplateData18_parseStructureTagERK11CompoundTag
    void _parseBlockIndices(CompoundTag const&); // _ZN21StructureTemplateData18_parseBlockIndicesERK11CompoundTag
    void _validateSizeAndBlockIndicesSize()const; // _ZNK21StructureTemplateData32_validateSizeAndBlockIndicesSizeEv
    void _parsePalettes(CompoundTag const&); // _ZN21StructureTemplateData14_parsePalettesERK11CompoundTag
    void _parseEntities(CompoundTag const&); // _ZN21StructureTemplateData14_parseEntitiesERK11CompoundTag
    void save()const; // _ZNK21StructureTemplateData4saveEv
    void _saveFormatVersion(CompoundTag &)const; // _ZNK21StructureTemplateData18_saveFormatVersionER11CompoundTag
    void _saveSize(CompoundTag &)const; // _ZNK21StructureTemplateData9_saveSizeER11CompoundTag
    void _saveStructureWorldOrigin(CompoundTag &)const; // _ZNK21StructureTemplateData25_saveStructureWorldOriginER11CompoundTag
    void _saveStructureTag(CompoundTag &)const; // _ZNK21StructureTemplateData17_saveStructureTagER11CompoundTag
    void clear(); // _ZN21StructureTemplateData5clearEv
    void getFormatVersion()const; // _ZNK21StructureTemplateData16getFormatVersionEv
    void getSize()const; // _ZNK21StructureTemplateData7getSizeEv
    void setSize(BlockPos const&); // _ZN21StructureTemplateData7setSizeERK8BlockPos
    void getStructureWorldOrigin()const; // _ZNK21StructureTemplateData23getStructureWorldOriginEv
    void setStructureWorldOrigin(BlockPos const&); // _ZN21StructureTemplateData23setStructureWorldOriginERK8BlockPos
    void getBlockIndices()const; // _ZNK21StructureTemplateData15getBlockIndicesEv
    void setBlockIndices(std::vector<int>); // _ZN21StructureTemplateData15setBlockIndicesESt6vectorIiSaIiEE
    void getExtraBlockIndices()const; // _ZNK21StructureTemplateData20getExtraBlockIndicesEv
    void setExtraBlockIndices(std::vector<int>); // _ZN21StructureTemplateData20setExtraBlockIndicesESt6vectorIiSaIiEE
    void addPalette(std::string const&, StructureBlockPalette); // _ZN21StructureTemplateData10addPaletteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE21StructureBlockPalette
    void getPalette(std::string const&)const; // _ZNK21StructureTemplateData10getPaletteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getEntityData()const; // _ZNK21StructureTemplateData13getEntityDataEv
    void addEntityData(std::unique_ptr<CompoundTag>); // _ZN21StructureTemplateData13addEntityDataESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void _contentErrorMissingField(std::string const&)const; // _ZNK21StructureTemplateData25_contentErrorMissingFieldERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _saveBlockIndices(CompoundTag &)const; // _ZNK21StructureTemplateData17_saveBlockIndicesER11CompoundTag
    void _savePalettes(CompoundTag &)const; // _ZNK21StructureTemplateData13_savePalettesER11CompoundTag
    void _saveEntities(CompoundTag &)const; // _ZNK21StructureTemplateData13_saveEntitiesER11CompoundTag
    void _setFormatVersion(int); // _ZN21StructureTemplateData17_setFormatVersionEi
};
