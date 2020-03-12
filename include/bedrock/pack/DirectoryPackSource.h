#pragma once

#include <memory>
#include <string>
#include "PackSource.h"
#include <functional>


class DirectoryPackSource : PackSource {

public:
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    ~DirectoryPackSource();
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    void deleteAllPacksAndReset();
    void _setPath(Core::Path const&);
    void _isDiscovered()const;
    std::string getPath()const;
    void removePack(Core::Path const&);
    void checkAndRemoveIncompletePacks(Core::Path const&);
//  DirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition
    bool isCopyable()const;
    void addPack(std::unique_ptr<Pack> &&);
};
