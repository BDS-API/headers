#pragma once

#include "../../core/Path"
#include "../../unmapped/ResourceLocation"
#include "../file/access/IFileAccess"


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess()

    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
