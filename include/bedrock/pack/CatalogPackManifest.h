#pragma once

#include <string>
#include "PackManifest.h"


class CatalogPackManifest : PackManifest {

public:
    ~CatalogPackManifest();
    virtual void clone()const;
    CatalogPackManifest(CatalogPackManifest const&);
    CatalogPackManifest();
//  void setMinimumPerformanceRequirements(DlcPerformanceTier); //TODO: incomplete function definition
    std::string getProductId()const;
    void getMinimumPerformanceRequirements()const;
    void setProductId(std::string);
};
