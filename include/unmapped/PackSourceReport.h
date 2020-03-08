#pragma once



class PackSourceReport {

public:

    void merge(PackSourceReport&&);
    void addReport(PackIdVersion const&, PackReport &&);
    void getReports();
    void getReport(PackIdVersion const&)const;
    bool hasErrors()const;
    PackSourceReport(void);
    PackSourceReport(PackSourceReport const&);
};
