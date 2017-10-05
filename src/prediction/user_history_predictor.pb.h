// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prediction/user_history_predictor.proto

#ifndef PROTOBUF_prediction_2fuser_5fhistory_5fpredictor_2eproto__INCLUDED
#define PROTOBUF_prediction_2fuser_5fhistory_5fpredictor_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace mozc {
namespace user_history_predictor {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
void protobuf_AssignDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
void protobuf_ShutdownFile_prediction_2fuser_5fhistory_5fpredictor_2eproto();

class UserHistory;
class UserHistory_Entry;
class UserHistory_NextEntry;

enum UserHistory_Entry_EntryType {
  UserHistory_Entry_EntryType_DEFAULT_ENTRY = 0,
  UserHistory_Entry_EntryType_CLEAN_ALL_EVENT = 1,
  UserHistory_Entry_EntryType_CLEAN_UNUSED_EVENT = 2
};
bool UserHistory_Entry_EntryType_IsValid(int value);
const UserHistory_Entry_EntryType UserHistory_Entry_EntryType_EntryType_MIN = UserHistory_Entry_EntryType_DEFAULT_ENTRY;
const UserHistory_Entry_EntryType UserHistory_Entry_EntryType_EntryType_MAX = UserHistory_Entry_EntryType_CLEAN_UNUSED_EVENT;
const int UserHistory_Entry_EntryType_EntryType_ARRAYSIZE = UserHistory_Entry_EntryType_EntryType_MAX + 1;

const ::google::protobuf::EnumDescriptor* UserHistory_Entry_EntryType_descriptor();
inline const ::std::string& UserHistory_Entry_EntryType_Name(UserHistory_Entry_EntryType value) {
  return ::google::protobuf::internal::NameOfEnum(
    UserHistory_Entry_EntryType_descriptor(), value);
}
inline bool UserHistory_Entry_EntryType_Parse(
    const ::std::string& name, UserHistory_Entry_EntryType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UserHistory_Entry_EntryType>(
    UserHistory_Entry_EntryType_descriptor(), name, value);
}
// ===================================================================

class UserHistory_NextEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mozc.user_history_predictor.UserHistory.NextEntry) */ {
 public:
  UserHistory_NextEntry();
  virtual ~UserHistory_NextEntry();

  UserHistory_NextEntry(const UserHistory_NextEntry& from);

  inline UserHistory_NextEntry& operator=(const UserHistory_NextEntry& from) {
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
  static const UserHistory_NextEntry& default_instance();

  void Swap(UserHistory_NextEntry* other);

  // implements Message ----------------------------------------------

  inline UserHistory_NextEntry* New() const { return New(NULL); }

  UserHistory_NextEntry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserHistory_NextEntry& from);
  void MergeFrom(const UserHistory_NextEntry& from);
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
  void InternalSwap(UserHistory_NextEntry* other);
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

  // optional uint32 entry_fp = 1 [default = 0];
  bool has_entry_fp() const;
  void clear_entry_fp();
  static const int kEntryFpFieldNumber = 1;
  ::google::protobuf::uint32 entry_fp() const;
  void set_entry_fp(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:mozc.user_history_predictor.UserHistory.NextEntry)
 private:
  inline void set_has_entry_fp();
  inline void clear_has_entry_fp();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 entry_fp_;
  friend void  protobuf_AddDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_AssignDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_ShutdownFile_prediction_2fuser_5fhistory_5fpredictor_2eproto();

  void InitAsDefaultInstance();
  static UserHistory_NextEntry* default_instance_;
};
// -------------------------------------------------------------------

class UserHistory_Entry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mozc.user_history_predictor.UserHistory.Entry) */ {
 public:
  UserHistory_Entry();
  virtual ~UserHistory_Entry();

  UserHistory_Entry(const UserHistory_Entry& from);

  inline UserHistory_Entry& operator=(const UserHistory_Entry& from) {
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
  static const UserHistory_Entry& default_instance();

  void Swap(UserHistory_Entry* other);

  // implements Message ----------------------------------------------

  inline UserHistory_Entry* New() const { return New(NULL); }

  UserHistory_Entry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserHistory_Entry& from);
  void MergeFrom(const UserHistory_Entry& from);
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
  void InternalSwap(UserHistory_Entry* other);
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

