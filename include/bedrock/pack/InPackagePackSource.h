#pragma once

#include "../../unmapped/Pack.h"
#include "../../unmapped/IInPackagePacks.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include <memory>
#include "PackSource.h"


class InPackagePackSource : PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~InPackagePackSource();
    virtual void getPackType()const;
//  InPackagePackSource(std::shared_ptr<IInPackagePacks> const&, PackType); //TODO: incomplete function definition
};
