// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/segmenter_data.proto

#ifndef PROTOBUF_protocol_2fsegmenter_5fdata_2eproto__INCLUDED
#define PROTOBUF_protocol_2fsegmenter_5fdata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace mozc {
namespace converter {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_protocol_2fsegmenter_5fdata_2eproto();
void protobuf_AssignDesc_protocol_2fsegmenter_5fdata_2eproto();
void protobuf_ShutdownFile_protocol_2fsegmenter_5fdata_2eproto();

class SegmenterDataSizeInfo;

// ===================================================================

class SegmenterDataSizeInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mozc.converter.SegmenterDataSizeInfo) */ {
 public:
  SegmenterDataSizeInfo();
  virtual ~SegmenterDataSizeInfo();

  SegmenterDataSizeInfo(const SegmenterDataSizeInfo& from);

  inline SegmenterDataSizeInfo& operator=(const SegmenterDataSizeInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SegmenterDataSizeInfo& default_instance();

  void Swap(SegmenterDataSizeInfo* other);

  // implements Message ----------------------------------------------

  inline SegmenterDataSizeInfo* New() const { return New(NULL); }

  SegmenterDataSizeInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SegmenterDataSizeInfo& from);
  void MergeFrom(const SegmenterDataSizeInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SegmenterDataSizeInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 compressed_lsize = 1;
  bool has_compressed_lsize() const;
  void clear_compressed_lsize();
  static const int kCompressedLsizeFieldNumber = 1;
  ::google::protobuf::uint64 compressed_lsize() const;
  void set_compressed_lsize(::google::protobuf::uint64 value);

  // optional uint64 compressed_rsize = 2;
  bool has_compressed_rsize() const;
  void clear_compressed_rsize();
  static const int kCompressedRsizeFieldNumber = 2;
  ::google::protobuf::uint64 compressed_rsize() const;
  void set_compressed_rsize(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:mozc.converter.SegmenterDataSizeInfo)
 private:
  inline void set_has_compressed_lsize();
  inline void clear_has_compressed_lsize();
  inline void set_has_compressed_rsize();
  inline void clear_has_compressed_rsize();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 compressed_lsize_;
  ::google::protobuf::uint64 compressed_rsize_;
  friend void  protobuf_AddDesc_protocol_2fsegmenter_5fdata_2eproto();
  friend void protobuf_AssignDesc_protocol_2fsegmenter_5fdata_2eproto();
  friend void protobuf_ShutdownFile_protocol_2fsegmenter_5fdata_2eproto();

  void InitAsDefaultInstance();
  static SegmenterDataSizeInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SegmenterDataSizeInfo

// optional uint64 compressed_lsize = 1;
inline bool SegmenterDataSizeInfo::has_compressed_lsize() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SegmenterDataSizeInfo::set_has_compressed_lsize() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SegmenterDataSizeInfo::clear_has_compressed_lsize() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SegmenterDataSizeInfo::clear_compressed_lsize() {
  compressed_lsize_ = GOOGLE_ULONGLONG(0);
  clear_has_compressed_lsize();
}
inline ::google::protobuf::uint64 SegmenterDataSizeInfo::compressed_lsize() const {
  // @@protoc_insertion_point(field_get:mozc.converter.SegmenterDataSizeInfo.compressed_lsize)
  return compressed_lsize_;
}
inline void SegmenterDataSizeInfo::set_compressed_lsize(::google::protobuf::uint64 value) {
  set_has_compressed_lsize();
  compressed_lsize_ = value;
  // @@protoc_insertion_point(field_set:mozc.converter.SegmenterDataSizeInfo.compressed_lsize)
}

// optional uint64 compressed_rsize = 2;
inline bool SegmenterDataSizeInfo::has_compressed_rsize() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SegmenterDataSizeInfo::set_has_compressed_rsize() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SegmenterDataSizeInfo::clear_has_compressed_rsize() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SegmenterDataSizeInfo::clear_compressed_rsize() {
  compressed_rsize_ = GOOGLE_ULONGLONG(0);
  clear_has_compressed_rsize();
}
inline ::google::protobuf::uint64 SegmenterDataSizeInfo::compressed_rsize() const {
  // @@protoc_insertion_point(field_get:mozc.converter.SegmenterDataSizeInfo.compressed_rsize)
  return compressed_rsize_;
}
inline void SegmenterDataSizeInfo::set_compressed_rsize(::google::protobuf::uint64 value) {
  set_has_compressed_rsize();
  compressed_rsize_ = value;
  // @@protoc_insertion_point(field_set:mozc.converter.SegmenterDataSizeInfo.compressed_rsize)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace converter
}  // namespace mozc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2fsegmenter_5fdata_2eproto__INCLUDED
