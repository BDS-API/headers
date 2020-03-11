#pragma once

#include "./CompoundTagUpdaterContext.h"
#include <string>


class VanillaBlockUpdater {

public:
    static long mContext;


    void initialize();
    void get();
    void addBaseUpdater(CompoundTagUpdaterContext &);
    void addUpdaters_1_10_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_12_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_13_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_14_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_15_0(CompoundTagUpdaterContext &);
    void destroy();
    void addRailUpdater_1_14_0(std::string const&, CompoundTagUpdaterContext &);
};
