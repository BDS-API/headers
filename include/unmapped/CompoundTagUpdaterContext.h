#pragma once

#include "../bedrock/nbt/CompoundTag"


class CompoundTagUpdaterContext {

public:

    void latestVersion()const;
    CompoundTagUpdaterContext(void);
    void addUpdater(unsigned char, unsigned char, unsigned char);
    void comparisonPredicate(std::unique_ptr<CompoundTagUpdater, std::default_delete<CompoundTagUpdater>> const&, std::unique_ptr<CompoundTagUpdater, std::default_delete<CompoundTagUpdater>> const&);
    void update(CompoundTag &, unsigned int);
    void sortUpdaters();
    void makeVersion(unsigned char, unsigned char, unsigned char, unsigned char);
    void baseVersion(unsigned int);
    void mergeVersion(unsigned int, unsigned char);
};
