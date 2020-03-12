#pragma once

#include <memory>
#include "ZipPackAccessStrategy.h"


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    ~ZipPackAccessStrategyOwningFileAcccess();
    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
