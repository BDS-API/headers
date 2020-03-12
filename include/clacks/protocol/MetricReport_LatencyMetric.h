#pragma once

#include "Xuid.h"


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_LatencyMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void Clear();
                    virtual void New()const;
                    virtual bool IsInitialized()const;
                    virtual void ByteSizeLong()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
                    ~MetricReport_LatencyMetric();
                    void GetArenaNoVirtual()const;
                    void xuid()const;
                    MetricReport_LatencyMetric();
                    void set_latencyinns(long);
                    void set_pinginns(long);
                    void descriptor();
                    void latencyinns()const;
                    void _internal_xuid()const;
                    void internal_default_instance();
                    void mutable_xuid();
                    MetricReport_LatencyMetric(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void has_xuid()const;
                    void SharedCtor();
                    void Swap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void pinginns()const;
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void default_instance();
                    void SharedDtor();
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
                    void InitAsDefaultInstance();
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
                };
            }
        }
    }
}