  typedef UserHistory_Entry_EntryType EntryType;
  static const EntryType DEFAULT_ENTRY =
    UserHistory_Entry_EntryType_DEFAULT_ENTRY;
  static const EntryType CLEAN_ALL_EVENT =
    UserHistory_Entry_EntryType_CLEAN_ALL_EVENT;
  static const EntryType CLEAN_UNUSED_EVENT =
    UserHistory_Entry_EntryType_CLEAN_UNUSED_EVENT;
  static inline bool EntryType_IsValid(int value) {
    return UserHistory_Entry_EntryType_IsValid(value);
  }
  static const EntryType EntryType_MIN =
    UserHistory_Entry_EntryType_EntryType_MIN;
  static const EntryType EntryType_MAX =
    UserHistory_Entry_EntryType_EntryType_MAX;
  static const int EntryType_ARRAYSIZE =
    UserHistory_Entry_EntryType_EntryType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EntryType_descriptor() {
    return UserHistory_Entry_EntryType_descriptor();
  }
  static inline const ::std::string& EntryType_Name(EntryType value) {
    return UserHistory_Entry_EntryType_Name(value);
  }
  static inline bool EntryType_Parse(const ::std::string& name,
      EntryType* value) {
    return UserHistory_Entry_EntryType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string key = 1 [default = ""];
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2 [default = ""];
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // optional string description = 6 [default = ""];
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 6;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // optional uint32 suggestion_freq = 3 [default = 0];
  bool has_suggestion_freq() const;
  void clear_suggestion_freq();
  static const int kSuggestionFreqFieldNumber = 3;
  ::google::protobuf::uint32 suggestion_freq() const;
  void set_suggestion_freq(::google::protobuf::uint32 value);

  // optional uint32 conversion_freq = 5 [default = 0];
  bool has_conversion_freq() const;
  void clear_conversion_freq();
  static const int kConversionFreqFieldNumber = 5;
  ::google::protobuf::uint32 conversion_freq() const;
  void set_conversion_freq(::google::protobuf::uint32 value);

  // optional uint64 last_access_time = 4 [default = 0];
  bool has_last_access_time() const;
  void clear_last_access_time();
  static const int kLastAccessTimeFieldNumber = 4;
  ::google::protobuf::uint64 last_access_time() const;
  void set_last_access_time(::google::protobuf::uint64 value);

  // repeated .mozc.user_history_predictor.UserHistory.NextEntry next_entries = 7;
  int next_entries_size() const;
  void clear_next_entries();
  static const int kNextEntriesFieldNumber = 7;
  const ::mozc::user_history_predictor::UserHistory_NextEntry& next_entries(int index) const;
  ::mozc::user_history_predictor::UserHistory_NextEntry* mutable_next_entries(int index);
  ::mozc::user_history_predictor::UserHistory_NextEntry* add_next_entries();
  ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_NextEntry >*
      mutable_next_entries();
  const ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_NextEntry >&
      next_entries() const;

  // optional bool bigram_boost = 20 [default = false];
  bool has_bigram_boost() const;
  void clear_bigram_boost();
  static const int kBigramBoostFieldNumber = 20;
  bool bigram_boost() const;
  void set_bigram_boost(bool value);

  // optional bool spelling_correction = 21 [default = false];
  bool has_spelling_correction() const;
  void clear_spelling_correction();
  static const int kSpellingCorrectionFieldNumber = 21;
  bool spelling_correction() const;
  void set_spelling_correction(bool value);

  // optional bool removed = 8 [default = false];
  bool has_removed() const;
  void clear_removed();
  static const int kRemovedFieldNumber = 8;
  bool removed() const;
  void set_removed(bool value);

  // optional .mozc.user_history_predictor.UserHistory.Entry.EntryType entry_type = 9 [default = DEFAULT_ENTRY];
  bool has_entry_type() const;
  void clear_entry_type();
  static const int kEntryTypeFieldNumber = 9;
  ::mozc::user_history_predictor::UserHistory_Entry_EntryType entry_type() const;
  void set_entry_type(::mozc::user_history_predictor::UserHistory_Entry_EntryType value);

  // @@protoc_insertion_point(class_scope:mozc.user_history_predictor.UserHistory.Entry)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_suggestion_freq();
  inline void clear_has_suggestion_freq();
  inline void set_has_conversion_freq();
  inline void clear_has_conversion_freq();
  inline void set_has_last_access_time();
  inline void clear_has_last_access_time();
  inline void set_has_bigram_boost();
  inline void clear_has_bigram_boost();
  inline void set_has_spelling_correction();
  inline void clear_has_spelling_correction();
  inline void set_has_removed();
  inline void clear_has_removed();
  inline void set_has_entry_type();
  inline void clear_has_entry_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::uint32 suggestion_freq_;
  ::google::protobuf::uint32 conversion_freq_;
  ::google::protobuf::uint64 last_access_time_;
  ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_NextEntry > next_entries_;
  bool bigram_boost_;
  bool spelling_correction_;
  bool removed_;
  int entry_type_;
  friend void  protobuf_AddDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_AssignDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_ShutdownFile_prediction_2fuser_5fhistory_5fpredictor_2eproto();

  void InitAsDefaultInstance();
  static UserHistory_Entry* default_instance_;
};
// -------------------------------------------------------------------

class UserHistory : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mozc.user_history_predictor.UserHistory) */ {
 public:
  UserHistory();
  virtual ~UserHistory();

