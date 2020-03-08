#pragma once

#include "../mce/UUID"
#include "../core/Path"


class PackSourceFactory {

public:

    PackSourceFactory(std::shared_ptr<IInPackagePacks> const&);
    void createDirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool);
    void getDirectoryPackSource(Core::Path const&, PackType)const;
    void createInPackagePackSource(PackType);
    void getInPackagePackSource(PackType);
    void createWorldHistoryPackSource(Core::Path const&, PackType);
    void getWorldHistoryPackSource(Core::Path const&, PackType)const;
    void getDirectoryPackSourceContaining(PackIdVersion const&)const;
    void createWorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin);
    void getWorldTemplatePackSource(mce::UUID const&, PackType)const;
    void getRealmsUnknownPackSources();
    void removeFromDirectoryPackSource(Core::Path const&);
};
