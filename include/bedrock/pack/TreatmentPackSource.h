#pragma once

#include "../../core/Path.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include <memory>
#include "PackSource.h"


class TreatmentPackSource : PackSource {

public:
    ~TreatmentPackSource();
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void forEachPack(std::function<void (Pack &)>);
//  TreatmentPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    std::string getPath()const;
    void addPack(std::unique_ptr<Pack> &&);
    bool isCopyable()const;
    void removePack(Core::Path const&);
};
