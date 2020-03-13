#pragma once

#include <string>


class StructureManager {

public:
    static long LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;
    static long BEHAVIOR_PACK_STRUCTURES_FOLDER;

    StructureManager(); // _ZN16StructureManagerC2Ev
    ~StructureManager(); // _ZN16StructureManagerD2Ev
    void getOrCreateLegacy(std::string const&); // _ZN16StructureManager17getOrCreateLegacyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getLegacy(std::string const&); // _ZN16StructureManager10_getLegacyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _createAndLoadStructure(std::string const&); // _ZN16StructureManager23_createAndLoadStructureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void load(StructureTemplate &); // _ZN16StructureManager4loadER17StructureTemplate
    void _readLegacyStructure(std::string const&); // _ZN16StructureManager20_readLegacyStructureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadLegacy(LegacyStructureTemplate &, std::string &); // _ZN16StructureManager10loadLegacyER23LegacyStructureTemplateRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getOrCreate(std::string const&); // _ZN16StructureManager11getOrCreateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getStructure(std::string const&)const; // _ZNK16StructureManager12getStructureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void saveToLevel(StructureTemplate const&); // _ZN16StructureManager11saveToLevelERK17StructureTemplate
    void exportStructure(StructureTemplate const&, Core::Path const&); // _ZN16StructureManager15exportStructureERK17StructureTemplateRKN4Core4PathE
    void setLevelStorage(LevelStorage *); // _ZN16StructureManager15setLevelStorageEP12LevelStorage
    void setPackManager(ResourcePackManager &); // _ZN16StructureManager14setPackManagerER19ResourcePackManager
//  void createStructureDataExportPacket(std::string const&, StructureTemplateResponseType); //TODO: incomplete function definition // _ZN16StructureManager31createStructureDataExportPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE29StructureTemplateResponseType
    void clearLoadedStructures(); // _ZN16StructureManager21clearLoadedStructuresEv
};
