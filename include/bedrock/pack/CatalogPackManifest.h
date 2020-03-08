#pragma once



class CatalogPackManifest : PackManifest {

public:
    virtual CatalogPackManifest::~CatalogPackManifest()
    virtual void clone()const;

    CatalogPackManifest(void);
    void setProductId(std::string);
    void setMinimumPerformanceRequirements(DlcPerformanceTier);
    void getMinimumPerformanceRequirements()const;
    CatalogPackManifest(CatalogPackManifest const&);
};
