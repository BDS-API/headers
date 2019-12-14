#pragma once

class VanillaBlockUpdater {

public:
    static long VanillaBlockUpdater::mContext;


    void initialize(void);
    void get(void);
    void addBaseUpdater(CompoundTagUpdaterContext &);
    void addUpdaters_1_10_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_12_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_13_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_14_0(CompoundTagUpdaterContext &);
    void addUpdaters_1_15_0(CompoundTagUpdaterContext &);
    void destroy(void);
    void addRailUpdater_1_14_0(std::string const&, CompoundTagUpdaterContext &);
};
