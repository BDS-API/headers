#pragma once

#include "Xuid.h"


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_BandwithMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void New()const;
                    virtual void ByteSizeLong()const;
                    virtual void Clear();
                    virtual bool IsInitialized()const;
                    ~MetricReport_BandwithMetric();
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
                    virtual void GetMetadata()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    void SharedCtor();
                    void internal_default_instance();
                    void xuid()const;
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void set_connectiontotalbytessent(long);
                    void connectiontotalbytessent()const;
                    void descriptor();
                    void Swap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    void _internal_xuid()const;
                    void set_playerdeltabytessent(long);
                    void set_playerdeltabytesreceived(long);
                    MetricReport_BandwithMetric(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void playerdeltabytessent()const;
                    void set_connectiontotalbytesreceived(long);
                    void GetArenaNoVirtual()const;
                    void playerdeltabytesreceived()const;
                    MetricReport_BandwithMetric();
                    void default_instance();
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
                    void has_xuid()const;
                    void connectiontotalbytesreceived()const;
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
                    void InitAsDefaultInstance();
                    void mutable_xuid();
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
                    void SharedDtor();
                };
            }
        }
    }
}
