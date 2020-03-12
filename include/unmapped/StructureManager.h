#pragma once

#include <string>


class StructureManager {

public:
    static long LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long BEHAVIOR_PACK_STRUCTURES_FOLDER;

    void _getLegacy(std::string const&);
    void getOrCreateLegacy(std::string const&);
    ~StructureManager();
    void saveToLevel(StructureTemplate const&);
    void clearLoadedStructures();
    void setLevelStorage(LevelStorage *);
    void _readLegacyStructure(std::string const&);
    void setPackManager(ResourcePackManager &);
    void getStructure(std::string const&)const;
    void loadLegacy(LegacyStructureTemplate &, std::string &);
    void getOrCreate(std::string const&);
    void _createAndLoadStructure(std::string const&);
    void exportStructure(StructureTemplate const&, Core::Path const&);
    void load(StructureTemplate &);
//  void createStructureDataExportPacket(std::string const&, StructureTemplateResponseType); //TODO: incomplete function definition
    StructureManager();
};
