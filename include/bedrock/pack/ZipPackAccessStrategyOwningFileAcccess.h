#pragma once

#include "../../unmapped/ResourceLocation"
#include "../file/access/IFileAccess"
#include "../../core/Path"


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    virtual ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess()

    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
