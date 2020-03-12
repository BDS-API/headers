#pragma once

#include "StructureTemplate.h"
#include <string>
#include "../bedrock/pack/ResourcePackManager.h"
#include "../core/Path.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include "LegacyStructureTemplate.h"


class StructureManager {

public:
    static long LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long BEHAVIOR_PACK_STRUCTURES_FOLDER;

    ~StructureManager();
    void getStructure(std::string const&)const;
    void saveToLevel(StructureTemplate const&);
    void setPackManager(ResourcePackManager &);
    StructureManager();
    void _readLegacyStructure(std::string const&);
    void load(StructureTemplate &);
    void _getLegacy(std::string const&);
    void getOrCreateLegacy(std::string const&);
    void loadLegacy(LegacyStructureTemplate &, std::string &);
    void exportStructure(StructureTemplate const&, Core::Path const&);
    void clearLoadedStructures();
    void _createAndLoadStructure(std::string const&);
    void setLevelStorage(LevelStorage *);
    void getOrCreate(std::string const&);
//  void createStructureDataExportPacket(std::string const&, StructureTemplateResponseType); //TODO: incomplete function definition
};
