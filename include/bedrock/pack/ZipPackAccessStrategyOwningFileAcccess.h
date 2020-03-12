#pragma once

#include "../../core/Path.h"
#include "ZipPackAccessStrategy.h"
#include "../file/access/IFileAccess.h"
#include <memory>
#include "../../unmapped/ResourceLocation.h"


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    ~ZipPackAccessStrategyOwningFileAcccess();
    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