  UserHistory(const UserHistory& from);

  inline UserHistory& operator=(const UserHistory& from) {
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
  static const UserHistory& default_instance();

  void Swap(UserHistory* other);

  // implements Message ----------------------------------------------

  inline UserHistory* New() const { return New(NULL); }

  UserHistory* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserHistory& from);
  void MergeFrom(const UserHistory& from);
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
  void InternalSwap(UserHistory* other);
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

  typedef UserHistory_NextEntry NextEntry;
  typedef UserHistory_Entry Entry;

  // accessors -------------------------------------------------------

  // repeated .mozc.user_history_predictor.UserHistory.Entry entries = 6;
  int entries_size() const;
  void clear_entries();
  static const int kEntriesFieldNumber = 6;
  const ::mozc::user_history_predictor::UserHistory_Entry& entries(int index) const;
  ::mozc::user_history_predictor::UserHistory_Entry* mutable_entries(int index);
  ::mozc::user_history_predictor::UserHistory_Entry* add_entries();
  ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_Entry >*
      mutable_entries();
  const ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_Entry >&
      entries() const;

  // @@protoc_insertion_point(class_scope:mozc.user_history_predictor.UserHistory)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_Entry > entries_;
  friend void  protobuf_AddDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_AssignDesc_prediction_2fuser_5fhistory_5fpredictor_2eproto();
  friend void protobuf_ShutdownFile_prediction_2fuser_5fhistory_5fpredictor_2eproto();

  void InitAsDefaultInstance();
  static UserHistory* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserHistory_NextEntry

// optional uint32 entry_fp = 1 [default = 0];
inline bool UserHistory_NextEntry::has_entry_fp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserHistory_NextEntry::set_has_entry_fp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserHistory_NextEntry::clear_has_entry_fp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserHistory_NextEntry::clear_entry_fp() {
  entry_fp_ = 0u;
  clear_has_entry_fp();
}
inline ::google::protobuf::uint32 UserHistory_NextEntry::entry_fp() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.NextEntry.entry_fp)
  return entry_fp_;
}
inline void UserHistory_NextEntry::set_entry_fp(::google::protobuf::uint32 value) {
  set_has_entry_fp();
  entry_fp_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.NextEntry.entry_fp)
}

// -------------------------------------------------------------------

// UserHistory_Entry

// optional string key = 1 [default = ""];
inline bool UserHistory_Entry::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserHistory_Entry::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserHistory_Entry::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserHistory_Entry::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& UserHistory_Entry::key() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.key)
}
inline void UserHistory_Entry::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mozc.user_history_predictor.UserHistory.Entry.key)
}
inline void UserHistory_Entry::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mozc.user_history_predictor.UserHistory.Entry.key)
}
inline ::std::string* UserHistory_Entry::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:mozc.user_history_predictor.UserHistory.Entry.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserHistory_Entry::release_key() {
  // @@protoc_insertion_point(field_release:mozc.user_history_predictor.UserHistory.Entry.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:mozc.user_history_predictor.UserHistory.Entry.key)
}

// optional string value = 2 [default = ""];
inline bool UserHistory_Entry::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserHistory_Entry::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserHistory_Entry::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserHistory_Entry::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& UserHistory_Entry::value() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.value)
}
inline void UserHistory_Entry::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mozc.user_history_predictor.UserHistory.Entry.value)
}
inline void UserHistory_Entry::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mozc.user_history_predictor.UserHistory.Entry.value)
}
inline ::std::string* UserHistory_Entry::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:mozc.user_history_predictor.UserHistory.Entry.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserHistory_Entry::release_value() {
  // @@protoc_insertion_point(field_release:mozc.user_history_predictor.UserHistory.Entry.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:mozc.user_history_predictor.UserHistory.Entry.value)
}

