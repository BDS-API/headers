#pragma once

class StructureEditorData {

public:
    static long StructureEditorData::NAMESPACE_DELIMITER;
    static long StructureEditorData::DEFAULT_STRUCTURE_TYPE;
    static long StructureEditorData::MIN_STRUCTURE_SIZE;
    static long StructureEditorData::MAX_STRUCTURE_SIZE;
    static long StructureEditorData::MIN_STRUCTURE_OFFSET;
    static long StructureEditorData::MAX_STRUCTURE_OFFSET;


    void StructureEditorData(StructureEditorData const&);
    void StructureEditorData(StructureEditorData&&);
    void initStateWithExperimentalFlag(bool);
    void StructureEditorData(void);
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
    void setStructureDataField(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getIntegrityValue(void)const;
    void setIntegrityValue(float);
    void getIntegritySeed(void)const;
    void setIntegritySeed(unsigned int);
    void getStructureSettings(void)const;
    void validateSize(BlockPos const&);
    void validateOffset(BlockPos const&);
    void structureNameIsValid(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getNamespaceFromName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getNameWithoutNamespace(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void load(CompoundTag const&, DataLoadHelper &);
    void getOrientedBounds(BlockPos const&, Rotation);
    void save(CompoundTag &)const;
};