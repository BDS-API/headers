#pragma once

class PackSourceReport {

public:

    void merge(PackSourceReport&&);
    void addReport(PackIdVersion const&, PackReport &&);
    void getReports(void);
    void getReport(PackIdVersion const&)const;
    bool hasErrors(void)const;
    void PackSourceReport(void);
    void PackSourceReport(PackSourceReport const&);
};
