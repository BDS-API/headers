#pragma once

#include <memory>
#include "PackSource.h"
#include <functional>


class InPackagePackSource : PackSource {

public:
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void getPackType()const;
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackOrigin()const;
    ~InPackagePackSource();
//  InPackagePackSource(std::shared_ptr<IInPackagePacks> const&, PackType); //TODO: incomplete function definition
};
