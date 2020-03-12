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

    void setShowBoundingBox(bool);
    void getIgnoreBlocks()const;
    void getIgnoreEntities()const;
    void setStructureDataField(std::string const&);
    void validateOffset(BlockPos const&);
    void getIncludePlayers()const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getNamespaceFromName(std::string const&);
    void getStructureSize()const;
    ~StructureEditorData();
    void getMirror()const;
    void getPivot()const;
    void setIgnoreBlocks(bool);
//  void setRotation(Rotation); //TODO: incomplete function definition
    void setIgnoreEntities(bool);
    std::string getStructureName()const;
//  void setStructureName(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void getRedstoneSaveMode()const;
    void structureNameIsValid(std::string const&);
    void operator==(StructureEditorData const&)const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getNameWithoutNamespace(std::string const&);
    void operator!=(StructureEditorData const&)const;
    void getRotation()const;
    void getIntegritySeed()const;
    void validateSize(BlockPos const&);
    void setStructureOffset(BlockPos const&);
    void getStructureBlockType()const;
//  void getOrientedBounds(BlockPos const&, Rotation); //TODO: incomplete function definition
    std::string getStructureDataField()const;
    void getShowBoundingBox()const;
    void setIntegrityValue(float);
    void setIntegritySeed(unsigned int);
//  void setRedstoneSaveMode(StructureRedstoneSaveMode); //TODO: incomplete function definition
    void getLastTouchedByPlayerID()const;
    void getStructureSettings()const;
//  void setStructureBlockType(StructureBlockType); //TODO: incomplete function definition
    void getStructureOffset()const;
//  void setMirror(Mirror); //TODO: incomplete function definition
    void getIntegrityValue()const;
    void initStateWithExperimentalFlag(bool);
    StructureEditorData(StructureEditorData const&);
    void setStructureSize(BlockPos const&);
    void save(CompoundTag &)const;
    StructureEditorData(StructureEditorData &&);
    StructureEditorData();
    void setIncludePlayers(bool);
};
