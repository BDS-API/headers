#pragma once

#include "../core/Path.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "./StructureTemplate.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include "./LegacyStructureTemplate.h"
#include <string>


class StructureManager {

public:
    static long LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long BEHAVIOR_PACK_STRUCTURES_FOLDER;


    StructureManager();
    ~StructureManager();
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
//  void createStructureDataExportPacket(std::string const&, StructureTemplateResponseType); //TODO: incomplete function definition
    void clearLoadedStructures();
};
