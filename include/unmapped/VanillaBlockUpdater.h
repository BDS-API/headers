#pragma once

#include <string>


namespace VanillaBlockUpdater {

    static long mContext;

    void initialize(); // _ZN19VanillaBlockUpdater10initializeEv
    void get(); // _ZN19VanillaBlockUpdater3getEv
    void addBaseUpdater(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater14addBaseUpdaterER25CompoundTagUpdaterContext
    void addUpdaters_1_10_0(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater18addUpdaters_1_10_0ER25CompoundTagUpdaterContext
    void addUpdaters_1_12_0(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater18addUpdaters_1_12_0ER25CompoundTagUpdaterContext
    void addUpdaters_1_13_0(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater18addUpdaters_1_13_0ER25CompoundTagUpdaterContext
    void addUpdaters_1_14_0(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater18addUpdaters_1_14_0ER25CompoundTagUpdaterContext
    void addUpdaters_1_15_0(CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater18addUpdaters_1_15_0ER25CompoundTagUpdaterContext
    void destroy(); // _ZN19VanillaBlockUpdater7destroyEv
    void addRailUpdater_1_14_0(std::string const&, CompoundTagUpdaterContext &); // _ZN19VanillaBlockUpdater21addRailUpdater_1_14_0ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER25CompoundTagUpdaterContext
};
