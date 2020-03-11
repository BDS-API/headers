#pragma once

#include "./PackSource.h"
#include <memory>
#include "../../unmapped/IInPackagePacks.h"
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/Pack.h"
#include <functional>


class InPackagePackSource : PackSource {

public:
    virtual ~InPackagePackSource();
//  virtual void forEachPackConst(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
//  virtual void forEachPack(std::function<void (Pack &)>); //TODO: incomplete function definition
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

//  InPackagePackSource(std::shared_ptr<IInPackagePacks> const&, PackType); //TODO: incomplete function definition
};
