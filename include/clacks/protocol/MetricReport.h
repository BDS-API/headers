#pragma once

#include "./MetricReport_LatencyMetric.h"
#include "./MetricReport.h"
#include "./MetricReport_BandwithMetric.h"


namespace com::mojang::clacks::protocol {

class MetricReport /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~MetricReport();
    virtual void New()const;
//  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
    virtual void Clear();
    virtual bool IsInitialized()const;
//  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
    virtual void ByteSizeLong()const;
//  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void set_ticktime(long);
    void has_ticktime()const;
    void set_has_ticktime();
    void metric_case()const;
    void InitAsDefaultInstance();
    void set_allocated_bandwith(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
    void clear_metric();
    void set_allocated_latency(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
    MetricReport();
    void SharedCtor();
    MetricReport(com::mojang::clacks::protocol::MetricReport const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::MetricReport const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport const&);
    void Swap(com::mojang::clacks::protocol::MetricReport *);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport *);
    void GetArenaNoVirtual()const;
    void set_has_bandwith();
    void set_has_latency();
    void clear_has_metric();
    void mutable_bandwith();
    void bandwith()const;
    void mutable_latency();
    void latency()const;
    void ticktime()const;
    void has_metric()const;
    void internal_default_instance();
    void has_bandwith()const;
    void _internal_bandwith()const;
    void has_latency()const;
    void _internal_latency()const;
};

}