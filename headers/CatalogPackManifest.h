#pragma once

class CatalogPackManifest : PackManifest {

public:
    virtual ~CatalogPackManifest();
    virtual void clone(void)const;

    void CatalogPackManifest(void);
    void setProductId(std::string);
    void setMinimumPerformanceRequirements(DlcPerformanceTier);
    void getMinimumPerformanceRequirements(void)const;
    void CatalogPackManifest(CatalogPackManifest const&);
};
