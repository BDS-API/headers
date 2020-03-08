#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class StructureEditorData {

public:
    static long NAMESPACE_DELIMITER;
    static long DEFAULT_STRUCTURE_TYPE;
    static long MIN_STRUCTURE_SIZE;
    static long MAX_STRUCTURE_SIZE;
    static long MIN_STRUCTURE_OFFSET;
    static long MAX_STRUCTURE_OFFSET;
    static long DEFAULT_STRUCTURE_NAMESPACE[abi:cxx11];


    StructureEditorData(StructureEditorData const&);
    StructureEditorData(StructureEditorData&&);
    void initStateWithExperimentalFlag(bool);
    StructureEditorData(void);
    void setStructureName(gsl::basic_string_span<char const, -1l>);
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
    void setRedstoneSaveMode(StructureRedstoneSaveMode);
    void getLastTouchedByPlayerID()const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getStructureBlockType()const;
    void setStructureBlockType(StructureBlockType);
    void getIgnoreEntities()const;
    void setIgnoreEntities(bool);
    void getRotation()const;
    void setRotation(Rotation);
    void getMirror()const;
    void setMirror(Mirror);
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
    void getOrientedBounds(BlockPos const&, Rotation);
    void save(CompoundTag &)const;
};
