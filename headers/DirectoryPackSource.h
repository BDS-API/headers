#pragma once

class DirectoryPackSource : PackSource {

    virtual void Directory~DirectoryPackSource();
    virtual void Directory~DirectoryPackSource();
    virtual void DirectoryforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void DirectoryforEachPack(std::function<void ()(Pack &)>);
    virtual void DirectorygetPackOrigin(void)const;
    virtual void DirectorygetPackType(void)const;
    virtual void Directoryload(PackManifestFactory &, IContentKeyProvider const&);
}
