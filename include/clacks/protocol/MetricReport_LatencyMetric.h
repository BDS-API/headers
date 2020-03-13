#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport_LatencyMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~MetricReport_LatencyMetric(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetricD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric11GetMetadataEv
                    void set_latencyinns(long); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric15set_latencyinnsEl
                    void set_pinginns(long); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric12set_pinginnsEl
                    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric18set_allocated_xuidEPNS2_4XuidE
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric17GetArenaNoVirtualEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric21InitAsDefaultInstanceEv
                    MetricReport_LatencyMetric(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetricC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric10SharedCtorEv
                    MetricReport_LatencyMetric(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetricC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric12InternalSwapEPS3_
                    void has_xuid()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric8has_xuidEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric25internal_default_instanceEv
                    void mutable_xuid(); // _ZN3com6mojang6clacks8protocol26MetricReport_LatencyMetric12mutable_xuidEv
                    void _internal_xuid()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric14_internal_xuidEv
                    void latencyinns()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric11latencyinnsEv
                    void pinginns()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric8pinginnsEv
                    void xuid()const; // _ZNK3com6mojang6clacks8protocol26MetricReport_LatencyMetric4xuidEv
                };
            }
        }
    }
}
