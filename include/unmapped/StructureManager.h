#pragma once

#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/level/storage/LevelStorage"
#include "../core/Path"


class StructureManager {

public:
    static long LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long BEHAVIOR_PACK_STRUCTURES_FOLDER;


    StructureManager(void);
    void getOrCreateLegacy(std::string const&);
    void _getLegacy(std::string const&);
    void _createAndLoadStructure(std::string const&);
    void load(StructureTemplate &);
    void _readLegacyStructure(std::string const&);
    void loadLegacy(LegacyStructureTemplate &, std::string &);
    void getOrCreate(std::string const&);
    void getStructure(std::string const&)const;
    void saveToLevel(StructureTemplate const&);
    void exportStructure(StructureTemplate const&, Core::Path const&);
    void setLevelStorage(LevelStorage *);
    void setPackManager(ResourcePackManager &);
    void createStructureDataExportPacket(std::string const&, StructureTemplateResponseType);
    void clearLoadedStructures();
};
