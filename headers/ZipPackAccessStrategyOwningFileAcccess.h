#pragma once

class ZipPackAccessStrategyOwningFileAcccess : ZipPackAccessStrategy {

public:
    virtual ~ZipPackAccessStrategyOwningFileAcccess();

    void ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&);
};
