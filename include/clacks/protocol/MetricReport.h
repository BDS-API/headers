#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class MetricReport /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class MetricUnion;

                    ~MetricReport(); // _ZN3com6mojang6clacks8protocol12MetricReportD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol12MetricReport3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol12MetricReport3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol12MetricReport5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol12MetricReport13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol12MetricReport27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol12MetricReport12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol12MetricReport24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol12MetricReport13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol12MetricReport39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol12MetricReport8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol12MetricReport9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol12MetricReport13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol12MetricReport11GetMetadataEv
                    void set_ticktime(long); // _ZN3com6mojang6clacks8protocol12MetricReport12set_ticktimeEl
                    void has_ticktime()const; // _ZNK3com6mojang6clacks8protocol12MetricReport12has_ticktimeEv
                    void set_has_ticktime(); // _ZN3com6mojang6clacks8protocol12MetricReport16set_has_ticktimeEv
                    void metric_case()const; // _ZNK3com6mojang6clacks8protocol12MetricReport11metric_caseEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol12MetricReport21InitAsDefaultInstanceEv
                    void set_allocated_bandwith(com::mojang::clacks::protocol::MetricReport_BandwithMetric *); // _ZN3com6mojang6clacks8protocol12MetricReport22set_allocated_bandwithEPNS2_27MetricReport_BandwithMetricE
                    void clear_metric(); // _ZN3com6mojang6clacks8protocol12MetricReport12clear_metricEv
                    void set_allocated_latency(com::mojang::clacks::protocol::MetricReport_LatencyMetric *); // _ZN3com6mojang6clacks8protocol12MetricReport21set_allocated_latencyEPNS2_26MetricReport_LatencyMetricE
                    MetricReport(); // _ZN3com6mojang6clacks8protocol12MetricReportC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol12MetricReport10SharedCtorEv
                    MetricReport(com::mojang::clacks::protocol::MetricReport const&); // _ZN3com6mojang6clacks8protocol12MetricReportC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol12MetricReport10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol12MetricReport10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol12MetricReport16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::MetricReport const&); // _ZN3com6mojang6clacks8protocol12MetricReport9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::MetricReport const&); // _ZN3com6mojang6clacks8protocol12MetricReport8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::MetricReport *); // _ZN3com6mojang6clacks8protocol12MetricReport4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::MetricReport *); // _ZN3com6mojang6clacks8protocol12MetricReport12InternalSwapEPS3_
                    void GetArenaNoVirtual()const; // _ZNK3com6mojang6clacks8protocol12MetricReport17GetArenaNoVirtualEv
                    void set_has_bandwith(); // _ZN3com6mojang6clacks8protocol12MetricReport16set_has_bandwithEv
                    void set_has_latency(); // _ZN3com6mojang6clacks8protocol12MetricReport15set_has_latencyEv
                    void clear_has_metric(); // _ZN3com6mojang6clacks8protocol12MetricReport16clear_has_metricEv
                    void mutable_bandwith(); // _ZN3com6mojang6clacks8protocol12MetricReport16mutable_bandwithEv
                    void bandwith()const; // _ZNK3com6mojang6clacks8protocol12MetricReport8bandwithEv
                    void mutable_latency(); // _ZN3com6mojang6clacks8protocol12MetricReport15mutable_latencyEv
                    void latency()const; // _ZNK3com6mojang6clacks8protocol12MetricReport7latencyEv
                    void ticktime()const; // _ZNK3com6mojang6clacks8protocol12MetricReport8ticktimeEv
                    void has_metric()const; // _ZNK3com6mojang6clacks8protocol12MetricReport10has_metricEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol12MetricReport25internal_default_instanceEv
                    void has_bandwith()const; // _ZNK3com6mojang6clacks8protocol12MetricReport12has_bandwithEv
                    void _internal_bandwith()const; // _ZNK3com6mojang6clacks8protocol12MetricReport18_internal_bandwithEv
                    void has_latency()const; // _ZNK3com6mojang6clacks8protocol12MetricReport11has_latencyEv
                    void _internal_latency()const; // _ZNK3com6mojang6clacks8protocol12MetricReport17_internal_latencyEv
                    class MetricUnion {

                    public:
                        MetricUnion(); // _ZN3com6mojang6clacks8protocol12MetricReport11MetricUnionC2Ev
                    };
                };
            }
        }
    }
}
