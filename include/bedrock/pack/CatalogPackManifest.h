#pragma once

class CatalogPackManifest : PackManifest {

public:
    virtual CatalogPackManifest::~CatalogPackManifest();
    virtual void clone(void)const;

    CatalogPackManifest(void);
    void setProductId(std::string);
    void setMinimumPerformanceRequirements(DlcPerformanceTier);
    void getMinimumPerformanceRequirements(void)const;
    CatalogPackManifest(CatalogPackManifest const&);
};
