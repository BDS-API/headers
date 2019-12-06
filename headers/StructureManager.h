#pragma once

class StructureManager {

public:
    static long StructureManager::LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long StructureManager::BEHAVIOR_PACK_STRUCTURES_FOLDER;


    void StructureManager(void);
    void getOrCreateLegacy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getLegacy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _createAndLoadStructure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void load(StructureTemplate &);
    void _readLegacyStructure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void loadLegacy(LegacyStructureTemplate &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void getOrCreate(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getStructure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void saveToLevel(StructureTemplate const&);
    void exportStructure(StructureTemplate const&, Core::Path const&);
    void setLevelStorage(LevelStorage *);
    void setPackManager(ResourcePackManager &);
    void createStructureDataExportPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, StructureTemplateResponseType);
    void clearLoadedStructures(void);
};
