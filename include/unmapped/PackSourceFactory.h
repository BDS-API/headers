#pragma once

#include <memory>


class PackSourceFactory {

public:
    class RealmsUnknownPackSources;

    void removeFromDirectoryPackSource(Core::Path const&);
//  void createWorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition
//  void createDirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition
    PackSourceFactory(std::shared_ptr<IInPackagePacks> const&);
//  void getDirectoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition
    ~PackSourceFactory();
//  void getInPackagePackSource(PackType); //TODO: incomplete function definition
//  void createWorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    void getDirectoryPackSourceContaining(PackIdVersion const&)const;
//  void getWorldHistoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition
//  void getWorldTemplatePackSource(mce::UUID const&, PackType)const; //TODO: incomplete function definition
//  void createInPackagePackSource(PackType); //TODO: incomplete function definition
    void getRealmsUnknownPackSources();
    class RealmsUnknownPackSources {

    public:
        ~RealmsUnknownPackSources();
    };
};
