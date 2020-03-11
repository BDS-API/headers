#pragma once

#include "../mce/UUID.h"
#include "../core/Path.h"
#include "./IInPackagePacks.h"
#include "./PackIdVersion.h"
#include <memory>
#include "./WorldTemplateManager.h"


class PackSourceFactory {

public:

    PackSourceFactory(std::shared_ptr<IInPackagePacks> const&);
    ~PackSourceFactory();
//  void createDirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition
//  void getDirectoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition
//  void createInPackagePackSource(PackType); //TODO: incomplete function definition
//  void getInPackagePackSource(PackType); //TODO: incomplete function definition
//  void createWorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
//  void getWorldHistoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition
    void getDirectoryPackSourceContaining(PackIdVersion const&)const;
//  void createWorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition
//  void getWorldTemplatePackSource(mce::UUID const&, PackType)const; //TODO: incomplete function definition
    void getRealmsUnknownPackSources();
    void removeFromDirectoryPackSource(Core::Path const&);
};
