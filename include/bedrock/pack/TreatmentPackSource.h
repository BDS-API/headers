#pragma once

#include <memory>
#include <string>
#include "PackSource.h"
#include <functional>


class TreatmentPackSource : PackSource {

public:
    ~TreatmentPackSource();
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackOrigin()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void getPackType()const;
    virtual void forEachPack(std::function<void (Pack &)>);
    bool isCopyable()const;
    void removePack(Core::Path const&);
    std::string getPath()const;
//  TreatmentPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    void addPack(std::unique_ptr<Pack> &&);
};
