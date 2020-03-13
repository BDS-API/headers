#pragma once

#include <memory>
#include <functional>
#include "PackSource.h"


class InPackagePackSource : PackSource {

public:
    ~InPackagePackSource(); // _ZN19InPackagePackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK19InPackagePackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN19InPackagePackSource11forEachPackESt8functionIFvR4PackEE
    virtual void getPackOrigin()const; // _ZNK19InPackagePackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK19InPackagePackSource11getPackTypeEv
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN19InPackagePackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  InPackagePackSource(std::shared_ptr<IInPackagePacks> const&, PackType); //TODO: incomplete function definition // _ZN19InPackagePackSourceC2ERKSt10shared_ptrI15IInPackagePacksE8PackType
};
