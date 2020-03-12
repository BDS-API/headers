#pragma once

#include "IContentKeyProvider.h"
#include "../core/FilePathManager.h"
#include "PackIdVersion.h"
#include "Pack.h"
#include "WorldTemplateInfo.h"
#include <functional>
#include "../core/Path.h"
#include <vector>
#include <memory>
#include "PackManifestFactory.h"
#include "PackSourceFactory.h"
#include "../mce/UUID.h"


class WorldTemplateManager {

public:
    void _initialize();
    void sortWorldTemplates();
    void deleteWorldTemplateFiles(PackIdVersion const&);
    void _initializePackSources();
    void _onDiscoverWorldTemplate(Pack const&);
    void setSortMethod(std::function<bool (std::unique_ptr<WorldTemplateInfo> const&, std::unique_ptr<WorldTemplateInfo> const&)>);
    ~WorldTemplateManager();
    bool isWorldTemplateInstalled(mce::UUID const&)const;
    void populateWorldTemplates();
    WorldTemplateManager(PackManifestFactory &, IContentKeyProvider const&, PackSourceFactory &, Core::FilePathManager const&, bool);
    void deleteWorldTemplate(PackIdVersion const&);
    void _isValidWorld(int)const;
    void postDeleteWorldTemplate(PackIdVersion const&);
    void getWorldTemplateSize()const;
    void getProxy();
    void findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID> const&)const;
    void findWorldTemplateAtIndex(int);
    void findInstalledWorldTemplate(PackIdVersion const&)const;
    void addKnownPackFromImport(Pack const&);
    void onStorageDirectoryChanged();
    std::string _getWorldTemplatesPath()const;
    void _deleteWorldTemplate(PackIdVersion const&, std::function<bool (Core::Path const&)>);
    bool isInitialized();
    void getWorldTemplateAtIndex(int)const;
    void getLocalPremiumPackIds()const;
    void findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&)const;
    void _onStorageDirectoryChanged();
};