// optional string description = 6 [default = ""];
inline bool UserHistory_Entry::has_description() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserHistory_Entry::set_has_description() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserHistory_Entry::clear_has_description() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserHistory_Entry::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
inline const ::std::string& UserHistory_Entry::description() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.description)
}
inline void UserHistory_Entry::set_description(const char* value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mozc.user_history_predictor.UserHistory.Entry.description)
}
inline void UserHistory_Entry::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mozc.user_history_predictor.UserHistory.Entry.description)
}
inline ::std::string* UserHistory_Entry::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:mozc.user_history_predictor.UserHistory.Entry.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserHistory_Entry::release_description() {
  // @@protoc_insertion_point(field_release:mozc.user_history_predictor.UserHistory.Entry.description)
  clear_has_description();
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserHistory_Entry::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:mozc.user_history_predictor.UserHistory.Entry.description)
}

// optional uint32 suggestion_freq = 3 [default = 0];
inline bool UserHistory_Entry::has_suggestion_freq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UserHistory_Entry::set_has_suggestion_freq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UserHistory_Entry::clear_has_suggestion_freq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UserHistory_Entry::clear_suggestion_freq() {
  suggestion_freq_ = 0u;
  clear_has_suggestion_freq();
}
inline ::google::protobuf::uint32 UserHistory_Entry::suggestion_freq() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.suggestion_freq)
  return suggestion_freq_;
}
inline void UserHistory_Entry::set_suggestion_freq(::google::protobuf::uint32 value) {
  set_has_suggestion_freq();
  suggestion_freq_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.suggestion_freq)
}

// optional uint32 conversion_freq = 5 [default = 0];
inline bool UserHistory_Entry::has_conversion_freq() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UserHistory_Entry::set_has_conversion_freq() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UserHistory_Entry::clear_has_conversion_freq() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UserHistory_Entry::clear_conversion_freq() {
  conversion_freq_ = 0u;
  clear_has_conversion_freq();
}
inline ::google::protobuf::uint32 UserHistory_Entry::conversion_freq() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.conversion_freq)
  return conversion_freq_;
}
inline void UserHistory_Entry::set_conversion_freq(::google::protobuf::uint32 value) {
  set_has_conversion_freq();
  conversion_freq_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.conversion_freq)
}

// optional uint64 last_access_time = 4 [default = 0];
inline bool UserHistory_Entry::has_last_access_time() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserHistory_Entry::set_has_last_access_time() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserHistory_Entry::clear_has_last_access_time() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserHistory_Entry::clear_last_access_time() {
  last_access_time_ = GOOGLE_ULONGLONG(0);
  clear_has_last_access_time();
}
inline ::google::protobuf::uint64 UserHistory_Entry::last_access_time() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.last_access_time)
  return last_access_time_;
}
inline void UserHistory_Entry::set_last_access_time(::google::protobuf::uint64 value) {
  set_has_last_access_time();
  last_access_time_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.last_access_time)
}

// repeated .mozc.user_history_predictor.UserHistory.NextEntry next_entries = 7;
inline int UserHistory_Entry::next_entries_size() const {
  return next_entries_.size();
}
inline void UserHistory_Entry::clear_next_entries() {
  next_entries_.Clear();
}
inline const ::mozc::user_history_predictor::UserHistory_NextEntry& UserHistory_Entry::next_entries(int index) const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.next_entries)
  return next_entries_.Get(index);
}
inline ::mozc::user_history_predictor::UserHistory_NextEntry* UserHistory_Entry::mutable_next_entries(int index) {
  // @@protoc_insertion_point(field_mutable:mozc.user_history_predictor.UserHistory.Entry.next_entries)
  return next_entries_.Mutable(index);
}
inline ::mozc::user_history_predictor::UserHistory_NextEntry* UserHistory_Entry::add_next_entries() {
  // @@protoc_insertion_point(field_add:mozc.user_history_predictor.UserHistory.Entry.next_entries)
  return next_entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_NextEntry >*
UserHistory_Entry::mutable_next_entries() {
  // @@protoc_insertion_point(field_mutable_list:mozc.user_history_predictor.UserHistory.Entry.next_entries)
  return &next_entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_NextEntry >&
UserHistory_Entry::next_entries() const {
  // @@protoc_insertion_point(field_list:mozc.user_history_predictor.UserHistory.Entry.next_entries)
  return next_entries_;
}

// optional bool bigram_boost = 20 [default = false];
inline bool UserHistory_Entry::has_bigram_boost() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UserHistory_Entry::set_has_bigram_boost() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UserHistory_Entry::clear_has_bigram_boost() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UserHistory_Entry::clear_bigram_boost() {
  bigram_boost_ = false;
  clear_has_bigram_boost();
}
inline bool UserHistory_Entry::bigram_boost() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.bigram_boost)
  return bigram_boost_;
}
inline void UserHistory_Entry::set_bigram_boost(bool value) {
  set_has_bigram_boost();
  bigram_boost_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.bigram_boost)
}

