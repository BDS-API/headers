#pragma once

using namespace com::mojang::clacks::protocol;

class MetricReport_LatencyMetric : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::MetricReport_LatencyMetric::~MetricReport_LatencyMetric();
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

    void set_latencyinns(long);
    void set_pinginns(long);
    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
    void GetArenaNoVirtual(void)const;
    void InitAsDefaultInstance(void);
    MetricReport_LatencyMetric(void);
    void SharedCtor(void);
    MetricReport_LatencyMetric(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void Swap(com::mojang::clacks::protocol::MetricReport_LatencyMetric*);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport_LatencyMetric*);
    void has_xuid(void)const;
    void internal_default_instance(void);
    void mutable_xuid(void);
    void _internal_xuid(void)const;
    void latencyinns(void)const;
    void pinginns(void)const;
    void xuid(void)const;
};
