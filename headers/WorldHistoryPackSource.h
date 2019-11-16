#pragma once

class WorldHistoryPackSource : PackSource {

    virtual void WorldHistory~WorldHistoryPackSource();
    virtual void WorldHistory~WorldHistoryPackSource();
    virtual void WorldHistoryforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void WorldHistoryforEachPack(std::function<void ()(Pack &)>);
    virtual void WorldHistorygetPackOrigin(void)const;
    virtual void WorldHistorygetPackType(void)const;
    virtual void WorldHistoryload(PackManifestFactory &, IContentKeyProvider const&);
}
