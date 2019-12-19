#pragma once

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
    void getStructureOffset(void)const;
    void setStructureOffset(BlockPos const&);
    void getStructureSize(void)const;
    void setStructureSize(BlockPos const&);
    void getPivot(void)const;
    void getIgnoreBlocks(void)const;
    void setIgnoreBlocks(bool);
    void getIncludePlayers(void)const;
    void setIncludePlayers(bool);
    void getShowBoundingBox(void)const;
    void setShowBoundingBox(bool);
    void getRedstoneSaveMode(void)const;
    void setRedstoneSaveMode(StructureRedstoneSaveMode);
    void getLastTouchedByPlayerID(void)const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getStructureBlockType(void)const;
    void setStructureBlockType(StructureBlockType);
    void getIgnoreEntities(void)const;
    void setIgnoreEntities(bool);
    void getRotation(void)const;
    void setRotation(Rotation);
    void getMirror(void)const;
    void setMirror(Mirror);
    void setStructureDataField(std::string const&);
    void getIntegrityValue(void)const;
    void setIntegrityValue(float);
    void getIntegritySeed(void)const;
    void setIntegritySeed(unsigned int);
    void getStructureSettings(void)const;
    void validateSize(BlockPos const&);
    void validateOffset(BlockPos const&);
    void structureNameIsValid(std::string const&);
    void getNamespaceFromName(std::string const&);
    void getNameWithoutNamespace(std::string const&);
    void load(CompoundTag const&, DataLoadHelper &);
    void getOrientedBounds(BlockPos const&, Rotation);
    void save(CompoundTag &)const;
};
