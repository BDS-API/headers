#pragma once

#include <memory>


class CompoundTagUpdaterContext {

public:
    void latestVersion()const; // _ZNK25CompoundTagUpdaterContext13latestVersionEv
    ~CompoundTagUpdaterContext(); // _ZN25CompoundTagUpdaterContextD2Ev
    CompoundTagUpdaterContext(); // _ZN25CompoundTagUpdaterContextC2Ev
    void addUpdater(unsigned char, unsigned char, unsigned char); // _ZN25CompoundTagUpdaterContext10addUpdaterEhhh
    void comparisonPredicate(std::unique_ptr<CompoundTagUpdater> const&, std::unique_ptr<CompoundTagUpdater> const&); // _ZN25CompoundTagUpdaterContext19comparisonPredicateERKSt10unique_ptrI18CompoundTagUpdaterSt14default_deleteIS1_EES6_
    void update(CompoundTag &, unsigned int); // _ZN25CompoundTagUpdaterContext6updateER11CompoundTagj
    void sortUpdaters(); // _ZN25CompoundTagUpdaterContext12sortUpdatersEv
    void makeVersion(unsigned char, unsigned char, unsigned char, unsigned char); // _ZN25CompoundTagUpdaterContext11makeVersionEhhhh
    void baseVersion(unsigned int); // _ZN25CompoundTagUpdaterContext11baseVersionEj
    void mergeVersion(unsigned int, unsigned char); // _ZN25CompoundTagUpdaterContext12mergeVersionEjh
};
