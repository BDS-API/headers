#pragma once

class WorldTemplateManager {

public:

    WorldTemplateManager(PackManifestFactory &, IContentKeyProvider const&, PackSourceFactory &, Core::FilePathManager const&, bool);
    void _initialize(void);
    void _initializePackSources(void);
    void _onStorageDirectoryChanged(void);
    void populateWorldTemplates(void);
    void sortWorldTemplates(void);
    void onStorageDirectoryChanged(void);
    bool isInitialized(void);
    void addKnownPackFromImport(Pack const&);
    void _onDiscoverWorldTemplate(Pack const&);
    void getWorldTemplateAtIndex(int)const;
    void _isValidWorld(int)const;
    void getLocalPremiumPackIds(void)const;
    void findWorldTemplateAtIndex(int);
    void findInstalledWorldTemplateByUUID(std::vector<mce::UUID, std::allocator<mce::UUID>> const&)const;
    void findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID, std::allocator<mce::UUID>> const&)const;
    void findInstalledWorldTemplate(PackIdVersion const&)const;
    void getWorldTemplateSize(void)const;
    bool isWorldTemplateInstalled(mce::UUID const&)const;
    void deleteWorldTemplate(PackIdVersion const&);
    void deleteWorldTemplateFiles(PackIdVersion const&);
    void postDeleteWorldTemplate(PackIdVersion const&);
    void _deleteWorldTemplate(PackIdVersion const&, std::function<bool ()(Core::Path const&)>);
    void getProxy(void);
    void setSortMethod(std::function<bool ()(std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo>> const&, std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo>> const&)>);
};
