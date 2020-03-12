#pragma once

#include <string>
#include <vector>
#include <functional>


class WorldTemplateManager {

public:
    ~WorldTemplateManager();
    void addKnownPackFromImport(Pack const&);
    WorldTemplateManager(PackManifestFactory &, IContentKeyProvider const&, PackSourceFactory &, Core::FilePathManager const&, bool);
    void _onStorageDirectoryChanged();
    void deleteWorldTemplate(PackIdVersion const&);
    void getLocalPremiumPackIds()const;
    void setSortMethod(std::function<bool (std::unique_ptr<WorldTemplateInfo> const&, std::unique_ptr<WorldTemplateInfo> const&)>);
    void getProxy();
    void _initializePackSources();
    void findWorldTemplateAtIndex(int);
    void findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&)const;
    void postDeleteWorldTemplate(PackIdVersion const&);
    std::string _getWorldTemplatesPath()const;
    void _isValidWorld(int)const;
    void deleteWorldTemplateFiles(PackIdVersion const&);
    void getWorldTemplateAtIndex(int)const;
    void _deleteWorldTemplate(PackIdVersion const&, std::function<bool (Core::Path const&)>);
    void _initialize();
    void findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID> const&)const;
    void getWorldTemplateSize()const;
    bool isWorldTemplateInstalled(mce::UUID const&)const;
    void sortWorldTemplates();
    void onStorageDirectoryChanged();
    bool isInitialized();
    void _onDiscoverWorldTemplate(Pack const&);
    void populateWorldTemplates();
    void findInstalledWorldTemplate(PackIdVersion const&)const;
};
