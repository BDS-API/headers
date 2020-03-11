#pragma once

#include "../../core/Path.h"
#include "../file/access/IFileAccess.h"
#include <memory>
#include "../../unmapped/ResourceLocation.h"
#include "./ZipPackAccessStrategy.h"


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    virtual ~ZipPackAccessStrategyOwningFileAcccess();

    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
