#pragma once

#include <string>


namespace VanillaBlockUpdater {

    static long mContext;

    void addUpdaters_1_10_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_14_0(CompoundTagUpdaterContext &);
    void destroy();
    void get();
    void addBaseUpdater(CompoundTagUpdaterContext &);
    void addUpdaters_1_15_0(CompoundTagUpdaterContext &);
    void addRailUpdater_1_14_0(std::string const&, CompoundTagUpdaterContext &);
    void addUpdaters_1_13_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_12_0(CompoundTagUpdaterContext &);
    void initialize();
};
