#pragma once

#include "ZipPackAccessStrategy.h"
#include <memory>


class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    ~ZipPackAccessStrategyOwningFileAcccess(); // _ZN38ZipPackAccessStrategyOwningFileAcccessD2Ev
    ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&); // _ZN38ZipPackAccessStrategyOwningFileAcccessC2ESt10shared_ptrI11IFileAccessERK16ResourceLocationRKN4Core4PathE
};
