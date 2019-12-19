#pragma once

using namespace com::mojang::clacks::protocol;

class MetricReport : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::MetricReport::~MetricReport();
    virtual void New(void)const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear(void);
    virtual void IsInitialized(void)const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong(void)const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize(void)const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata(void)const;

    void set_ticktime(long);
    void has_ticktime(void)const;
    void set_has_ticktime(void);
    void metric_case(void)const;
    void InitAsDefaultInstance(void);
    void set_allocated_bandwith(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
    void clear_metric(void);
    void set_allocated_latency(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
    MetricReport(void);
    void SharedCtor(void);
    MetricReport(com::mojang::clacks::protocol::MetricReport const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::MetricReport const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport const&);
    void Swap(com::mojang::clacks::protocol::MetricReport*);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport*);
    void GetArenaNoVirtual(void)const;
    void set_has_bandwith(void);
    void set_has_latency(void);
    void clear_has_metric(void);
    void mutable_bandwith(void);
    void bandwith(void)const;
    void mutable_latency(void);
    void latency(void)const;
    void ticktime(void)const;
    void has_metric(void)const;
    void internal_default_instance(void);
    void has_bandwith(void)const;
    void _internal_bandwith(void)const;
    void has_latency(void)const;
    void _internal_latency(void)const;
};
