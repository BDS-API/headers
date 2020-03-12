#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "CompoundTagUpdater.h"
#include <memory>


class CompoundTagUpdaterContext {

public:
    CompoundTagUpdaterContext();
    void update(CompoundTag &, unsigned int);
    void addUpdater(unsigned char, unsigned char, unsigned char);
    void sortUpdaters();
    void baseVersion(unsigned int);
    void latestVersion()const;
    void mergeVersion(unsigned int, unsigned char);
    ~CompoundTagUpdaterContext();
    void makeVersion(unsigned char, unsigned char, unsigned char, unsigned char);
    void comparisonPredicate(std::unique_ptr<CompoundTagUpdater> const&, std::unique_ptr<CompoundTagUpdater> const&);
};
