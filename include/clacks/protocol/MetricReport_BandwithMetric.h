#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_BandwithMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~MetricReport_BandwithMetric(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetricD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric11GetMetadataEv
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric18set_allocated_xuidEPNS2_4XuidE
                    void set_playerdeltabytessent(long); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric24set_playerdeltabytessentEl
                    void set_playerdeltabytesreceived(long); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric28set_playerdeltabytesreceivedEl
                    void set_connectiontotalbytesreceived(long); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric32set_connectiontotalbytesreceivedEl
                    void set_connectiontotalbytessent(long); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric28set_connectiontotalbytessentEl
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric17GetArenaNoVirtualEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric21InitAsDefaultInstanceEv
                    MetricReport_BandwithMetric(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetricC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric10SharedCtorEv
                    MetricReport_BandwithMetric(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetricC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric12InternalSwapEPS3_
                    void has_xuid()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric8has_xuidEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric25internal_default_instanceEv
                    void mutable_xuid(); // _ZN3com6mojang6clacks8protocol27MetricReport_BandwithMetric12mutable_xuidEv
                    void _internal_xuid()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric14_internal_xuidEv
                    void playerdeltabytessent()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric20playerdeltabytessentEv
                    void playerdeltabytesreceived()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric24playerdeltabytesreceivedEv
                    void connectiontotalbytesreceived()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric28connectiontotalbytesreceivedEv
                    void connectiontotalbytessent()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric24connectiontotalbytessentEv
                    void xuid()const; // _ZNK3com6mojang6clacks8protocol27MetricReport_BandwithMetric4xuidEv
                };
            }
        }
    }
}
