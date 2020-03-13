#pragma once



class PackSourceReport {

public:
    void merge(PackSourceReport &&); // _ZN16PackSourceReport5mergeEOS_
    void addReport(PackIdVersion const&, PackReport &&); // _ZN16PackSourceReport9addReportERK13PackIdVersionO10PackReport
    void getReports(); // _ZN16PackSourceReport10getReportsEv
    void getReport(PackIdVersion const&)const; // _ZNK16PackSourceReport9getReportERK13PackIdVersion
    bool hasErrors()const; // _ZNK16PackSourceReport9hasErrorsEv
    PackSourceReport(); // _ZN16PackSourceReportC2Ev
    ~PackSourceReport(); // _ZN16PackSourceReportD2Ev
    PackSourceReport(PackSourceReport const&); // _ZN16PackSourceReportC2ERKS_
};
