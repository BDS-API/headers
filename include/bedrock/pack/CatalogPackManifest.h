#pragma once

#include "./PackManifest.h"
#include <string>
#include "./CatalogPackManifest.h"


class CatalogPackManifest : PackManifest {

public:
    virtual ~CatalogPackManifest();
    virtual void clone()const;

    CatalogPackManifest();
    void setProductId(std::string);
    std::string getProductId()const;
//  void setMinimumPerformanceRequirements(DlcPerformanceTier); //TODO: incomplete function definition
    void getMinimumPerformanceRequirements()const;
    CatalogPackManifest(CatalogPackManifest const&);
};
