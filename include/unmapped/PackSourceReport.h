#pragma once

#include "./PackReport.h"
#include "./PackIdVersion.h"
#include "./PackSourceReport.h"


class PackSourceReport {

public:

    void merge(PackSourceReport &&);
    void addReport(PackIdVersion const&, PackReport &&);
    void getReports();
    void getReport(PackIdVersion const&)const;
    bool hasErrors()const;
    PackSourceReport();
    ~PackSourceReport();
    PackSourceReport(PackSourceReport const&);
};
