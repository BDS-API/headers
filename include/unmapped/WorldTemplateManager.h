#pragma once

#include "../core/Path.h"
#include "../mce/UUID.h"
#include "../core/FilePathManager.h"
#include "./PackManifestFactory.h"
#include "./PackIdVersion.h"
#include <memory>
#include "./Pack.h"
#include "./IContentKeyProvider.h"
#include "./PackSourceFactory.h"
#include <vector>
#include "./WorldTemplateInfo.h"
#include <functional>
#include <string>


class WorldTemplateManager {

public:

    WorldTemplateManager(PackManifestFactory &, IContentKeyProvider const&, PackSourceFactory &, Core::FilePathManager const&, bool);
    void _initialize();
    void _initializePackSources();
    std::string _getWorldTemplatesPath()const;
    void _onStorageDirectoryChanged();
    ~WorldTemplateManager();
    void populateWorldTemplates();
    void sortWorldTemplates();
    void onStorageDirectoryChanged();
    bool isInitialized();
    void addKnownPackFromImport(Pack const&);
    void _onDiscoverWorldTemplate(Pack const&);
    void getWorldTemplateAtIndex(int)const;
    void _isValidWorld(int)const;
    void getLocalPremiumPackIds()const;
    void findWorldTemplateAtIndex(int);
    void findInstalledWorldTemplateByUUID(std::vector<mce::UUID, std::allocator<mce::UUID>> const&)const;
    void findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID, std::allocator<mce::UUID>> const&)const;
    void findInstalledWorldTemplate(PackIdVersion const&)const;
    void getWorldTemplateSize()const;
    bool isWorldTemplateInstalled(mce::UUID const&)const;
    void deleteWorldTemplate(PackIdVersion const&);
    void deleteWorldTemplateFiles(PackIdVersion const&);
    void postDeleteWorldTemplate(PackIdVersion const&);
    void _deleteWorldTemplate(PackIdVersion const&, std::function<bool (Core::Path const&)>);
    void getProxy();
    void setSortMethod(std::function<bool (std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo>> const&, std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo>> const&)>);
};
