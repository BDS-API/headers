#pragma once

class WorldTemplatePackSource : DirectoryPackSource {

public:
    virtual ~WorldTemplatePackSource();
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    void WorldTemplatePackSource(WorldTemplateManager const&, mce::UUID const&, PackType, PackOrigin);
    void getWorldTemplateId(void)const;
};
