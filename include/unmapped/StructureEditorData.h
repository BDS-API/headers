#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"


class StructureEditorData {

public:
    static long NAMESPACE_DELIMITER;
    static long DEFAULT_STRUCTURE_TYPE;
    static long MIN_STRUCTURE_SIZE;
    static long MAX_STRUCTURE_SIZE;
    static long MIN_STRUCTURE_OFFSET;
    static long MAX_STRUCTURE_OFFSET;
    static std::string DEFAULT_STRUCTURE_NAMESPACE;

//  void getOrientedBounds(BlockPos const&, Rotation); //TODO: incomplete function definition
    void setIntegrityValue(float);
    void setStructureOffset(BlockPos const&);
    StructureEditorData(StructureEditorData const&);
    void setIncludePlayers(bool);
    void setStructureDataField(std::string const&);
//  void setRedstoneSaveMode(StructureRedstoneSaveMode); //TODO: incomplete function definition
//  void setMirror(Mirror); //TODO: incomplete function definition
    StructureEditorData(StructureEditorData &&);
    void setIgnoreEntities(bool);
    void getLastTouchedByPlayerID()const;
    void getIncludePlayers()const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getIgnoreEntities()const;
    std::string getStructureName()const;
    void getNameWithoutNamespace(std::string const&);
//  void setStructureName(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void structureNameIsValid(std::string const&);
    void setIgnoreBlocks(bool);
//  void setStructureBlockType(StructureBlockType); //TODO: incomplete function definition
//  void setRotation(Rotation); //TODO: incomplete function definition
    void operator==(StructureEditorData const&)const;
    void getShowBoundingBox()const;
    void setIntegritySeed(unsigned int);
    void validateOffset(BlockPos const&);
    void load(CompoundTag const&, DataLoadHelper &);
    void getPivot()const;
    void getIgnoreBlocks()const;
    void setShowBoundingBox(bool);
    void validateSize(BlockPos const&);
    std::string getStructureDataField()const;
    StructureEditorData();
    void save(CompoundTag &)const;
    void getRotation()const;
    void getIntegrityValue()const;
    void getIntegritySeed()const;
    void getStructureSettings()const;
    void setStructureSize(BlockPos const&);
    void getNamespaceFromName(std::string const&);
    void getStructureBlockType()const;
    void initStateWithExperimentalFlag(bool);
    void getStructureSize()const;
    void operator!=(StructureEditorData const&)const;
    void getStructureOffset()const;
    ~StructureEditorData();
    void getRedstoneSaveMode()const;
    void getMirror()const;
};
