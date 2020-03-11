#pragma once

#include "./StructureEditorData.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class StructureEditorData {

public:
    static long NAMESPACE_DELIMITER;
    static long DEFAULT_STRUCTURE_TYPE;
    static long MIN_STRUCTURE_SIZE;
    static long MAX_STRUCTURE_SIZE;
    static long MIN_STRUCTURE_OFFSET;
    static long MAX_STRUCTURE_OFFSET;
    static std::string DEFAULT_STRUCTURE_NAMESPACE;


    StructureEditorData(StructureEditorData const&);
    ~StructureEditorData();
    StructureEditorData(StructureEditorData &&);
    void initStateWithExperimentalFlag(bool);
    StructureEditorData();
    void operator==(StructureEditorData const&)const;
    void operator!=(StructureEditorData const&)const;
    std::string getStructureName()const;
//  void setStructureName(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void getStructureOffset()const;
    void setStructureOffset(BlockPos const&);
    void getStructureSize()const;
    void setStructureSize(BlockPos const&);
    void getPivot()const;
    void getIgnoreBlocks()const;
    void setIgnoreBlocks(bool);
    void getIncludePlayers()const;
    void setIncludePlayers(bool);
    void getShowBoundingBox()const;
    void setShowBoundingBox(bool);
    void getRedstoneSaveMode()const;
//  void setRedstoneSaveMode(StructureRedstoneSaveMode); //TODO: incomplete function definition
    void getLastTouchedByPlayerID()const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getStructureBlockType()const;
//  void setStructureBlockType(StructureBlockType); //TODO: incomplete function definition
    void getIgnoreEntities()const;
    void setIgnoreEntities(bool);
    void getRotation()const;
//  void setRotation(Rotation); //TODO: incomplete function definition
    void getMirror()const;
//  void setMirror(Mirror); //TODO: incomplete function definition
    std::string getStructureDataField()const;
    void setStructureDataField(std::string const&);
    void getIntegrityValue()const;
    void setIntegrityValue(float);
    void getIntegritySeed()const;
    void setIntegritySeed(unsigned int);
    void getStructureSettings()const;
    void validateSize(BlockPos const&);
    void validateOffset(BlockPos const&);
    void structureNameIsValid(std::string const&);
    void getNamespaceFromName(std::string const&);
    void getNameWithoutNamespace(std::string const&);
    void load(CompoundTag const&, DataLoadHelper &);
//  void getOrientedBounds(BlockPos const&, Rotation); //TODO: incomplete function definition
    void save(CompoundTag &)const;
};
