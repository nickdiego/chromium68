// This file is generated by PAL generator, do not modify.
// To make changes, modify the source file:
// test3.json

// Multiply-included message file, no traditional include guard
#include <string>

#include "ipc/ipc_message_macros.h"
#include "pal/ipc/pal_export.h"

#undef IPC_MESSAGE_EXPORT
#define IPC_MESSAGE_EXPORT PAL_EXPORT
#define IPC_MESSAGE_START SampleMsgStart

IPC_MESSAGE_ROUTED0(SampleHostMsg_Unsubscribe)
IPC_MESSAGE_ROUTED0(SampleHostMsg_Subscribe)
IPC_MESSAGE_ROUTED1(SampleMsg_SampleUpdate, std::string /* value */)
IPC_MESSAGE_ROUTED2(SampleHostMsg_CallFunc,
                    std::string /* arg1 */,
                    std::string /* arg2 */)
IPC_MESSAGE_ROUTED3(SampleMsg_ProcessDataDone,
                    int /* pal_async_callback_id */,
                    int /* error_code */,
                    std::string /* data */)
IPC_MESSAGE_ROUTED3(SampleHostMsg_ProcessData,
                    int /* pal_async_callback_id */,
                    std::string /* data */,
                    int32_t /* callback_index */)
IPC_MESSAGE_ROUTED0(SampleHostMsg_SubscribeToEvent)
