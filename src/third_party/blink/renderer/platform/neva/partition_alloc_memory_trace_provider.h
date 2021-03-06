// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_NEVA_PARTITION_ALLOC_MEMORY_TRACE_PROVIDER_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_NEVA_PARTITION_ALLOC_MEMORY_TRACE_PROVIDER_H_

#include "base/trace_event/neva/memory_trace_provider.h"
#include "public/platform/WebCommon.h"
#include "platform/wtf/Noncopyable.h"
#include "platform/wtf/ThreadingPrimitives.h"

namespace blink {
namespace neva {

class BLINK_PLATFORM_EXPORT PartitionAllocMemoryTraceProvider final
    : public base::trace_event::neva::MemoryTraceProvider {
  WTF_MAKE_NONCOPYABLE(PartitionAllocMemoryTraceProvider);

 public:
  static PartitionAllocMemoryTraceProvider* Instance();
  ~PartitionAllocMemoryTraceProvider() override {}

  // MemoryTraceProvider implementation.
  bool OnMemoryTrace() override;

  std::string GetCSVHeader() override;

 private:
    PartitionAllocMemoryTraceProvider() {}
};

}  // namespace neva
}  // namespace blink

#endif // THIRD_PARTY_BLINK_RENDERER_PLATFORM_NEVA_PARTITION_ALLOC_MEMORY_TRACE_PROVIDER_H_
