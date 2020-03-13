#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class StructureEditorData {

public:
    static long NAMESPACE_DELIMITER;
    static long DEFAULT_STRUCTURE_TYPE;
    static long MIN_STRUCTURE_SIZE;
    static long MAX_STRUCTURE_SIZE;
    static long MIN_STRUCTURE_OFFSET;
    static long MAX_STRUCTURE_OFFSET;
    static std::string DEFAULT_STRUCTURE_NAMESPACE;

    StructureEditorData(StructureEditorData const&); // _ZN19StructureEditorDataC2ERKS_
    ~StructureEditorData(); // _ZN19StructureEditorDataD2Ev
    StructureEditorData(StructureEditorData &&); // _ZN19StructureEditorDataC2EOS_
    void initStateWithExperimentalFlag(bool); // _ZN19StructureEditorData29initStateWithExperimentalFlagEb
    StructureEditorData(); // _ZN19StructureEditorDataC2Ev
    void operator==(StructureEditorData const&)const; // _ZNK19StructureEditorDataeqERKS_
    void operator!=(StructureEditorData const&)const; // _ZNK19StructureEditorDataneERKS_
    std::string getStructureName()const; // _ZNK19StructureEditorData16getStructureNameB5cxx11Ev
//  void setStructureName(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN19StructureEditorData16setStructureNameEN3gsl17basic_string_spanIKcLln1EEE
    void getStructureOffset()const; // _ZNK19StructureEditorData18getStructureOffsetEv
    void setStructureOffset(BlockPos const&); // _ZN19StructureEditorData18setStructureOffsetERK8BlockPos
    void getStructureSize()const; // _ZNK19StructureEditorData16getStructureSizeEv
    void setStructureSize(BlockPos const&); // _ZN19StructureEditorData16setStructureSizeERK8BlockPos
    void getPivot()const; // _ZNK19StructureEditorData8getPivotEv
    void getIgnoreBlocks()const; // _ZNK19StructureEditorData15getIgnoreBlocksEv
    void setIgnoreBlocks(bool); // _ZN19StructureEditorData15setIgnoreBlocksEb
    void getIncludePlayers()const; // _ZNK19StructureEditorData17getIncludePlayersEv
    void setIncludePlayers(bool); // _ZN19StructureEditorData17setIncludePlayersEb
    void getShowBoundingBox()const; // _ZNK19StructureEditorData18getShowBoundingBoxEv
    void setShowBoundingBox(bool); // _ZN19StructureEditorData18setShowBoundingBoxEb
    void getRedstoneSaveMode()const; // _ZNK19StructureEditorData19getRedstoneSaveModeEv
//  void setRedstoneSaveMode(StructureRedstoneSaveMode); //TODO: incomplete function definition // _ZN19StructureEditorData19setRedstoneSaveModeE25StructureRedstoneSaveMode
    void getLastTouchedByPlayerID()const; // _ZNK19StructureEditorData24getLastTouchedByPlayerIDEv
    void setLastTouchedByPlayerID(ActorUniqueID); // _ZN19StructureEditorData24setLastTouchedByPlayerIDE13ActorUniqueID
    void getStructureBlockType()const; // _ZNK19StructureEditorData21getStructureBlockTypeEv
//  void setStructureBlockType(StructureBlockType); //TODO: incomplete function definition // _ZN19StructureEditorData21setStructureBlockTypeE18StructureBlockType
    void getIgnoreEntities()const; // _ZNK19StructureEditorData17getIgnoreEntitiesEv
    void setIgnoreEntities(bool); // _ZN19StructureEditorData17setIgnoreEntitiesEb
    void getRotation()const; // _ZNK19StructureEditorData11getRotationEv
//  void setRotation(Rotation); //TODO: incomplete function definition // _ZN19StructureEditorData11setRotationE8Rotation
    void getMirror()const; // _ZNK19StructureEditorData9getMirrorEv
//  void setMirror(Mirror); //TODO: incomplete function definition // _ZN19StructureEditorData9setMirrorE6Mirror
    std::string getStructureDataField()const; // _ZNK19StructureEditorData21getStructureDataFieldB5cxx11Ev
    void setStructureDataField(std::string const&); // _ZN19StructureEditorData21setStructureDataFieldERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getIntegrityValue()const; // _ZNK19StructureEditorData17getIntegrityValueEv
    void setIntegrityValue(float); // _ZN19StructureEditorData17setIntegrityValueEf
    void getIntegritySeed()const; // _ZNK19StructureEditorData16getIntegritySeedEv
    void setIntegritySeed(unsigned int); // _ZN19StructureEditorData16setIntegritySeedEj
    void getStructureSettings()const; // _ZNK19StructureEditorData20getStructureSettingsEv
    void validateSize(BlockPos const&); // _ZN19StructureEditorData12validateSizeERK8BlockPos
    void validateOffset(BlockPos const&); // _ZN19StructureEditorData14validateOffsetERK8BlockPos
    void structureNameIsValid(std::string const&); // _ZN19StructureEditorData20structureNameIsValidERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getNamespaceFromName(std::string const&); // _ZN19StructureEditorData20getNamespaceFromNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getNameWithoutNamespace(std::string const&); // _ZN19StructureEditorData23getNameWithoutNamespaceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void load(CompoundTag const&, DataLoadHelper &); // _ZN19StructureEditorData4loadERK11CompoundTagR14DataLoadHelper
//  void getOrientedBounds(BlockPos const&, Rotation); //TODO: incomplete function definition // _ZN19StructureEditorData17getOrientedBoundsERK8BlockPos8Rotation
    void save(CompoundTag &)const; // _ZNK19StructureEditorData4saveER11CompoundTag
};
