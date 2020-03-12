#pragma once

#include "PackReport.h"
#include "PackIdVersion.h"


class PackSourceReport {

public:
    void merge(PackSourceReport &&);
    ~PackSourceReport();
    PackSourceReport();
    void addReport(PackIdVersion const&, PackReport &&);
    void getReports();
    PackSourceReport(PackSourceReport const&);
    bool hasErrors()const;
    void getReport(PackIdVersion const&)const;
};
