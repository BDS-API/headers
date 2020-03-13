#pragma once

#include <memory>


class PackSourceFactory {

public:
    class RealmsUnknownPackSources;

    PackSourceFactory(std::shared_ptr<IInPackagePacks> const&); // _ZN17PackSourceFactoryC2ERKSt10shared_ptrI15IInPackagePacksE
    ~PackSourceFactory(); // _ZN17PackSourceFactoryD2Ev
//  void createDirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition // _ZN17PackSourceFactory25createDirectoryPackSourceERKN4Core4PathE8PackType10PackOriginb
//  void getDirectoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition // _ZNK17PackSourceFactory22getDirectoryPackSourceERKN4Core4PathE8PackType
//  void createInPackagePackSource(PackType); //TODO: incomplete function definition // _ZN17PackSourceFactory25createInPackagePackSourceE8PackType
//  void getInPackagePackSource(PackType); //TODO: incomplete function definition // _ZN17PackSourceFactory22getInPackagePackSourceE8PackType
//  void createWorldHistoryPackSource(Core::Path const&, PackType); //TODO: incomplete function definition // _ZN17PackSourceFactory28createWorldHistoryPackSourceERKN4Core4PathE8PackType
//  void getWorldHistoryPackSource(Core::Path const&, PackType)const; //TODO: incomplete function definition // _ZNK17PackSourceFactory25getWorldHistoryPackSourceERKN4Core4PathE8PackType
    void getDirectoryPackSourceContaining(PackIdVersion const&)const; // _ZNK17PackSourceFactory32getDirectoryPackSourceContainingERK13PackIdVersion
//  void createWorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin); //TODO: incomplete function definition // _ZN17PackSourceFactory29createWorldTemplatePackSourceERK20WorldTemplateManagerRKN3mce4UUIDE8PackType10PackOrigin
//  void getWorldTemplatePackSource(mce::UUID const&, PackType)const; //TODO: incomplete function definition // _ZNK17PackSourceFactory26getWorldTemplatePackSourceERKN3mce4UUIDE8PackType
    void getRealmsUnknownPackSources(); // _ZN17PackSourceFactory27getRealmsUnknownPackSourcesEv
    void removeFromDirectoryPackSource(Core::Path const&); // _ZN17PackSourceFactory29removeFromDirectoryPackSourceERKN4Core4PathE
    class RealmsUnknownPackSources {

    public:
        ~RealmsUnknownPackSources(); // _ZN17PackSourceFactory24RealmsUnknownPackSourcesD2Ev
    };
};
