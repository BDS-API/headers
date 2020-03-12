#pragma once



class PackSourceReport {

public:
    void getReports();
    ~PackSourceReport();
    PackSourceReport();
    void merge(PackSourceReport &&);
    void getReport(PackIdVersion const&)const;
    void addReport(PackIdVersion const&, PackReport &&);
    PackSourceReport(PackSourceReport const&);
    bool hasErrors()const;
};
