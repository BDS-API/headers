#pragma once

#include "MetricReport_LatencyMetric.h"
#include "MetricReport_BandwithMetric.h"


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class MetricUnion;

                    virtual bool IsInitialized()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void New()const;
                    virtual void SetCachedSize(int)const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~MetricReport();
                    virtual void ByteSizeLong()const;
                    virtual void GetCachedSize()const;
                    virtual void GetMetadata()const;
                    void default_instance();
                    void set_allocated_latency(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void latency()const;
                    void InitAsDefaultInstance();
                    void mutable_latency();
                    void _internal_latency()const;
                    void clear_has_metric();
                    void has_latency()const;
                    void SharedDtor();
                    void clear_metric();
                    void ticktime()const;
                    void set_allocated_bandwith(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    void _internal_bandwith()const;
                    void descriptor();
                    void set_ticktime(long);
                    void internal_default_instance();
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport const&);
                    void set_has_ticktime();
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport const&);
                    void mutable_bandwith();
                    void bandwith()const;
                    void metric_case()const;
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport *);
                    void Swap(com::mojang::clacks::protocol::MetricReport *);
                    void has_metric()const;
                    void GetArenaNoVirtual()const;
                    void has_ticktime()const;
                    void set_has_latency();
                    void has_bandwith()const;
                    MetricReport(com::mojang::clacks::protocol::MetricReport const&);
                    MetricReport();
                    void set_has_bandwith();
                    void SharedCtor();
                    class MetricUnion {

                    public:
                        MetricUnion();
                    };
                };
            }
        }
    }
}
