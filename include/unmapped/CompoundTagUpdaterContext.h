#pragma once

#include <memory>


class CompoundTagUpdaterContext {

public:
    void sortUpdaters();
    CompoundTagUpdaterContext();
    void addUpdater(unsigned char, unsigned char, unsigned char);
    void latestVersion()const;
    void comparisonPredicate(std::unique_ptr<CompoundTagUpdater> const&, std::unique_ptr<CompoundTagUpdater> const&);
    void makeVersion(unsigned char, unsigned char, unsigned char, unsigned char);
    void baseVersion(unsigned int);
    void update(CompoundTag &, unsigned int);
    void mergeVersion(unsigned int, unsigned char);
    ~CompoundTagUpdaterContext();
};
