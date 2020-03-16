#pragma once

#include <functional>
#include <string>
#include <vector>


class WorldTemplateManager {

public:
    WorldTemplateManager(PackManifestFactory &, IContentKeyProvider const&, PackSourceFactory &, Core::FilePathManager const&, bool); // _ZN20WorldTemplateManagerC2ER19PackManifestFactoryRK19IContentKeyProviderR17PackSourceFactoryRKN4Core15FilePathManagerEb
    void _initialize(); // _ZN20WorldTemplateManager11_initializeEv
    void _initializePackSources(); // _ZN20WorldTemplateManager22_initializePackSourcesEv
    std::string _getWorldTemplatesPath()const; // _ZNK20WorldTemplateManager22_getWorldTemplatesPathB5cxx11Ev
    void _onStorageDirectoryChanged(); // _ZN20WorldTemplateManager26_onStorageDirectoryChangedEv
    ~WorldTemplateManager(); // _ZN20WorldTemplateManagerD2Ev
    void populateWorldTemplates(); // _ZN20WorldTemplateManager22populateWorldTemplatesEv
    void sortWorldTemplates(); // _ZN20WorldTemplateManager18sortWorldTemplatesEv
    void onStorageDirectoryChanged(); // _ZN20WorldTemplateManager25onStorageDirectoryChangedEv
    bool isInitialized(); // _ZN20WorldTemplateManager13isInitializedEv
    void addKnownPackFromImport(Pack const&); // _ZN20WorldTemplateManager22addKnownPackFromImportERK4Pack
    void _onDiscoverWorldTemplate(Pack const&); // _ZN20WorldTemplateManager24_onDiscoverWorldTemplateERK4Pack
    void getWorldTemplateAtIndex(int)const; // _ZNK20WorldTemplateManager23getWorldTemplateAtIndexEi
    void _isValidWorld(int)const; // _ZNK20WorldTemplateManager13_isValidWorldEi
    void getLocalPremiumPackIds()const; // _ZNK20WorldTemplateManager22getLocalPremiumPackIdsEv
    void findWorldTemplateAtIndex(int); // _ZN20WorldTemplateManager24findWorldTemplateAtIndexEi
    void findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&)const; // _ZNK20WorldTemplateManager32findInstalledWorldTemplateByUUIDERKSt6vectorIN3mce4UUIDESaIS2_EE
    void findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID> const&)const; // _ZNK20WorldTemplateManager44findInstalledWorldTemplateByPackUUIDNonConstERKSt6vectorIN3mce4UUIDESaIS2_EE
    void findInstalledWorldTemplate(PackIdVersion const&)const; // _ZNK20WorldTemplateManager26findInstalledWorldTemplateERK13PackIdVersion
    void getWorldTemplateSize()const; // _ZNK20WorldTemplateManager20getWorldTemplateSizeEv
    bool isWorldTemplateInstalled(mce::UUID const&)const; // _ZNK20WorldTemplateManager24isWorldTemplateInstalledERKN3mce4UUIDE
    void deleteWorldTemplate(PackIdVersion const&); // _ZN20WorldTemplateManager19deleteWorldTemplateERK13PackIdVersion
    void deleteWorldTemplateFiles(PackIdVersion const&); // _ZN20WorldTemplateManager24deleteWorldTemplateFilesERK13PackIdVersion
    void postDeleteWorldTemplate(PackIdVersion const&); // _ZN20WorldTemplateManager23postDeleteWorldTemplateERK13PackIdVersion
    void _deleteWorldTemplate(PackIdVersion const&, std::function<bool (Core::Path const&)>); // _ZN20WorldTemplateManager20_deleteWorldTemplateERK13PackIdVersionSt8functionIFbRKN4Core4PathEEE
    void getProxy(); // _ZN20WorldTemplateManager8getProxyEv
    void setSortMethod(std::function<bool (std::unique_ptr<WorldTemplateInfo> const&, std::unique_ptr<WorldTemplateInfo> const&)>); // _ZN20WorldTemplateManager13setSortMethodESt8functionIFbRKSt10unique_ptrI17WorldTemplateInfoSt14default_deleteIS2_EES7_EE
};