// optional bool spelling_correction = 21 [default = false];
inline bool UserHistory_Entry::has_spelling_correction() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void UserHistory_Entry::set_has_spelling_correction() {
  _has_bits_[0] |= 0x00000100u;
}
inline void UserHistory_Entry::clear_has_spelling_correction() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void UserHistory_Entry::clear_spelling_correction() {
  spelling_correction_ = false;
  clear_has_spelling_correction();
}
inline bool UserHistory_Entry::spelling_correction() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.spelling_correction)
  return spelling_correction_;
}
inline void UserHistory_Entry::set_spelling_correction(bool value) {
  set_has_spelling_correction();
  spelling_correction_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.spelling_correction)
}

// optional bool removed = 8 [default = false];
inline bool UserHistory_Entry::has_removed() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void UserHistory_Entry::set_has_removed() {
  _has_bits_[0] |= 0x00000200u;
}
inline void UserHistory_Entry::clear_has_removed() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void UserHistory_Entry::clear_removed() {
  removed_ = false;
  clear_has_removed();
}
inline bool UserHistory_Entry::removed() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.removed)
  return removed_;
}
inline void UserHistory_Entry::set_removed(bool value) {
  set_has_removed();
  removed_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.removed)
}

// optional .mozc.user_history_predictor.UserHistory.Entry.EntryType entry_type = 9 [default = DEFAULT_ENTRY];
inline bool UserHistory_Entry::has_entry_type() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void UserHistory_Entry::set_has_entry_type() {
  _has_bits_[0] |= 0x00000400u;
}
inline void UserHistory_Entry::clear_has_entry_type() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void UserHistory_Entry::clear_entry_type() {
  entry_type_ = 0;
  clear_has_entry_type();
}
inline ::mozc::user_history_predictor::UserHistory_Entry_EntryType UserHistory_Entry::entry_type() const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.Entry.entry_type)
  return static_cast< ::mozc::user_history_predictor::UserHistory_Entry_EntryType >(entry_type_);
}
inline void UserHistory_Entry::set_entry_type(::mozc::user_history_predictor::UserHistory_Entry_EntryType value) {
  assert(::mozc::user_history_predictor::UserHistory_Entry_EntryType_IsValid(value));
  set_has_entry_type();
  entry_type_ = value;
  // @@protoc_insertion_point(field_set:mozc.user_history_predictor.UserHistory.Entry.entry_type)
}

// -------------------------------------------------------------------

// UserHistory

// repeated .mozc.user_history_predictor.UserHistory.Entry entries = 6;
inline int UserHistory::entries_size() const {
  return entries_.size();
}
inline void UserHistory::clear_entries() {
  entries_.Clear();
}
inline const ::mozc::user_history_predictor::UserHistory_Entry& UserHistory::entries(int index) const {
  // @@protoc_insertion_point(field_get:mozc.user_history_predictor.UserHistory.entries)
  return entries_.Get(index);
}
inline ::mozc::user_history_predictor::UserHistory_Entry* UserHistory::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:mozc.user_history_predictor.UserHistory.entries)
  return entries_.Mutable(index);
}
inline ::mozc::user_history_predictor::UserHistory_Entry* UserHistory::add_entries() {
  // @@protoc_insertion_point(field_add:mozc.user_history_predictor.UserHistory.entries)
  return entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_Entry >*
UserHistory::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:mozc.user_history_predictor.UserHistory.entries)
  return &entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mozc::user_history_predictor::UserHistory_Entry >&
UserHistory::entries() const {
  // @@protoc_insertion_point(field_list:mozc.user_history_predictor.UserHistory.entries)
  return entries_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace user_history_predictor
}  // namespace mozc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::mozc::user_history_predictor::UserHistory_Entry_EntryType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mozc::user_history_predictor::UserHistory_Entry_EntryType>() {
  return ::mozc::user_history_predictor::UserHistory_Entry_EntryType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_prediction_2fuser_5fhistory_5fpredictor_2eproto__INCLUDED